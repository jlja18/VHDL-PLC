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
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1415465652_3212880686_p_0(char *t0)
{
    char t11[16];
    char t21[16];
    char t30[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t31;
    char *t32;
    int t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 10168U);
    t5 = (t0 + 10456);
    t9 = (t11 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t11);
    if (t1 != 0)
        goto LAB22;

LAB24:
LAB23:    t2 = (t0 + 6440);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t4 = (t0 + 10168U);
    t9 = (t0 + 10448);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t4, t9, t11);
    if (t16 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t2 = (t0 + 6600);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 10454);
    t5 = (t0 + 6664);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(160, ng0);
    t13 = (t0 + 1512U);
    t18 = *((char **)t13);
    t13 = (t0 + 10168U);
    t19 = (t0 + 10450);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 1;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (1 - 0);
    t15 = (t24 * 1);
    t15 = (t15 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t15;
    t25 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t18, t13, t19, t21);
    if (t25 == 1)
        goto LAB14;

LAB15:    t23 = (t0 + 1512U);
    t27 = *((char **)t23);
    t23 = (t0 + 10168U);
    t28 = (t0 + 10452);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 1;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (1 - 0);
    t15 = (t33 * 1);
    t15 = (t15 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t15;
    t34 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t27, t23, t28, t30);
    if (t34 == 1)
        goto LAB17;

LAB18:    t26 = (unsigned char)0;

LAB19:    t17 = t26;

LAB16:    if (t17 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 10200U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t21, t4, t2, 1);
    t8 = (t0 + 3752U);
    t9 = *((char **)t8);
    t8 = (t0 + 10248U);
    t10 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t5, t21, t9, t8);
    t12 = (t11 + 12U);
    t15 = *((unsigned int *)t12);
    t39 = (1U * t15);
    t1 = (6U != t39);
    if (t1 == 1)
        goto LAB20;

LAB21:    t13 = (t0 + 6536);
    t18 = (t13 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t10, 6U);
    xsi_driver_first_trans_fast(t13);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(161, ng0);
    t32 = (t0 + 2632U);
    t38 = *((char **)t32);
    t15 = (15 - 5);
    t39 = (t15 * 1U);
    t40 = (0 + t39);
    t32 = (t38 + t40);
    t41 = (t0 + 6536);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t32, 6U);
    xsi_driver_first_trans_fast(t41);
    goto LAB12;

LAB14:    t17 = (unsigned char)1;
    goto LAB16;

LAB17:    t32 = (t0 + 4072U);
    t35 = *((char **)t32);
    t36 = *((unsigned char *)t35);
    t37 = (t36 == (unsigned char)3);
    t26 = t37;
    goto LAB19;

LAB20:    xsi_size_not_matching(6U, t39, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(172, ng0);
    t10 = (t0 + 2472U);
    t12 = *((char **)t10);
    t10 = (t0 + 6600);
    t13 = (t10 + 56U);
    t18 = *((char **)t13);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t12, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB23;

}

static void work_a_1415465652_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 10458);
    t5 = (t0 + 6728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);

LAB3:    t1 = (t0 + 6456);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 6728);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    goto LAB3;

}


extern void work_a_1415465652_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1415465652_3212880686_p_0,(void *)work_a_1415465652_3212880686_p_1};
	xsi_register_didat("work_a_1415465652_3212880686", "isim/TESTCPU_isim_beh.exe.sim/work/a_1415465652_3212880686.didat");
	xsi_register_executes(pe);
}
