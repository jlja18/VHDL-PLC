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
static const char *ng0 = "C:/Users/Jonas/Desktop/PLC/VHDL-PLC/InputSelectInvert.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);


static void work_a_0838382909_3212880686_p_0(char *t0)
{
    char t9[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB12;

LAB13:    t1 = (unsigned char)0;

LAB14:    if (t1 != 0)
        goto LAB10;

LAB11:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB17;

LAB18:    t1 = (unsigned char)0;

LAB19:    if (t1 != 0)
        goto LAB15;

LAB16:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB22;

LAB23:    t1 = (unsigned char)0;

LAB24:    if (t1 != 0)
        goto LAB20;

LAB21:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5659);
    t6 = (t0 + 3552);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t2, 16U);
    xsi_driver_first_trans_fast_port(t6);

LAB3:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5675);
    t6 = (t0 + 3616);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t2, 16U);
    xsi_driver_first_trans_fast_port(t6);

LAB26:    t2 = (t0 + 3472);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1192U);
    t10 = *((char **)t2);
    t2 = (t0 + 5520U);
    t11 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t9, t10, t2);
    t12 = (t9 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (1U * t13);
    t15 = (16U != t14);
    if (t15 == 1)
        goto LAB8;

LAB9:    t16 = (t0 + 3552);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 16U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB3;

LAB5:    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t14, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1192U);
    t10 = *((char **)t2);
    t2 = (t0 + 3552);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t10, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB12:    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB14;

LAB15:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5627);
    t11 = (t0 + 3552);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t2, 16U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB3;

LAB17:    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB19;

LAB20:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5643);
    t11 = (t0 + 3552);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t2, 16U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB3;

LAB22:    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB24;

LAB25:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t2 = (t0 + 3616);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t6, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB26;

}


extern void work_a_0838382909_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0838382909_3212880686_p_0};
	xsi_register_didat("work_a_0838382909_3212880686", "isim/TESTCPU_isim_beh.exe.sim/work/a_0838382909_3212880686.didat");
	xsi_register_executes(pe);
}
