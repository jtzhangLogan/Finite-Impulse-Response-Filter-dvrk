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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/maxwe/Desktop/Finite-Impulse-Response-Filter-dvrk/fir/fir_tb.vhd";
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);


static void work_a_3538921338_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

void work_a_3538921338_2372691052_sub_1915253116_2855802964(char *t0, char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[24];
    char t6[16];
    char t13[8];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    int t31;
    int64 t32;
    int64 t33;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 15;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 15);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t4 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t8 + 88U);
    *((char **)t12) = t11;
    t14 = (t8 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = 0;
    t15 = (t8 + 80U);
    *((unsigned int *)t15) = 4U;
    t16 = (t5 + 4U);
    t17 = (t2 != 0);
    if (t17 == 1)
        goto LAB3;

LAB2:    t18 = (t5 + 12U);
    *((char **)t18) = t6;
    t19 = (t5 + 20U);
    *((int *)t19) = t3;
    t20 = (t8 + 56U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    *((int *)t20) = 0;

LAB4:
LAB5:    t7 = (t0 + 4544);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 4608);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t20 = (t0 + 7676U);
    t21 = (t20 + 12U);
    t10 = *((unsigned int *)t21);
    t10 = (t10 * 1U);
    memcpy(t15, t2, t10);
    xsi_driver_first_trans_fast(t7);

LAB8:
LAB9:    t7 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t7, -1, -1);

LAB15:    t11 = (t1 + 224U);
    t11 = *((char **)t11);
    xsi_wp_set_status(t11, 1);
    t12 = (t1 + 88U);
    t14 = *((char **)t12);
    t15 = (t14 + 2480U);
    *((unsigned int *)t15) = 1U;
    t20 = (t1 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t25 = (t24 + 2480U);
    t10 = *((unsigned int *)t25);
    if (t10 == 1)
        goto LAB16;

LAB17:    t26 = (t1 + 88U);
    t27 = *((char **)t26);
    t28 = (t27 + 2480U);
    *((unsigned int *)t28) = 3U;

LAB13:
LAB14:    t29 = (t0 + 992U);
    t17 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t29, 0U, 0U);
    if (t17 == 1)
        goto LAB12;
    else
        goto LAB15;

LAB3:    *((char **)t16) = t2;
    goto LAB2;

LAB6:;
LAB7:
LAB1:    return;
LAB10:;
LAB11:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t9 = *((int *)t11);
    t31 = (t9 + 1);
    t7 = (t8 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = t31;
    t32 = (10 * 1000LL);
    xsi_process_wait(t1, t32);

LAB22:    t7 = (t1 + 88U);
    t11 = *((char **)t7);
    t12 = (t11 + 2480U);
    *((unsigned int *)t12) = 1U;
    t14 = (t1 + 88U);
    t15 = *((char **)t14);
    t20 = (t15 + 0U);
    getcontext(t20);
    t21 = (t1 + 88U);
    t22 = *((char **)t21);
    t23 = (t22 + 2480U);
    t10 = *((unsigned int *)t23);
    if (t10 == 1)
        goto LAB23;

LAB24:    t24 = (t1 + 88U);
    t25 = *((char **)t24);
    t26 = (t25 + 2480U);
    *((unsigned int *)t26) = 3U;

LAB20:
LAB21:
LAB19:    t7 = (t0 + 4544);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 2128U);
    t11 = *((char **)t7);
    t32 = *((int64 *)t11);
    t33 = (t32 * 52);
    xsi_process_wait(t1, t33);

LAB28:    t7 = (t1 + 88U);
    t12 = *((char **)t7);
    t14 = (t12 + 2480U);
    *((unsigned int *)t14) = 1U;
    t15 = (t1 + 88U);
    t20 = *((char **)t15);
    t21 = (t20 + 0U);
    getcontext(t21);
    t22 = (t1 + 88U);
    t23 = *((char **)t22);
    t24 = (t23 + 2480U);
    t10 = *((unsigned int *)t24);
    if (t10 == 1)
        goto LAB29;

LAB30:    t25 = (t1 + 88U);
    t26 = *((char **)t25);
    t27 = (t26 + 2480U);
    *((unsigned int *)t27) = 3U;

LAB26:
LAB27:
LAB25:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t9 = *((int *)t11);
    t17 = (t9 >= t3);
    if (t17 != 0)
        goto LAB7;

LAB31:    goto LAB4;

LAB12:    xsi_remove_dynamic_wait(t1, t7);
    t7 = (t0 + 1512U);
    t11 = *((char **)t7);
    t17 = *((unsigned char *)t11);
    t30 = (t17 == (unsigned char)3);
    if (t30 != 0)
        goto LAB11;

LAB18:    goto LAB8;

LAB16:    xsi_saveStackAndSuspend(t1);
    goto LAB17;

LAB23:    xsi_saveStackAndSuspend(t1);
    goto LAB24;

LAB29:    xsi_saveStackAndSuspend(t1);
    goto LAB30;

}

static void work_a_3538921338_2372691052_p_1(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;

LAB0:    t1 = (t0 + 3832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 * 10);
    t2 = (t0 + 3640);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2576U);
    t3 = (t0 + 7964);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 16;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (16 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    std_textio_file_open1(t2, t3, t7, (unsigned char)0);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2680U);
    t3 = (t0 + 7980);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 21;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (21 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    std_textio_file_open1(t2, t3, t7, (unsigned char)1);
    xsi_set_current_line(98, ng0);

LAB8:    t2 = (t0 + 2576U);
    t12 = std_textio_endfile(t2);
    t13 = (!(t12));
    if (t13 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2576U);
    std_textio_file_close(t2);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2680U);
    std_textio_file_close(t2);
    xsi_set_current_line(106, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 3640);
    t6 = (t0 + 2576U);
    t8 = (t0 + 2856U);
    std_textio_readline(STD_TEXTIO, t3, t6, t8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3640);
    t3 = (t0 + 2856U);
    t6 = (t0 + 2248U);
    t8 = *((char **)t6);
    t6 = (t0 + 7708U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t8, t6);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3640);
    t3 = (t0 + 2248U);
    t6 = *((char **)t3);
    memcpy(t7, t6, 16U);
    work_a_3538921338_2372691052_sub_1915253116_2855802964(t0, t2, t7, 1);
    goto LAB8;

LAB10:;
LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_3538921338_2372691052_p_2(char *t0)
{
    char t11[40];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 * 10);
    t2 = (t0 + 3888);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3888);
    t8 = (t0 + 2928U);
    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    memcpy(t11, t10, 40U);
    t9 = (t0 + 7692U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t8, t11, t9, (unsigned char)0, 0);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3888);
    t3 = (t0 + 2680U);
    t8 = (t0 + 2928U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t8);
    goto LAB9;

}


extern void work_a_3538921338_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3538921338_2372691052_p_0,(void *)work_a_3538921338_2372691052_p_1,(void *)work_a_3538921338_2372691052_p_2};
	static char *se[] = {(void *)work_a_3538921338_2372691052_sub_1915253116_2855802964};
	xsi_register_didat("work_a_3538921338_2372691052", "isim/fir_tb_isim_beh.exe.sim/work/a_3538921338_2372691052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
