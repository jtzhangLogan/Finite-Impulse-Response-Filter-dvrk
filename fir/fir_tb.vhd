library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use STD.textio.all;
use ieee.std_logic_textio.all;
 
ENTITY fir_tb IS
END fir_tb;
 
ARCHITECTURE behavior OF fir_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT filter
    PORT(
         aclk : IN  std_logic;
         s_axis_data_tvalid : IN  std_logic;
         s_axis_data_tready : OUT  std_logic;
         m_axis_data_tvalid : OUT  std_logic;
         s_axis_data_tdata : IN  std_logic_vector(15 downto 0);
         m_axis_data_tdata : OUT  std_logic_vector(39 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal aclk : std_logic := '0';
   signal s_axis_data_tvalid : std_logic := '0';
   signal s_axis_data_tdata : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal s_axis_data_tready : std_logic; 
   signal m_axis_data_tvalid : std_logic;
   signal m_axis_data_tdata : std_logic_vector(39 downto 0);
	
	--File pointer
	file file_in	:	text;
	file file_out	:	text;
	
   -- Clock period definitions
   constant aclk_period : time := 163 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: filter PORT MAP (
          aclk => aclk,
          s_axis_data_tvalid => s_axis_data_tvalid,
          s_axis_data_tready => s_axis_data_tready,
          m_axis_data_tvalid => m_axis_data_tvalid,
          s_axis_data_tdata => s_axis_data_tdata,
          m_axis_data_tdata => m_axis_data_tdata
        );

   -- Clock process definitions
   aclk_process :process
   begin
		aclk <= '0';
		wait for aclk_period/2;
		aclk <= '1';
		wait for aclk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   variable v_in     : line;
   variable v_tmp    : std_logic_vector(15 downto 0);


	-- procedure to feed input data to filter
	procedure drive_data ( data    : std_logic_vector(15 downto 0);
                          samples : natural := 1 ) is
      variable ip_count : integer := 0;
		begin
			ip_count := 0;
			loop
				s_axis_data_tvalid <= '1';
				s_axis_data_tdata  <= data;
				loop
				wait until rising_edge(aclk);
				exit when s_axis_data_tready = '1';
				end loop;
				ip_count := ip_count + 1;
				wait for 10 ns;
				s_axis_data_tvalid <= '0';
				wait for  aclk_period * 52;
				exit when ip_count >= samples;
			end loop;
   end procedure drive_data;
	 
	-- main 
   begin	
	
	wait for aclk_period * 10;
   file_open(file_in, "raw_unsigned.txt",  read_mode);
	file_open(file_out, "filtered_unsigned.txt", write_mode);
   while not endfile(file_in) loop
      readline(file_in, v_in);
      read(v_in, v_tmp);
		drive_data(v_tmp);
      -- Pass the variable to a signal to allow the ripple-carry to use it
	end loop;
   file_close(file_in);
   file_close(file_out);
   wait;
   end process;
	
	-- record data
	record_data: process
	variable v_out    : line;
	
	begin
	wait for aclk_period * 10;
	
	if m_axis_data_tvalid = '1' then
		write(v_out, m_axis_data_tdata);
		writeline(file_out, v_out);
	end if;
	
   end process;
END;
