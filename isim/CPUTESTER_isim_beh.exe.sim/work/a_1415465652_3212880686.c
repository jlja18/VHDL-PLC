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
static const char *ng0 = "C:/Users/Jonas/Desktop/PLC/VHDL-PLC/CPU.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_1415465652_3212880686_p_0(char *t0)
{
    char t23[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t24;
    int t25;

LAB0:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5640);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(141, ng0);
    t4 = (t0 + 1672U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5800);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 5736);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    memcpy(t14, t4, 6U);
    xsi_driver_first_trans_fast(t2);

LAB9:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t2 = (t0 + 9744U);
    t24 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t2);
    t25 = (t24 - 0);
    t15 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t24);
    t16 = (20U * t15);
    t17 = (0 + t16);
    t8 = (t4 + t17);
    t11 = (t0 + 5864);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 20U);
    xsi_driver_first_trans_fast(t11);

LAB17:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(142, ng0);
    t4 = (t0 + 3592U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 9744U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t23, t4, t2, 1);
    t8 = (t23 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t1 = (6U != t16);
    if (t1 == 1)
        goto LAB14;

LAB15:    t11 = (t0 + 5736);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t5, 6U);
    xsi_driver_first_trans_fast(t11);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(143, ng0);
    t4 = (t0 + 2152U);
    t14 = *((char **)t4);
    t15 = (15 - 5);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t4 = (t14 + t17);
    t18 = (t0 + 5736);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t4, 6U);
    xsi_driver_first_trans_fast(t18);
    goto LAB12;

LAB14:    xsi_size_not_matching(6U, t16, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 11701);
    t8 = (t0 + 5864);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 20U);
    xsi_driver_first_trans_fast(t8);
    goto LAB17;

}

static void work_a_1415465652_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 11733);
    t5 = (t0 + 5928);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 16U);
    xsi_driver_first_trans_fast(t5);

LAB3:    t1 = (t0 + 5656);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t6 = (19 - 3);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 5928);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_delta(t9, 12U, 4U, 0LL);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 11721);
    t3 = (12U != 12U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t5 = (t0 + 5928);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 12U);
    xsi_driver_first_trans_delta(t5, 0U, 12U, 0LL);
    goto LAB3;

LAB5:    xsi_size_not_matching(12U, 12U, 0);
    goto LAB6;

}


extern void work_a_1415465652_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1415465652_3212880686_p_0,(void *)work_a_1415465652_3212880686_p_1};
	xsi_register_didat("work_a_1415465652_3212880686", "isim/CPUTESTER_isim_beh.exe.sim/work/a_1415465652_3212880686.didat");
	xsi_register_executes(pe);
}
