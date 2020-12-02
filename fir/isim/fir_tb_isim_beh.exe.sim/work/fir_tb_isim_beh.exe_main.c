/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *VL_P_2533777724;
char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004134447467_2073120511_init();
    unisims_ver_m_00000000003405408344_3841093685_init();
    unisims_ver_m_00000000004221170615_0679316750_init();
    unisims_ver_m_00000000000236260522_2449448540_init();
    unisims_ver_m_00000000001108370118_4034636533_init();
    unisims_ver_m_00000000001108370118_0289162403_init();
    unisims_ver_m_00000000001108370118_2947848906_init();
    unisims_ver_m_00000000001108370118_3299605463_init();
    unisims_ver_m_00000000001784029001_3916800796_init();
    unisims_ver_m_00000000001784029001_3701845831_init();
    unisims_ver_m_00000000001784029001_2120891015_init();
    unisims_ver_m_00000000001784029001_3945073720_init();
    unisims_ver_m_00000000001784029001_3780260598_init();
    unisims_ver_m_00000000001784029001_0774511626_init();
    unisims_ver_m_00000000001784029001_2190992681_init();
    unisims_ver_m_00000000001784029001_1854884612_init();
    unisims_ver_m_00000000001784029001_1908512352_init();
    unisims_ver_m_00000000001784029001_0126965814_init();
    unisims_ver_m_00000000001784029001_1663858206_init();
    unisims_ver_m_00000000001784029001_3675637697_init();
    unisims_ver_m_00000000001784029001_1556732098_init();
    unisims_ver_m_00000000001784029001_0965407520_init();
    unisims_ver_m_00000000001784029001_3539104082_init();
    unisims_ver_m_00000000001784029001_3203356004_init();
    unisims_ver_m_00000000001784029001_0711289845_init();
    unisims_ver_m_00000000001784029001_2473207309_init();
    unisims_ver_m_00000000001784029001_2043733266_init();
    unisims_ver_m_00000000001784029001_1856057054_init();
    unisims_ver_m_00000000001784029001_2709923154_init();
    unisims_ver_m_00000000001784029001_0908639253_init();
    unisims_ver_m_00000000002142219875_2489919055_init();
    unisims_ver_m_00000000002142219875_2756140263_init();
    unisims_ver_m_00000000002142219875_3371809188_init();
    unisims_ver_m_00000000001347610518_4172009477_init();
    unisims_ver_m_00000000001347610518_3118182797_init();
    unisims_ver_m_00000000001347610518_3301767151_init();
    unisims_ver_m_00000000001347610518_1867086116_init();
    unisims_ver_m_00000000001347610518_0569819698_init();
    unisims_ver_m_00000000001347610518_0197576137_init();
    unisims_ver_m_00000000001508379050_3852734344_init();
    unisims_ver_m_00000000001508379050_0372621018_init();
    unisims_ver_m_00000000001773747898_0266641171_init();
    unisims_ver_m_00000000001773747898_2324208960_init();
    unisims_ver_m_00000000001773747898_0257217429_init();
    unisims_ver_m_00000000001773747898_3056262855_init();
    unisims_ver_m_00000000000073490608_3589000630_init();
    unisims_ver_m_00000000002601448656_3367321443_init();
    unisims_ver_m_00000000003317509437_1759035934_init();
    unisims_ver_m_00000000003927721830_1593237687_init();
    unisims_ver_m_00000000000909115699_2771340377_init();
    unisims_ver_m_00000000003848737514_1058825862_init();
    unisims_ver_m_00000000000950279619_0270976356_init();
    unisims_ver_m_00000000000129024098_1730278898_init();
    work_m_00000000001683361731_0408886691_init();
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    std_textio_init();
    ieee_p_3564397177_init();
    vl_p_2533777724_init();
    work_a_3538921338_2372691052_init();


    xsi_register_tops("work_a_3538921338_2372691052");
    xsi_register_tops("work_m_00000000004134447467_2073120511");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    VL_P_2533777724 = xsi_get_engine_memory("vl_p_2533777724");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
