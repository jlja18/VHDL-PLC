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
static const char *ng0 = "C:/Users/Jonas/Aalborg Universitet/Jan Peter Mortensen Christiansen - P4/Arbejdsblade/Sjov med VHDL/PLCtest/PLC/Registers.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_1350853198_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t7 = *((char **)t1);
    t1 = (t0 + 7556U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t7, t1);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t13);
    t16 = (16U * t15);
    t17 = (0 + t16);
    t8 = (t2 + t17);
    t11 = (t0 + 1192U);
    t12 = *((char **)t11);
    t11 = (t0 + 7556U);
    t23 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t12, t11);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    t26 = (16U * t25);
    t27 = (0U + t26);
    t18 = (t0 + 4032);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t8, 16U);
    xsi_driver_first_trans_delta(t18, t27, 16U, 0LL);

LAB3:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7764);
    t7 = (t0 + 4096);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    memcpy(t18, t1, 16U);
    xsi_driver_first_trans_fast_port(t7);

LAB12:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 7780);
    t7 = (t0 + 4160);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    memcpy(t18, t1, 16U);
    xsi_driver_first_trans_fast_port(t7);

LAB15:    t1 = (t0 + 3952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 992U);
    t6 = xsi_signal_has_event(t1);
    if (t6 == 1)
        goto LAB8;

LAB9:    t5 = (unsigned char)0;

LAB10:    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(52, ng0);
    t7 = (t0 + 1512U);
    t11 = *((char **)t7);
    t7 = (t0 + 1192U);
    t12 = *((char **)t7);
    t7 = (t0 + 7556U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t12, t7);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    t16 = (16U * t15);
    t17 = (0U + t16);
    t18 = (t0 + 4032);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 16U);
    xsi_driver_first_trans_delta(t18, t17, 16U, 0LL);
    goto LAB6;

LAB8:    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    t5 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2472U);
    t7 = *((char **)t1);
    t1 = (t0 + 1192U);
    t8 = *((char **)t1);
    t1 = (t0 + 7556U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t8, t1);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t13);
    t16 = (16U * t15);
    t17 = (0 + t16);
    t11 = (t7 + t17);
    t12 = (t0 + 4096);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 16U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB12;

LAB14:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2472U);
    t7 = *((char **)t1);
    t1 = (t0 + 1352U);
    t8 = *((char **)t1);
    t1 = (t0 + 7572U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t8, t1);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t13);
    t16 = (16U * t15);
    t17 = (0 + t16);
    t11 = (t7 + t17);
    t12 = (t0 + 4160);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 16U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB15;

}


extern void work_a_1350853198_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1350853198_3212880686_p_0};
	xsi_register_didat("work_a_1350853198_3212880686", "isim/CPUTESTER_isim_beh.exe.sim/work/a_1350853198_3212880686.didat");
	xsi_register_executes(pe);
}
