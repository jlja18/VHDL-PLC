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
static const char *ng0 = "C:/Users/Jonas/Desktop/PLC/VHDL-PLC/AluFunctionBlock.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3836944946_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 1U, 16U, 0LL);

LAB2:    t7 = (t0 + 4624);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3836944946_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t1 = (t0 + 4816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3836944946_3212880686_p_2(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(48, ng0);

LAB3:    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t3 = (t0 + 7328U);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 7264U);
    t7 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t2, t4, t3, t6, t5);
    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t1, t7, t2, t10);
    t11 = (t1 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (17U != t13);
    if (t14 == 1)
        goto LAB5;

LAB6:    t15 = (t0 + 4880);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 17U);
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 4640);
    *((int *)t20) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(17U, t13, 0);
    goto LAB6;

}

static void work_a_3836944946_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (16 - 16);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4944);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4656);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3836944946_3212880686_p_4(char *t0)
{
    char t25[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t26;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 7421);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB10:    t6 = (t0 + 7423);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB11:    t9 = (t0 + 7425);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB12:    t12 = (t0 + 7427);
    t14 = xsi_mem_cmp(t12, t3, 2U);
    if (t14 == 1)
        goto LAB8;

LAB13:
LAB9:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 7429);
    t4 = (t0 + 5008);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(51, ng0);

LAB23:    t2 = (t0 + 4672);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;

LAB1:    return;
LAB5:    xsi_set_current_line(52, ng0);
    t15 = (t0 + 1992U);
    t16 = *((char **)t15);
    t17 = (16 - 15);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t15 = (t16 + t19);
    t20 = (t0 + 5008);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t15, 16U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB4;

LAB6:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7248U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 7264U);
    t7 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t25, t3, t2, t6, t4);
    t9 = (t25 + 12U);
    t17 = *((unsigned int *)t9);
    t18 = (1U * t17);
    t26 = (16U != t18);
    if (t26 == 1)
        goto LAB15;

LAB16:    t10 = (t0 + 5008);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB7:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7248U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 7264U);
    t7 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t25, t3, t2, t6, t4);
    t9 = (t25 + 12U);
    t17 = *((unsigned int *)t9);
    t18 = (1U * t17);
    t26 = (16U != t18);
    if (t26 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 5008);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB8:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 7264U);
    t4 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t25, t3, t2);
    t6 = (t25 + 12U);
    t17 = *((unsigned int *)t6);
    t18 = (1U * t17);
    t26 = (16U != t18);
    if (t26 == 1)
        goto LAB19;

LAB20:    t7 = (t0 + 5008);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB4;

LAB14:;
LAB15:    xsi_size_not_matching(16U, t18, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(16U, t18, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(16U, t18, 0);
    goto LAB20;

LAB21:    t3 = (t0 + 4672);
    *((int *)t3) = 0;
    goto LAB2;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

}


extern void work_a_3836944946_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3836944946_3212880686_p_0,(void *)work_a_3836944946_3212880686_p_1,(void *)work_a_3836944946_3212880686_p_2,(void *)work_a_3836944946_3212880686_p_3,(void *)work_a_3836944946_3212880686_p_4};
	xsi_register_didat("work_a_3836944946_3212880686", "isim/TESTCPU_isim_beh.exe.sim/work/a_3836944946_3212880686.didat");
	xsi_register_executes(pe);
}
