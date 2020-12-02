`timescale 1ns / 1ps

module fir_filter(
aclk, 
s_axis_data_tdata,
s_axis_data_tvalid,
m_axis_data_tvalid, 
m_axis_data_tdata
);

input wire aclk;
input wire s_axis_data_tvalid;
input wire [15:0] s_axis_data_tdata;
output wire [15:0] m_axis_data_tdata;
output wire m_axis_data_tvalid;

wire s_axis_data_tready;


filter inst1 (
  .aclk(aclk),                                 // input aclk
  .s_axis_data_tvalid(s_axis_data_tvalid),     // input s_axis_data_tvalid
  .s_axis_data_tready(s_axis_data_tready),     // output s_axis_data_tready
  .s_axis_data_tdata(s_axis_data_tdata),       // input [15 : 0] s_axis_data_tdata
  .m_axis_data_tvalid(m_axis_data_tvalid),     // output m_axis_data_tvalid
  .m_axis_data_tdata(m_axis_data_tdata)        // output [39 : 0] m_axis_data_tdata
);

endmodule
