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
static const char *ng0 = "C:/Users/Jonas/Desktop/PLC/VHDL-PLC/Instruction_Decoder.vhd";



static void work_a_1158708008_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 10903);
    t4 = xsi_mem_cmp(t1, t2, 16U);
    if (t4 == 1)
        goto LAB3;

LAB9:    t5 = (t0 + 10919);
    t7 = xsi_mem_cmp(t5, t2, 16U);
    if (t7 == 1)
        goto LAB4;

LAB10:    t8 = (t0 + 10935);
    t10 = xsi_mem_cmp(t8, t2, 16U);
    if (t10 == 1)
        goto LAB5;

LAB11:    t11 = (t0 + 10951);
    t13 = xsi_mem_cmp(t11, t2, 16U);
    if (t13 == 1)
        goto LAB6;

LAB12:    t14 = (t0 + 10967);
    t16 = xsi_mem_cmp(t14, t2, 16U);
    if (t16 == 1)
        goto LAB7;

LAB13:
LAB8:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 11031);
    t3 = (t0 + 6432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 11033);
    t3 = (t0 + 6496);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 6560);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 6352);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(75, ng0);
    t17 = (t0 + 10983);
    t19 = (t0 + 6432);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 2U);
    xsi_driver_first_trans_fast_port(t19);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 10985);
    t3 = (t0 + 6496);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 6560);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 10987);
    t3 = (t0 + 6688);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB4:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t24 = (15 - 1);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t1 = (t2 + t26);
    t3 = (t0 + 6752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t24 = (15 - 1);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t1 = (t2 + t26);
    t3 = (t0 + 6816);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 10989);
    t3 = (t0 + 6688);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 10991);
    t3 = (t0 + 6880);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 10997);
    t3 = (t0 + 6432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 10999);
    t3 = (t0 + 6496);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 6560);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t24 = (15 - 1);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t1 = (t2 + t26);
    t3 = (t0 + 6752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 11001);
    t3 = (t0 + 6688);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 11003);
    t3 = (t0 + 6880);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 11009);
    t3 = (t0 + 6432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 11011);
    t3 = (t0 + 6496);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 6560);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t24 = (15 - 1);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t1 = (t2 + t26);
    t3 = (t0 + 6752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 11013);
    t3 = (t0 + 6880);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 11019);
    t3 = (t0 + 6432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 11021);
    t3 = (t0 + 6496);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 6560);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t24 = (15 - 9);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t1 = (t2 + t26);
    t3 = (t0 + 6752);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t24 = (15 - 1);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t1 = (t2 + t26);
    t3 = (t0 + 6816);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 11023);
    t3 = (t0 + 6880);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 11029);
    t3 = (t0 + 6432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB14:;
}


extern void work_a_1158708008_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1158708008_3212880686_p_0};
	xsi_register_didat("work_a_1158708008_3212880686", "isim/CPUTESTER_isim_beh.exe.sim/work/a_1158708008_3212880686.didat");
	xsi_register_executes(pe);
}
