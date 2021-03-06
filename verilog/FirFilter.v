`timescale 1ns / 1ps

module FirFilter(
    input clkfir,
	 input clkadc,
    input wire data_valid,
	 input wire [15:0] raw_data,
	 output reg [15:0] filtered_data
);


// wire declaration
wire s_axis_data_tready;
wire m_axis_data_tvalid;
reg [15:0] s_axis_data_tdata;
wire [39:0] m_axis_data_tdata;

// feed raw data to filter when data_valid and data_tready are set
always @(posedge(data_valid)) begin
	if (s_axis_data_tready) begin
		s_axis_data_tdata <= raw_data;
	end
end

FIR_FC_1500 filter (
  .aclk(clkfir),                               // input aclk
  .s_axis_data_tvalid(data_valid),             // input s_axis_data_tvalid
  .s_axis_data_tready(s_axis_data_tready),     // output s_axis_data_tready
  .s_axis_data_tdata(s_axis_data_tdata),       // input [15 : 0] s_axis_data_tdata
  .m_axis_data_tvalid(m_axis_data_tvalid),     // output m_axis_data_tvalid
  .m_axis_data_tdata(m_axis_data_tdata)        // output [39 : 0] m_axis_data_tdata
);

// return filtered data
always@(posedge(m_axis_data_tvalid)) begin
	filtered_data <= m_axis_data_tdata[35:20];
end

endmodule
