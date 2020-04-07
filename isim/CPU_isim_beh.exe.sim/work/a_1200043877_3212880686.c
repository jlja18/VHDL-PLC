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


static void work_a_1200043877_3212880686_p_0(char *t0)
{
    char t11[16];
    char t28[16];
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
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 9704U);
    t5 = (t0 + 9985);
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
        goto LAB16;

LAB18:
LAB17:    t2 = (t0 + 6120);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(163, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t4 = (t0 + 9704U);
    t9 = (t0 + 9981);
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

LAB10:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 6280);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 9983);
    t5 = (t0 + 6344);
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

LAB8:    xsi_set_current_line(164, ng0);
    t13 = (t0 + 3912U);
    t17 = *((char **)t13);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 9736U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t28, t4, t2, 1);
    t8 = (t0 + 3592U);
    t9 = *((char **)t8);
    t8 = (t0 + 9784U);
    t10 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t5, t28, t9, t8);
    t12 = (t11 + 12U);
    t15 = *((unsigned int *)t12);
    t21 = (1U * t15);
    t1 = (6U != t21);
    if (t1 == 1)
        goto LAB14;

LAB15:    t13 = (t0 + 6216);
    t17 = (t13 + 56U);
    t20 = *((char **)t17);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t10, 6U);
    xsi_driver_first_trans_fast(t13);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(165, ng0);
    t13 = (t0 + 1832U);
    t20 = *((char **)t13);
    t15 = (15 - 5);
    t21 = (t15 * 1U);
    t22 = (0 + t21);
    t13 = (t20 + t22);
    t23 = (t0 + 6216);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t13, 6U);
    xsi_driver_first_trans_fast(t23);
    goto LAB12;

LAB14:    xsi_size_not_matching(6U, t21, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(176, ng0);
    t10 = (t0 + 2312U);
    t12 = *((char **)t10);
    t10 = (t0 + 6280);
    t13 = (t10 + 56U);
    t17 = *((char **)t13);
    t20 = (t17 + 56U);
    t23 = *((char **)t20);
    memcpy(t23, t12, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB17;

}

static void work_a_1200043877_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 9987);
    t5 = (t0 + 6408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);

LAB3:    t1 = (t0 + 6136);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t1 = (t0 + 6408);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    goto LAB3;

}


extern void work_a_1200043877_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1200043877_3212880686_p_0,(void *)work_a_1200043877_3212880686_p_1};
	xsi_register_didat("work_a_1200043877_3212880686", "isim/CPU_isim_beh.exe.sim/work/a_1200043877_3212880686.didat");
	xsi_register_executes(pe);
}
