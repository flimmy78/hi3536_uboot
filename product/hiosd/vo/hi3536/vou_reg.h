//****************************************************************************** 
// Copyright     :  Copyright (C) 2014, Hisilicon Technologies Co., Ltd.
// File name     :  c_union_define.h
// Author        :  xxx
// Version       :  1.0 
// Date          :  2014-10-18
// Description   :  Define all registers/tables for vou
// Others        :  Generated automatically by nManager V4.0 
// History       :  xxx 2014-10-18 Create file
//******************************************************************************

#ifndef __VOU_REG_H__
#define __VOU_REG_H__

#include "hi_type.h"
	
#ifdef __cplusplus
#if __cplusplus
	extern "C"{
#endif
#endif /* End of #ifdef __cplusplus */
/* Define the union U_VOCTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    m0_arb_mode           : 4   ; /* [3..0]  */
        unsigned int    m1_arb_mode           : 4   ; /* [7..4]  */
        unsigned int    reserved_0            : 19  ; /* [26..8]  */
        unsigned int    chn2_select           : 1   ; /* [27]  */
        unsigned int    one_sync2_en          : 1   ; /* [28]  */
        unsigned int    reserved_1            : 1   ; /* [29]  */
        unsigned int    chk_sum_en            : 1   ; /* [30]  */
        unsigned int    vo_ck_gt_en           : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOCTRL;

/* Define the union U_VOINTSTA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd0vtthd1_int        : 1   ; /* [0]  */
        unsigned int    dhd0vtthd2_int        : 1   ; /* [1]  */
        unsigned int    dhd0vtthd3_int        : 1   ; /* [2]  */
        unsigned int    dhd0uf_int            : 1   ; /* [3]  */
        unsigned int    dhd1vtthd1_int        : 1   ; /* [4]  */
        unsigned int    dhd1vtthd2_int        : 1   ; /* [5]  */
        unsigned int    dhd1vtthd3_int        : 1   ; /* [6]  */
        unsigned int    dhd1uf_int            : 1   ; /* [7]  */
        unsigned int    gwbc0_vte_int         : 1   ; /* [8]  */
        unsigned int    dwbc0_vte_int         : 1   ; /* [9]  */
        unsigned int    g0wbc_vte_int         : 1   ; /* [10]  */
        unsigned int    g4wbc_vte_int         : 1   ; /* [11]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    dsd0vtthd1_int        : 1   ; /* [16]  */
        unsigned int    dsd0uf_int            : 1   ; /* [17]  */
        unsigned int    v0rr_int              : 1   ; /* [18]  */
        unsigned int    v1rr_int              : 1   ; /* [19]  */
        unsigned int    v3rr_int              : 1   ; /* [20]  */
        unsigned int    v4rr_int              : 1   ; /* [21]  */
        unsigned int    g0rr_int              : 1   ; /* [22]  */
        unsigned int    g1rr_int              : 1   ; /* [23]  */
        unsigned int    g2rr_int              : 1   ; /* [24]  */
        unsigned int    g3rr_int              : 1   ; /* [25]  */
        unsigned int    g4rr_int              : 1   ; /* [26]  */
        unsigned int    g5rr_int              : 1   ; /* [27]  */
        unsigned int    wbcdhd_partfns_int    : 1   ; /* [28]  */
        unsigned int    ut_end_int            : 1   ; /* [29]  */
        unsigned int    m0_be_int             : 1   ; /* [30]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOINTSTA;

/* Define the union U_VOMSKINTSTA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd0vtthd1_clr        : 1   ; /* [0]  */
        unsigned int    dhd0vtthd2_clr        : 1   ; /* [1]  */
        unsigned int    dhd0vtthd3_clr        : 1   ; /* [2]  */
        unsigned int    dhd0uf_clr            : 1   ; /* [3]  */
        unsigned int    dhd1vtthd1_clr        : 1   ; /* [4]  */
        unsigned int    dhd1vtthd2_clr        : 1   ; /* [5]  */
        unsigned int    dhd1vtthd3_clr        : 1   ; /* [6]  */
        unsigned int    dhd1uf_clr            : 1   ; /* [7]  */
        unsigned int    gwbc0_vte_clr         : 1   ; /* [8]  */
        unsigned int    dwbc0_vte_clr         : 1   ; /* [9]  */
        unsigned int    g0wbc_vte_clr         : 1   ; /* [10]  */
        unsigned int    g4wbc_vte_clr         : 1   ; /* [11]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    dsd0vtthd1_clr        : 1   ; /* [16]  */
        unsigned int    dsd0uf_clr            : 1   ; /* [17]  */
        unsigned int    v0rr_clr              : 1   ; /* [18]  */
        unsigned int    v1rr_clr              : 1   ; /* [19]  */
        unsigned int    v3rr_clr              : 1   ; /* [20]  */
        unsigned int    v4rr_clr              : 1   ; /* [21]  */
        unsigned int    g0rr_clr              : 1   ; /* [22]  */
        unsigned int    g1rr_clr              : 1   ; /* [23]  */
        unsigned int    g2rr_clr              : 1   ; /* [24]  */
        unsigned int    g3rr_clr              : 1   ; /* [25]  */
        unsigned int    g4rr_clr              : 1   ; /* [26]  */
        unsigned int    g5rr_clr              : 1   ; /* [27]  */
        unsigned int    wbcdhd_partfns_clr    : 1   ; /* [28]  */
        unsigned int    ut_end_clr            : 1   ; /* [29]  */
        unsigned int    m0_be_clr             : 1   ; /* [30]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOMSKINTSTA;

/* Define the union U_VOINTMSK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd0vtthd1_intmsk     : 1   ; /* [0]  */
        unsigned int    dhd0vtthd2_intmsk     : 1   ; /* [1]  */
        unsigned int    dhd0vtthd3_intmsk     : 1   ; /* [2]  */
        unsigned int    dhd0uf_intmsk         : 1   ; /* [3]  */
        unsigned int    dhd1vtthd1_intmsk     : 1   ; /* [4]  */
        unsigned int    dhd1vtthd2_intmsk     : 1   ; /* [5]  */
        unsigned int    dhd1vtthd3_intmsk     : 1   ; /* [6]  */
        unsigned int    dhd1uf_intmsk         : 1   ; /* [7]  */
        unsigned int    gwbc0_vte_intmsk      : 1   ; /* [8]  */
        unsigned int    dwbc0_vte_intmsk      : 1   ; /* [9]  */
        unsigned int    g0wbc_vte_intmsk      : 1   ; /* [10]  */
        unsigned int    g4wbc_vte_intmsk      : 1   ; /* [11]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    dsd0vtthd1_intmsk     : 1   ; /* [16]  */
        unsigned int    dsd0uf_intmsk         : 1   ; /* [17]  */
        unsigned int    v0rr_intmsk           : 1   ; /* [18]  */
        unsigned int    v1rr_intmsk           : 1   ; /* [19]  */
        unsigned int    v3rr_intmsk           : 1   ; /* [20]  */
        unsigned int    v4rr_intmsk           : 1   ; /* [21]  */
        unsigned int    g0rr_intmsk           : 1   ; /* [22]  */
        unsigned int    g1rr_intmsk           : 1   ; /* [23]  */
        unsigned int    g2rr_intmsk           : 1   ; /* [24]  */
        unsigned int    g3rr_intmsk           : 1   ; /* [25]  */
        unsigned int    g4rr_intmsk           : 1   ; /* [26]  */
        unsigned int    g5rr_intmsk           : 1   ; /* [27]  */
        unsigned int    wbcdhd_partfns_intmsk : 1   ; /* [28]  */
        unsigned int    ut_end_intmsk         : 1   ; /* [29]  */
        unsigned int    m0_be_intmsk          : 1   ; /* [30]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOINTMSK;

// Define the union U_VDPVERSION1
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int vdpversion1             : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_VDPVERSION1;
// Define the union U_VDPVERSION2
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int vdpversion2             : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_VDPVERSION2;
/* Define the union U_VODEBUG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rm_en_chn             : 4   ; /* [3..0]  */
        unsigned int    dhd0_ff_info          : 2   ; /* [5..4]  */
        unsigned int    dhd1_ff_info          : 2   ; /* [7..6]  */
        unsigned int    dsd0_ff_info          : 2   ; /* [9..8]  */
        unsigned int    bfm_vga_en            : 1   ; /* [10]  */
        unsigned int    bfm_cvbs_en           : 1   ; /* [11]  */
        unsigned int    bfm_lcd_en            : 1   ; /* [12]  */
        unsigned int    bfm_bt1120_en         : 1   ; /* [13]  */
        unsigned int    wbc2_ff_info          : 2   ; /* [15..14]  */
        unsigned int    wbc_mode              : 4   ; /* [19..16]  */
        unsigned int    node_num              : 4   ; /* [23..20]  */
        unsigned int    wbc_cmp_mode          : 2   ; /* [25..24]  */
        unsigned int    bfm_mode              : 3   ; /* [28..26]  */
        unsigned int    reserved_0            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VODEBUG;

/* Define the union U_VOINTSTA1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd0vtthd1_int        : 1   ; /* [0]  */
        unsigned int    dhd0vtthd2_int        : 1   ; /* [1]  */
        unsigned int    dhd0vtthd3_int        : 1   ; /* [2]  */
        unsigned int    dhd0uf_int            : 1   ; /* [3]  */
        unsigned int    dhd1vtthd1_int        : 1   ; /* [4]  */
        unsigned int    dhd1vtthd2_int        : 1   ; /* [5]  */
        unsigned int    dhd1vtthd3_int        : 1   ; /* [6]  */
        unsigned int    dhd1uf_int            : 1   ; /* [7]  */
        unsigned int    gwbc0_vte_int         : 1   ; /* [8]  */
        unsigned int    dwbc0_vte_int         : 1   ; /* [9]  */
        unsigned int    g0wbc_vte_int         : 1   ; /* [10]  */
        unsigned int    g4wbc_vte_int         : 1   ; /* [11]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    dsd0vtthd1_int        : 1   ; /* [16]  */
        unsigned int    dsd0uf_int            : 1   ; /* [17]  */
        unsigned int    v0rr_int              : 1   ; /* [18]  */
        unsigned int    v1rr_int              : 1   ; /* [19]  */
        unsigned int    v3rr_int              : 1   ; /* [20]  */
        unsigned int    v4rr_int              : 1   ; /* [21]  */
        unsigned int    g0rr_int              : 1   ; /* [22]  */
        unsigned int    g1rr_int              : 1   ; /* [23]  */
        unsigned int    g2rr_int              : 1   ; /* [24]  */
        unsigned int    g3rr_int              : 1   ; /* [25]  */
        unsigned int    g4rr_int              : 1   ; /* [26]  */
        unsigned int    g5rr_int              : 1   ; /* [27]  */
        unsigned int    wbcdhd_partfns_int    : 1   ; /* [28]  */
        unsigned int    ut_end_int            : 1   ; /* [29]  */
        unsigned int    m0_be_int             : 1   ; /* [30]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOINTSTA1;

/* Define the union U_VOMSKINTSTA1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd0vtthd1_clr        : 1   ; /* [0]  */
        unsigned int    dhd0vtthd2_clr        : 1   ; /* [1]  */
        unsigned int    dhd0vtthd3_clr        : 1   ; /* [2]  */
        unsigned int    dhd0uf_clr            : 1   ; /* [3]  */
        unsigned int    dhd1vtthd1_clr        : 1   ; /* [4]  */
        unsigned int    dhd1vtthd2_clr        : 1   ; /* [5]  */
        unsigned int    dhd1vtthd3_clr        : 1   ; /* [6]  */
        unsigned int    dhd1uf_clr            : 1   ; /* [7]  */
        unsigned int    gwbc0_vte_clr         : 1   ; /* [8]  */
        unsigned int    dwbc0_vte_clr         : 1   ; /* [9]  */
        unsigned int    g0wbc_vte_clr         : 1   ; /* [10]  */
        unsigned int    g4wbc_vte_clr         : 1   ; /* [11]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    dsd0vtthd1_clr        : 1   ; /* [16]  */
        unsigned int    dsd0uf_clr            : 1   ; /* [17]  */
        unsigned int    v0rr_clr              : 1   ; /* [18]  */
        unsigned int    v1rr_clr              : 1   ; /* [19]  */
        unsigned int    v3rr_clr              : 1   ; /* [20]  */
        unsigned int    v4rr_clr              : 1   ; /* [21]  */
        unsigned int    g0rr_clr              : 1   ; /* [22]  */
        unsigned int    g1rr_clr              : 1   ; /* [23]  */
        unsigned int    g2rr_clr              : 1   ; /* [24]  */
        unsigned int    g3rr_clr              : 1   ; /* [25]  */
        unsigned int    g4rr_clr              : 1   ; /* [26]  */
        unsigned int    g5rr_clr              : 1   ; /* [27]  */
        unsigned int    wbcdhd_partfns_clr    : 1   ; /* [28]  */
        unsigned int    ut_end_clr            : 1   ; /* [29]  */
        unsigned int    m0_be_clr             : 1   ; /* [30]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOMSKINTSTA1;

/* Define the union U_VOINTMSK1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd0vtthd1_intmsk     : 1   ; /* [0]  */
        unsigned int    dhd0vtthd2_intmsk     : 1   ; /* [1]  */
        unsigned int    dhd0vtthd3_intmsk     : 1   ; /* [2]  */
        unsigned int    dhd0uf_intmsk         : 1   ; /* [3]  */
        unsigned int    dhd1vtthd1_intmsk     : 1   ; /* [4]  */
        unsigned int    dhd1vtthd2_intmsk     : 1   ; /* [5]  */
        unsigned int    dhd1vtthd3_intmsk     : 1   ; /* [6]  */
        unsigned int    dhd1uf_intmsk         : 1   ; /* [7]  */
        unsigned int    gwbc0_vte_intmsk      : 1   ; /* [8]  */
        unsigned int    dwbc0_vte_intmsk      : 1   ; /* [9]  */
        unsigned int    g0wbc_vte_intmsk      : 1   ; /* [10]  */
        unsigned int    g4wbc_vte_intmsk      : 1   ; /* [11]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    dsd0vtthd1_intmsk     : 1   ; /* [16]  */
        unsigned int    dsd0uf_intmsk         : 1   ; /* [17]  */
        unsigned int    v0rr_intmsk           : 1   ; /* [18]  */
        unsigned int    v1rr_intmsk           : 1   ; /* [19]  */
        unsigned int    v3rr_intmsk           : 1   ; /* [20]  */
        unsigned int    v4rr_intmsk           : 1   ; /* [21]  */
        unsigned int    g0rr_intmsk           : 1   ; /* [22]  */
        unsigned int    g1rr_intmsk           : 1   ; /* [23]  */
        unsigned int    g2rr_intmsk           : 1   ; /* [24]  */
        unsigned int    g3rr_intmsk           : 1   ; /* [25]  */
        unsigned int    g4rr_intmsk           : 1   ; /* [26]  */
        unsigned int    g5rr_intmsk           : 1   ; /* [27]  */
        unsigned int    wbcdhd_partfns_intmsk : 1   ; /* [28]  */
        unsigned int    ut_end_intmsk         : 1   ; /* [29]  */
        unsigned int    m0_be_intmsk          : 1   ; /* [30]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOINTMSK1;

/* Define the union U_VOAXISEL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v0_axi_sel            : 1   ; /* [0]  */
        unsigned int    v1_axi_sel            : 1   ; /* [1]  */
        unsigned int    reserved_0            : 1   ; /* [2]  */
        unsigned int    v3_axi_sel            : 1   ; /* [3]  */
        unsigned int    v4_axi_sel            : 1   ; /* [4]  */
        unsigned int    reserved_1            : 5   ; /* [9..5]  */
        unsigned int    g0_axi_sel            : 1   ; /* [10]  */
        unsigned int    g1_axi_sel            : 1   ; /* [11]  */
        unsigned int    g2_axi_sel            : 1   ; /* [12]  */
        unsigned int    g3_axi_sel            : 1   ; /* [13]  */
        unsigned int    g4_axi_sel            : 1   ; /* [14]  */
        unsigned int    reserved_2            : 5   ; /* [19..15]  */
        unsigned int    wbc_dhd_axi_sel       : 1   ; /* [20]  */
        unsigned int    wbc_g0_axi_sel        : 1   ; /* [21]  */
        unsigned int    reserved_3            : 1   ; /* [22]  */
        unsigned int    wbc_g4_axi_sel        : 1   ; /* [23]  */
        unsigned int    reserved_4            : 3   ; /* [26..24]  */
        unsigned int    para_axi_sel          : 1   ; /* [27]  */
        unsigned int    reserved_5            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOAXISEL;

/* Define the union U_VOAXICTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    m0_outstd_rid0        : 4   ; /* [3..0]  */
        unsigned int    m0_outstd_rid1        : 4   ; /* [7..4]  */
        unsigned int    m0_wr_ostd            : 4   ; /* [11..8]  */
        unsigned int    reserved_0            : 3   ; /* [14..12]  */
        unsigned int    m0_id_sel             : 1   ; /* [15]  */
        unsigned int    m1_outstd_rid0        : 4   ; /* [19..16]  */
        unsigned int    m1_outstd_rid1        : 4   ; /* [23..20]  */
        unsigned int    m1_wr_ostd            : 4   ; /* [27..24]  */
        unsigned int    reserved_1            : 3   ; /* [30..28]  */
        unsigned int    m1_id_sel             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOAXICTRL;

/* Define the union U_VOWBCARB0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    prio0                 : 3   ; /* [2..0]  */
        unsigned int    prio1                 : 3   ; /* [5..3]  */
        unsigned int    prio2                 : 3   ; /* [8..6]  */
        unsigned int    prio3                 : 3   ; /* [11..9]  */
        unsigned int    prio4                 : 3   ; /* [14..12]  */
        unsigned int    prio5                 : 3   ; /* [17..15]  */
        unsigned int    prio6                 : 3   ; /* [20..18]  */
        unsigned int    reserved_0            : 7   ; /* [27..21]  */
        unsigned int    w_arb_mode            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOWBCARB0;

/* Define the union U_VOWBCARB1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    prio0                 : 3   ; /* [2..0]  */
        unsigned int    prio1                 : 3   ; /* [5..3]  */
        unsigned int    prio2                 : 3   ; /* [8..6]  */
        unsigned int    prio3                 : 3   ; /* [11..9]  */
        unsigned int    prio4                 : 3   ; /* [14..12]  */
        unsigned int    prio5                 : 3   ; /* [17..15]  */
        unsigned int    prio6                 : 3   ; /* [20..18]  */
        unsigned int    reserved_0            : 7   ; /* [27..21]  */
        unsigned int    w_arb_mode            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOWBCARB1;

/* Define the union U_VOUFSTA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v0_uf_sta             : 1   ; /* [0]  */
        unsigned int    v1_uf_sta             : 1   ; /* [1]  */
        unsigned int    reserved_0            : 1   ; /* [2]  */
        unsigned int    v3_uf_sta             : 1   ; /* [3]  */
        unsigned int    reserved_1            : 4   ; /* [7..4]  */
        unsigned int    g0_uf_sta             : 1   ; /* [8]  */
        unsigned int    g1_uf_sta             : 1   ; /* [9]  */
        unsigned int    g2_uf_sta             : 1   ; /* [10]  */
        unsigned int    g3_uf_sta             : 1   ; /* [11]  */
        unsigned int    g4_uf_sta             : 1   ; /* [12]  */
        unsigned int    reserved_2            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOUFSTA;

/* Define the union U_VOUFCLR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v0_uf_clr             : 1   ; /* [0]  */
        unsigned int    v1_uf_clr             : 1   ; /* [1]  */
        unsigned int    reserved_0            : 1   ; /* [2]  */
        unsigned int    v3_uf_clr             : 1   ; /* [3]  */
        unsigned int    reserved_1            : 4   ; /* [7..4]  */
        unsigned int    g0_uf_clr             : 1   ; /* [8]  */
        unsigned int    g1_uf_clr             : 1   ; /* [9]  */
        unsigned int    g2_uf_clr             : 1   ; /* [10]  */
        unsigned int    g3_uf_clr             : 1   ; /* [11]  */
        unsigned int    g4_uf_clr             : 1   ; /* [12]  */
        unsigned int    reserved_2            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOUFCLR;

/* Define the union U_VOINTPROC_TIM */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vointproc_time        : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VOINTPROC_TIM;

/* Define the union U_VO_MUX */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sddate_sel            : 4   ; /* [3..0]  */
        unsigned int    hddate_sel            : 4   ; /* [7..4]  */
        unsigned int    vga_sel               : 4   ; /* [11..8]  */
        unsigned int    hdmi_sel              : 4   ; /* [15..12]  */
        unsigned int    lcd_sel               : 4   ; /* [19..16]  */
        unsigned int    bt1120_sel            : 4   ; /* [23..20]  */
        unsigned int    bt656_sel             : 4   ; /* [27..24]  */
        unsigned int    digital_sel           : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_MUX;

/* Define the union U_VO_MUX_DAC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dac0_sel              : 4   ; /* [3..0]  */
        unsigned int    dac1_sel              : 4   ; /* [7..4]  */
        unsigned int    dac2_sel              : 4   ; /* [11..8]  */
        unsigned int    dac3_sel              : 4   ; /* [15..12]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_MUX_DAC;

/* Define the union U_VO_MUX_TESTSYNC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    test_dv               : 1   ; /* [0]  */
        unsigned int    test_hsync            : 1   ; /* [1]  */
        unsigned int    test_vsync            : 1   ; /* [2]  */
        unsigned int    test_field            : 1   ; /* [3]  */
        unsigned int    reserved_0            : 27  ; /* [30..4]  */
        unsigned int    vo_test_en            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_MUX_TESTSYNC;

/* Define the union U_VO_MUX_TESTDATA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    test_data             : 30  ; /* [29..0]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_MUX_TESTDATA;

/* Define the union U_VO_DAC_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dac_reg_rev           : 16  ; /* [15..0]  */
        unsigned int    enctr                 : 4   ; /* [19..16]  */
        unsigned int    enextref              : 1   ; /* [20]  */
        unsigned int    pdchopper             : 1   ; /* [21]  */
        unsigned int    envbg                 : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_DAC_CTRL;

/* Define the union U_VO_DAC_C_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cablectr              : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 2   ; /* [3..2]  */
        unsigned int    dacgc                 : 6   ; /* [9..4]  */
        unsigned int    reserved_1            : 21  ; /* [30..10]  */
        unsigned int    dac_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_DAC_C_CTRL;

/* Define the union U_VO_DAC_R_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cablectr              : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 2   ; /* [3..2]  */
        unsigned int    dacgc                 : 6   ; /* [9..4]  */
        unsigned int    reserved_1            : 21  ; /* [30..10]  */
        unsigned int    dac_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_DAC_R_CTRL;

/* Define the union U_VO_DAC_G_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cablectr              : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 2   ; /* [3..2]  */
        unsigned int    dacgc                 : 6   ; /* [9..4]  */
        unsigned int    reserved_1            : 21  ; /* [30..10]  */
        unsigned int    dac_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_DAC_G_CTRL;

/* Define the union U_VO_DAC_B_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cablectr              : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 2   ; /* [3..2]  */
        unsigned int    dacgc                 : 6   ; /* [9..4]  */
        unsigned int    reserved_1            : 21  ; /* [30..10]  */
        unsigned int    dac_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_DAC_B_CTRL;

/* Define the union U_VO_DAC_STAT0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dout_rct              : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_DAC_STAT0;

/* Define the union U_VO_DAC_STAT1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctbl_out_c            : 8   ; /* [7..0]  */
        unsigned int    ctrl_out_b            : 8   ; /* [15..8]  */
        unsigned int    ctrl_out_g            : 8   ; /* [23..16]  */
        unsigned int    ctrl_out_r            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_DAC_STAT1;

/* Define the union U_WBC_DHD_LOCATE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wbc_dhd0_locate       : 1   ; /* [0]  */
        unsigned int    wbc_dhd1_locate       : 1   ; /* [1]  */
        unsigned int    wbc_dsd0_locate       : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD_LOCATE;

/* Define the union U_WBC_OFL_EN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wbc0_ofl_en           : 1   ; /* [0]  */
        unsigned int    wbc0_ofl_pro          : 1   ; /* [1]  */
        unsigned int    wbc1_ofl_en           : 1   ; /* [2]  */
        unsigned int    wbc1_ofl_pro          : 1   ; /* [3]  */
        unsigned int    wbc2_ofl_en           : 1   ; /* [4]  */
        unsigned int    wbc2_ofl_pro          : 1   ; /* [5]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_OFL_EN;

/* Define the union U_VHD_CORRESP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 4   ; /* [3..0]  */
        unsigned int    v1_corresp            : 4   ; /* [7..4]  */
        unsigned int    reserved_1            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VHD_CORRESP;

/* Define the union U_GDC_CORRESP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 8   ; /* [7..0]  */
        unsigned int    g2_corresp            : 4   ; /* [11..8]  */
        unsigned int    g3_corresp            : 4   ; /* [15..12]  */
        unsigned int    reserved_1            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GDC_CORRESP;

/* Define the union U_WBC_CORRESP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wbc_corresp           : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_CORRESP;

// Define the union U_COEF_DATA
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_data               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_COEF_DATA;
/* Define the union U_V0_PARARD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v0_hlcoef_rd          : 1   ; /* [0]  */
        unsigned int    v0_hccoef_rd          : 1   ; /* [1]  */
        unsigned int    v0_vlcoef_rd          : 1   ; /* [2]  */
        unsigned int    v0_vccoef_rd          : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_PARARD;

/* Define the union U_V1_PARARD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v1_hlcoef_rd          : 1   ; /* [0]  */
        unsigned int    v1_hccoef_rd          : 1   ; /* [1]  */
        unsigned int    v1_vlcoef_rd          : 1   ; /* [2]  */
        unsigned int    v1_vccoef_rd          : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V1_PARARD;

/* Define the union U_V3_PARARD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v3_hlcoef_rd          : 1   ; /* [0]  */
        unsigned int    v3_hccoef_rd          : 1   ; /* [1]  */
        unsigned int    v3_vlcoef_rd          : 1   ; /* [2]  */
        unsigned int    v3_vccoef_rd          : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V3_PARARD;

/* Define the union U_VP0_PARARD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vp0_acmlut_rd         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_PARARD;

/* Define the union U_GP0_PARARD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gp0_hlcoef_rd         : 1   ; /* [0]  */
        unsigned int    gp0_hccoef_rd         : 1   ; /* [1]  */
        unsigned int    gp0_vlcoef_rd         : 1   ; /* [2]  */
        unsigned int    gp0_vccoef_rd         : 1   ; /* [3]  */
        unsigned int    gp0_gti_hlcoef_rd     : 1   ; /* [4]  */
        unsigned int    gp0_gti_hccoef_rd     : 1   ; /* [5]  */
        unsigned int    gp0_gti_vlcoef_rd     : 1   ; /* [6]  */
        unsigned int    gp0_gti_vccoef_rd     : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_PARARD;

/* Define the union U_GP1_PARARD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gp1_hlcoef_rd         : 1   ; /* [0]  */
        unsigned int    gp1_hccoef_rd         : 1   ; /* [1]  */
        unsigned int    gp1_vlcoef_rd         : 1   ; /* [2]  */
        unsigned int    gp1_vccoef_rd         : 1   ; /* [3]  */
        unsigned int    gp1_gti_hlcoef_rd     : 1   ; /* [4]  */
        unsigned int    gp1_gti_hccoef_rd     : 1   ; /* [5]  */
        unsigned int    gp1_gti_vlcoef_rd     : 1   ; /* [6]  */
        unsigned int    gp1_gti_vccoef_rd     : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP1_PARARD;

/* Define the union U_WBCDHD_PARARD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wbcdhd_hlcoef_rd      : 1   ; /* [0]  */
        unsigned int    wbcdhd_hccoef_rd      : 1   ; /* [1]  */
        unsigned int    wbcdhd_vlcoef_rd      : 1   ; /* [2]  */
        unsigned int    wbcdhd_vccoef_rd      : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBCDHD_PARARD;

/* Define the union U_DHD0_PARARD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd0_gmmr_rd          : 1   ; /* [0]  */
        unsigned int    dhd0_gmmg_rd          : 1   ; /* [1]  */
        unsigned int    dhd0_gmmb_rd          : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_PARARD;

/* Define the union U_DHD1_PARARD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd1_gmmr_rd          : 1   ; /* [0]  */
        unsigned int    dhd1_gmmg_rd          : 1   ; /* [1]  */
        unsigned int    dhd1_gmmb_rd          : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD1_PARARD;

/* Define the union U_V0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ifmt                  : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 1   ; /* [4]  */
        unsigned int    req_ctrl              : 3   ; /* [7..5]  */
        unsigned int    dcmp_en               : 1   ; /* [8]  */
        unsigned int    reserved_1            : 1   ; /* [9]  */
        unsigned int    nosec_flag            : 1   ; /* [10]  */
        unsigned int    uv_order              : 1   ; /* [11]  */
        unsigned int    chm_rmode             : 2   ; /* [13..12]  */
        unsigned int    lm_rmode              : 2   ; /* [15..14]  */
        unsigned int    reserved_2            : 1   ; /* [16]  */
        unsigned int    vup_mode              : 1   ; /* [17]  */
        unsigned int    ifir_mode             : 2   ; /* [19..18]  */
        unsigned int    reserved_3            : 6   ; /* [25..20]  */
        unsigned int    flip_en               : 1   ; /* [26]  */
        unsigned int    mute_en               : 1   ; /* [27]  */
        unsigned int    reserved_4            : 3   ; /* [30..28]  */
        unsigned int    surface_en            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CTRL;

/* Define the union U_V0_UPD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    regup                 : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_UPD;

/* Define the union U_V0_PRERD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [30..0]  */
        unsigned int    pre_rd_en             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_PRERD;

/* Define the union U_V0_IRESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    iw                    : 12  ; /* [11..0]  */
        unsigned int    ih                    : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_IRESO;

/* Define the union U_V0_ORESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ow                    : 12  ; /* [11..0]  */
        unsigned int    oh                    : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_ORESO;

/* Define the union U_V0_CBMPARA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    galpha                : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CBMPARA;

/* Define the union U_V0_PARAUP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v0_hlcoef_upd         : 1   ; /* [0]  */
        unsigned int    v0_hccoef_upd         : 1   ; /* [1]  */
        unsigned int    v0_vlcoef_upd         : 1   ; /* [2]  */
        unsigned int    v0_vccoef_upd         : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_PARAUP;

/* Define the union U_V0_CPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    src_xfpos             : 12  ; /* [11..0]  */
        unsigned int    src_xlpos             : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CPOS;

/* Define the union U_V0_DRAWMODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    draw_mode             : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_DRAWMODE;

// Define the union U_V0_HLCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_HLCOEFAD;
// Define the union U_V0_HCCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_HCCOEFAD;
// Define the union U_V0_VLCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_VLCOEFAD;
// Define the union U_V0_VCCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_VCCOEFAD;

/* Define the union U_V0_CSC_IDC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc0               : 11  ; /* [10..0]  */
        unsigned int    cscidc1               : 11  ; /* [21..11]  */
        unsigned int    csc_en                : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CSC_IDC;

/* Define the union U_V0_CSC_ODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscodc0               : 11  ; /* [10..0]  */
        unsigned int    cscodc1               : 11  ; /* [21..11]  */
        unsigned int    csc_sign_mode         : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CSC_ODC;

/* Define the union U_V0_CSC_IODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc2               : 11  ; /* [10..0]  */
        unsigned int    cscodc2               : 11  ; /* [21..11]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CSC_IODC;

/* Define the union U_V0_CSC_P0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp00                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp01                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CSC_P0;

/* Define the union U_V0_CSC_P1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp02                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp10                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CSC_P1;

/* Define the union U_V0_CSC_P2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp11                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp12                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CSC_P2;

/* Define the union U_V0_CSC_P3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp20                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp21                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CSC_P3;

/* Define the union U_V0_CSC_P4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp22                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_CSC_P4;

/* Define the union U_V0_HSP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hratio                : 24  ; /* [23..0]  */
        unsigned int    hfir_order            : 1   ; /* [24]  */
        unsigned int    hchfir_en             : 1   ; /* [25]  */
        unsigned int    hlfir_en              : 1   ; /* [26]  */
        unsigned int    non_lnr_en            : 1   ; /* [27]  */
        unsigned int    hchmid_en             : 1   ; /* [28]  */
        unsigned int    hlmid_en              : 1   ; /* [29]  */
        unsigned int    hchmsc_en             : 1   ; /* [30]  */
        unsigned int    hlmsc_en              : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_HSP;

/* Define the union U_V0_HLOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hor_loffset           : 28  ; /* [27..0]  */
        unsigned int    reserved_0            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_HLOFFSET;

/* Define the union U_V0_HCOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hor_coffset           : 28  ; /* [27..0]  */
        unsigned int    reserved_0            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_HCOFFSET;

/* Define the union U_V0_VSP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 19  ; /* [18..0]  */
        unsigned int    zme_in_fmt            : 2   ; /* [20..19]  */
        unsigned int    zme_out_fmt           : 2   ; /* [22..21]  */
        unsigned int    vchfir_en             : 1   ; /* [23]  */
        unsigned int    vlfir_en              : 1   ; /* [24]  */
        unsigned int    reserved_1            : 1   ; /* [25]  */
        unsigned int    vsc_chroma_tap        : 1   ; /* [26]  */
        unsigned int    reserved_2            : 1   ; /* [27]  */
        unsigned int    vchmid_en             : 1   ; /* [28]  */
        unsigned int    vlmid_en              : 1   ; /* [29]  */
        unsigned int    vchmsc_en             : 1   ; /* [30]  */
        unsigned int    vlmsc_en              : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_VSP;

/* Define the union U_V0_VSR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vratio                : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_VSR;

/* Define the union U_V0_VOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vchroma_offset        : 16  ; /* [15..0]  */
        unsigned int    vluma_offset          : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_VOFFSET;

/* Define the union U_V0_VBOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbchroma_offset       : 16  ; /* [15..0]  */
        unsigned int    vbluma_offset         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_VBOFFSET;

/* Define the union U_V0_DFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    disp_xfpos            : 12  ; /* [11..0]  */
        unsigned int    disp_yfpos            : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_DFPOS;

/* Define the union U_V0_DLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    disp_xlpos            : 12  ; /* [11..0]  */
        unsigned int    disp_ylpos            : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_DLPOS;

/* Define the union U_V0_VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_VFPOS;

/* Define the union U_V0_VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_VLPOS;

/* Define the union U_V0_BK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbk_cr                : 10  ; /* [9..0]  */
        unsigned int    vbk_cb                : 10  ; /* [19..10]  */
        unsigned int    vbk_y                 : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_BK;

/* Define the union U_V0_ALPHA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbk_alpha             : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_ALPHA;

/* Define the union U_V0_RIMWIDTH */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v0_rim_width          : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_RIMWIDTH;

/* Define the union U_V0_RIMCOL0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v0_rim_v0             : 10  ; /* [9..0]  */
        unsigned int    v0_rim_u0             : 10  ; /* [19..10]  */
        unsigned int    v0_rim_y0             : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_RIMCOL0;

/* Define the union U_V0_RIMCOL1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v0_rim_v1             : 10  ; /* [9..0]  */
        unsigned int    v0_rim_u1             : 10  ; /* [19..10]  */
        unsigned int    v0_rim_y1             : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_RIMCOL1;

/* Define the union U_V0_IFIRCOEF01 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef0                 : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef1                 : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_IFIRCOEF01;

/* Define the union U_V0_IFIRCOEF23 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef2                 : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef3                 : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_IFIRCOEF23;

/* Define the union U_V0_IFIRCOEF45 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef4                 : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef5                 : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_IFIRCOEF45;

/* Define the union U_V0_IFIRCOEF67 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef6                 : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef7                 : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_IFIRCOEF67;

/* Define the union U_V0_P0RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P0RESO;

// Define the union U_V0_P0LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P0LADDR;
// Define the union U_V0_P0CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P0CADDR;
/* Define the union U_V0_P0STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P0STRIDE;

/* Define the union U_V0_P0VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P0VFPOS;

/* Define the union U_V0_P0VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P0VLPOS;

/* Define the union U_V0_P0CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p0_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p0_rim_en             : 1   ; /* [1]  */
        unsigned int    p0_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p0_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p0_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p0_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P0CTRL;

/* Define the union U_V0_P1RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P1RESO;

// Define the union U_V0_P1LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P1LADDR;
// Define the union U_V0_P1CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P1CADDR;
/* Define the union U_V0_P1STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P1STRIDE;

/* Define the union U_V0_P1VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P1VFPOS;

/* Define the union U_V0_P1VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P1VLPOS;

/* Define the union U_V0_P1CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p1_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p1_rim_en             : 1   ; /* [1]  */
        unsigned int    p1_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p1_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p1_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p1_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P1CTRL;

/* Define the union U_V0_P2RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P2RESO;

// Define the union U_V0_P2LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P2LADDR;
// Define the union U_V0_P2CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P2CADDR;
/* Define the union U_V0_P2STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P2STRIDE;

/* Define the union U_V0_P2VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P2VFPOS;

/* Define the union U_V0_P2VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P2VLPOS;

/* Define the union U_V0_P2CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p2_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p2_rim_en             : 1   ; /* [1]  */
        unsigned int    p2_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p2_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p2_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p2_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P2CTRL;

/* Define the union U_V0_P3RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P3RESO;

// Define the union U_V0_P3LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P3LADDR;
// Define the union U_V0_P3CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P3CADDR;
/* Define the union U_V0_P3STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P3STRIDE;

/* Define the union U_V0_P3VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P3VFPOS;

/* Define the union U_V0_P3VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P3VLPOS;

/* Define the union U_V0_P3CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p3_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p3_rim_en             : 1   ; /* [1]  */
        unsigned int    p3_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p3_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p3_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p3_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P3CTRL;

/* Define the union U_V0_P4RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P4RESO;

// Define the union U_V0_P4LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P4LADDR;
// Define the union U_V0_P4CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P4CADDR;
/* Define the union U_V0_P4STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P4STRIDE;

/* Define the union U_V0_P4VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P4VFPOS;

/* Define the union U_V0_P4VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P4VLPOS;

/* Define the union U_V0_P4CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p4_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p4_rim_en             : 1   ; /* [1]  */
        unsigned int    p4_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p4_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p4_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p4_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P4CTRL;

/* Define the union U_V0_P5RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P5RESO;

// Define the union U_V0_P5LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P5LADDR;
// Define the union U_V0_P5CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P5CADDR;
/* Define the union U_V0_P5STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P5STRIDE;

/* Define the union U_V0_P5VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P5VFPOS;

/* Define the union U_V0_P5VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P5VLPOS;

/* Define the union U_V0_P5CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p5_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p5_rim_en             : 1   ; /* [1]  */
        unsigned int    p5_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p5_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p5_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p5_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P5CTRL;

/* Define the union U_V0_P6RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P6RESO;

// Define the union U_V0_P6LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P6LADDR;
// Define the union U_V0_P6CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P6CADDR;
/* Define the union U_V0_P6STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P6STRIDE;

/* Define the union U_V0_P6VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P6VFPOS;

/* Define the union U_V0_P6VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P6VLPOS;

/* Define the union U_V0_P6CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p6_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p6_rim_en             : 1   ; /* [1]  */
        unsigned int    p6_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p6_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p6_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p6_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P6CTRL;

/* Define the union U_V0_P7RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P7RESO;

// Define the union U_V0_P7LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P7LADDR;
// Define the union U_V0_P7CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P7CADDR;
/* Define the union U_V0_P7STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P7STRIDE;

/* Define the union U_V0_P7VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P7VFPOS;

/* Define the union U_V0_P7VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P7VLPOS;

/* Define the union U_V0_P7CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p7_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p7_rim_en             : 1   ; /* [1]  */
        unsigned int    p7_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p7_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p7_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p7_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P7CTRL;

/* Define the union U_V0_P8RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P8RESO;

// Define the union U_V0_P8LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P8LADDR;
// Define the union U_V0_P8CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P8CADDR;
/* Define the union U_V0_P8STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P8STRIDE;

/* Define the union U_V0_P8VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P8VFPOS;

/* Define the union U_V0_P8VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P8VLPOS;

/* Define the union U_V0_P8CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p8_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p8_rim_en             : 1   ; /* [1]  */
        unsigned int    p8_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p8_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p8_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p8_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P8CTRL;

/* Define the union U_V0_P9RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P9RESO;

// Define the union U_V0_P9LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P9LADDR;
// Define the union U_V0_P9CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P9CADDR;
/* Define the union U_V0_P9STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P9STRIDE;

/* Define the union U_V0_P9VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P9VFPOS;

/* Define the union U_V0_P9VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P9VLPOS;

/* Define the union U_V0_P9CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p9_rim_col_mod        : 1   ; /* [0]  */
        unsigned int    p9_rim_en             : 1   ; /* [1]  */
        unsigned int    p9_c_loss_en          : 1   ; /* [2]  */
        unsigned int    p9_l_loss_en          : 1   ; /* [3]  */
        unsigned int    p9_dcmp_en            : 1   ; /* [4]  */
        unsigned int    p9_en                 : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P9CTRL;

/* Define the union U_V0_P10RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P10RESO;

// Define the union U_V0_P10LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P10LADDR;
// Define the union U_V0_P10CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P10CADDR;
/* Define the union U_V0_P10STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P10STRIDE;

/* Define the union U_V0_P10VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P10VFPOS;

/* Define the union U_V0_P10VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P10VLPOS;

/* Define the union U_V0_P10CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p10_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p10_rim_en            : 1   ; /* [1]  */
        unsigned int    p10_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p10_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p10_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p10_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P10CTRL;

/* Define the union U_V0_P11RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P11RESO;

// Define the union U_V0_P11LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P11LADDR;
// Define the union U_V0_P11CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P11CADDR;
/* Define the union U_V0_P11STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P11STRIDE;

/* Define the union U_V0_P11VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P11VFPOS;

/* Define the union U_V0_P11VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P11VLPOS;

/* Define the union U_V0_P11CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p11_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p11_rim_en            : 1   ; /* [1]  */
        unsigned int    p11_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p11_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p11_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p11_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P11CTRL;

/* Define the union U_V0_P12RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P12RESO;

// Define the union U_V0_P12LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P12LADDR;
// Define the union U_V0_P12CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P12CADDR;
/* Define the union U_V0_P12STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P12STRIDE;

/* Define the union U_V0_P12VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P12VFPOS;

/* Define the union U_V0_P12VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P12VLPOS;

/* Define the union U_V0_P12CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p12_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p12_rim_en            : 1   ; /* [1]  */
        unsigned int    p12_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p12_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p12_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p12_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P12CTRL;

/* Define the union U_V0_P13RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P13RESO;

// Define the union U_V0_P13LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P13LADDR;
// Define the union U_V0_P13CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P13CADDR;
/* Define the union U_V0_P13STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P13STRIDE;

/* Define the union U_V0_P13VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P13VFPOS;

/* Define the union U_V0_P13VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P13VLPOS;

/* Define the union U_V0_P13CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p13_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p13_rim_en            : 1   ; /* [1]  */
        unsigned int    p13_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p13_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p13_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p13_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P13CTRL;

/* Define the union U_V0_P14RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P14RESO;

// Define the union U_V0_P14LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P14LADDR;
// Define the union U_V0_P14CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P14CADDR;
/* Define the union U_V0_P14STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P14STRIDE;

/* Define the union U_V0_P14VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P14VFPOS;

/* Define the union U_V0_P14VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P14VLPOS;

/* Define the union U_V0_P14CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p14_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p14_rim_en            : 1   ; /* [1]  */
        unsigned int    p14_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p14_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p14_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p14_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P14CTRL;

/* Define the union U_V0_P15RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P15RESO;

// Define the union U_V0_P15LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P15LADDR;
// Define the union U_V0_P15CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P15CADDR;
/* Define the union U_V0_P15STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P15STRIDE;

/* Define the union U_V0_P15VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P15VFPOS;

/* Define the union U_V0_P15VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P15VLPOS;

/* Define the union U_V0_P15CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p15_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p15_rim_en            : 1   ; /* [1]  */
        unsigned int    p15_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p15_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p15_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p15_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P15CTRL;

/* Define the union U_V0_P16RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P16RESO;

// Define the union U_V0_P16LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P16LADDR;

// Define the union U_V0_P16CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P16CADDR;

/* Define the union U_V0_P16STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P16STRIDE;

/* Define the union U_V0_P16VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P16VFPOS;

/* Define the union U_V0_P16VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P16VLPOS;

/* Define the union U_V0_P16CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p16_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p16_rim_en            : 1   ; /* [1]  */
        unsigned int    p16_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p16_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p16_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p16_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P16CTRL;

/* Define the union U_V0_P17RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P17RESO;

// Define the union U_V0_P17LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P17LADDR;

// Define the union U_V0_P17CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P17CADDR;

/* Define the union U_V0_P17STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P17STRIDE;

/* Define the union U_V0_P17VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P17VFPOS;

/* Define the union U_V0_P17VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P17VLPOS;

/* Define the union U_V0_P17CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p17_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p17_rim_en            : 1   ; /* [1]  */
        unsigned int    p17_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p17_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p17_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p17_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P17CTRL;

/* Define the union U_V0_P18RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P18RESO;

// Define the union U_V0_P18LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P18LADDR;

// Define the union U_V0_P18CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P18CADDR;

/* Define the union U_V0_P18STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P18STRIDE;

/* Define the union U_V0_P18VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P18VFPOS;

/* Define the union U_V0_P18VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P18VLPOS;

/* Define the union U_V0_P18CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p18_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p18_rim_en            : 1   ; /* [1]  */
        unsigned int    p18_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p18_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p18_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p18_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P18CTRL;

/* Define the union U_V0_P19RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P19RESO;

// Define the union U_V0_P19LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P19LADDR;

// Define the union U_V0_P19CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P19CADDR;

/* Define the union U_V0_P19STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P19STRIDE;

/* Define the union U_V0_P19VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P19VFPOS;

/* Define the union U_V0_P19VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P19VLPOS;

/* Define the union U_V0_P19CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p19_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p19_rim_en            : 1   ; /* [1]  */
        unsigned int    p19_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p19_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p19_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p19_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P19CTRL;

/* Define the union U_V0_P20RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P20RESO;

// Define the union U_V0_P20LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P20LADDR;

// Define the union U_V0_P20CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P20CADDR;

/* Define the union U_V0_P20STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P20STRIDE;

/* Define the union U_V0_P20VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P20VFPOS;

/* Define the union U_V0_P20VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P20VLPOS;

/* Define the union U_V0_P20CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p20_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p20_rim_en            : 1   ; /* [1]  */
        unsigned int    p20_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p20_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p20_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p20_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P20CTRL;

/* Define the union U_V0_P21RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P21RESO;

// Define the union U_V0_P21LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P21LADDR;

// Define the union U_V0_P21CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P21CADDR;

/* Define the union U_V0_P21STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P21STRIDE;

/* Define the union U_V0_P21VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P21VFPOS;

/* Define the union U_V0_P21VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P21VLPOS;

/* Define the union U_V0_P21CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p21_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p21_rim_en            : 1   ; /* [1]  */
        unsigned int    p21_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p21_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p21_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p21_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P21CTRL;

/* Define the union U_V0_P22RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P22RESO;

// Define the union U_V0_P22LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P22LADDR;

// Define the union U_V0_P22CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P22CADDR;

/* Define the union U_V0_P22STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P22STRIDE;

/* Define the union U_V0_P22VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P22VFPOS;

/* Define the union U_V0_P22VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P22VLPOS;

/* Define the union U_V0_P22CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p22_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p22_rim_en            : 1   ; /* [1]  */
        unsigned int    p22_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p22_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p22_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p22_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P22CTRL;

/* Define the union U_V0_P23RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P23RESO;

// Define the union U_V0_P23LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P23LADDR;

// Define the union U_V0_P23CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P23CADDR;

/* Define the union U_V0_P23STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P23STRIDE;

/* Define the union U_V0_P23VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P23VFPOS;

/* Define the union U_V0_P23VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P23VLPOS;

/* Define the union U_V0_P23CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p23_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p23_rim_en            : 1   ; /* [1]  */
        unsigned int    p23_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p23_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p23_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p23_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P23CTRL;

/* Define the union U_V0_P24RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P24RESO;

// Define the union U_V0_P24LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P24LADDR;

// Define the union U_V0_P24CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P24CADDR;

/* Define the union U_V0_P24STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P24STRIDE;

/* Define the union U_V0_P24VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P24VFPOS;

/* Define the union U_V0_P24VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P24VLPOS;

/* Define the union U_V0_P24CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p24_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p24_rim_en            : 1   ; /* [1]  */
        unsigned int    p24_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p24_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p24_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p24_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P24CTRL;

/* Define the union U_V0_P25RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P25RESO;

// Define the union U_V0_P25LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P25LADDR;

// Define the union U_V0_P25CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P25CADDR;

/* Define the union U_V0_P25STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P25STRIDE;

/* Define the union U_V0_P25VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P25VFPOS;

/* Define the union U_V0_P25VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P25VLPOS;

/* Define the union U_V0_P25CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p25_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p25_rim_en            : 1   ; /* [1]  */
        unsigned int    p25_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p25_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p25_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p25_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P25CTRL;

/* Define the union U_V0_P26RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P26RESO;

// Define the union U_V0_P26LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P26LADDR;

// Define the union U_V0_P26CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P26CADDR;

/* Define the union U_V0_P26STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P26STRIDE;

/* Define the union U_V0_P26VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P26VFPOS;

/* Define the union U_V0_P26VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P26VLPOS;

/* Define the union U_V0_P26CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p26_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p26_rim_en            : 1   ; /* [1]  */
        unsigned int    p26_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p26_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p26_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p26_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P26CTRL;

/* Define the union U_V0_P27RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P27RESO;

// Define the union U_V0_P27LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P27LADDR;

// Define the union U_V0_P27CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P27CADDR;

/* Define the union U_V0_P27STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P27STRIDE;

/* Define the union U_V0_P27VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P27VFPOS;

/* Define the union U_V0_P27VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P27VLPOS;

/* Define the union U_V0_P27CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p27_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p27_rim_en            : 1   ; /* [1]  */
        unsigned int    p27_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p27_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p27_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p27_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P27CTRL;

/* Define the union U_V0_P28RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P28RESO;

// Define the union U_V0_P28LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P28LADDR;

// Define the union U_V0_P28CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P28CADDR;

/* Define the union U_V0_P28STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P28STRIDE;

/* Define the union U_V0_P28VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P28VFPOS;

/* Define the union U_V0_P28VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P28VLPOS;

/* Define the union U_V0_P28CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p28_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p28_rim_en            : 1   ; /* [1]  */
        unsigned int    p28_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p28_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p28_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p28_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P28CTRL;

/* Define the union U_V0_P29RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P29RESO;

// Define the union U_V0_P29LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P29LADDR;

// Define the union U_V0_P29CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P29CADDR;

/* Define the union U_V0_P29STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P29STRIDE;

/* Define the union U_V0_P29VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P29VFPOS;

/* Define the union U_V0_P29VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P29VLPOS;

/* Define the union U_V0_P29CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p29_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p29_rim_en            : 1   ; /* [1]  */
        unsigned int    p29_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p29_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p29_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p29_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P29CTRL;

/* Define the union U_V0_P30RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P30RESO;

// Define the union U_V0_P30LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P30LADDR;

// Define the union U_V0_P30CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P30CADDR;

/* Define the union U_V0_P30STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P30STRIDE;

/* Define the union U_V0_P30VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P30VFPOS;

/* Define the union U_V0_P30VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P30VLPOS;

/* Define the union U_V0_P30CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p30_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p30_rim_en            : 1   ; /* [1]  */
        unsigned int    p30_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p30_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p30_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p30_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P30CTRL;

/* Define the union U_V0_P31RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P31RESO;

// Define the union U_V0_P31LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P31LADDR;

// Define the union U_V0_P31CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P31CADDR;

/* Define the union U_V0_P31STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P31STRIDE;

/* Define the union U_V0_P31VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P31VFPOS;

/* Define the union U_V0_P31VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P31VLPOS;

/* Define the union U_V0_P31CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p31_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p31_rim_en            : 1   ; /* [1]  */
        unsigned int    p31_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p31_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p31_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p31_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P31CTRL;

/* Define the union U_V0_P32RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P32RESO;

// Define the union U_V0_P32LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P32LADDR;

// Define the union U_V0_P32CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P32CADDR;

/* Define the union U_V0_P32STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P32STRIDE;

/* Define the union U_V0_P32VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P32VFPOS;

/* Define the union U_V0_P32VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P32VLPOS;

/* Define the union U_V0_P32CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p32_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p32_rim_en            : 1   ; /* [1]  */
        unsigned int    p32_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p32_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p32_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p32_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P32CTRL;

/* Define the union U_V0_P33RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P33RESO;

// Define the union U_V0_P33LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P33LADDR;

// Define the union U_V0_P33CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P33CADDR;

/* Define the union U_V0_P33STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P33STRIDE;

/* Define the union U_V0_P33VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P33VFPOS;

/* Define the union U_V0_P33VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P33VLPOS;

/* Define the union U_V0_P33CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p33_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p33_rim_en            : 1   ; /* [1]  */
        unsigned int    p33_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p33_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p33_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p33_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P33CTRL;

/* Define the union U_V0_P34RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P34RESO;

// Define the union U_V0_P34LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P34LADDR;

// Define the union U_V0_P34CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P34CADDR;

/* Define the union U_V0_P34STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P34STRIDE;

/* Define the union U_V0_P34VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P34VFPOS;

/* Define the union U_V0_P34VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P34VLPOS;

/* Define the union U_V0_P34CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p34_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p34_rim_en            : 1   ; /* [1]  */
        unsigned int    p34_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p34_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p34_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p34_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P34CTRL;

/* Define the union U_V0_P35RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P35RESO;

// Define the union U_V0_P35LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P35LADDR;

// Define the union U_V0_P35CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P35CADDR;

/* Define the union U_V0_P35STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P35STRIDE;

/* Define the union U_V0_P35VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P35VFPOS;

/* Define the union U_V0_P35VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P35VLPOS;

/* Define the union U_V0_P35CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p35_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p35_rim_en            : 1   ; /* [1]  */
        unsigned int    p35_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p35_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p35_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p35_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P35CTRL;

/* Define the union U_V0_P36RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P36RESO;

// Define the union U_V0_P36LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P36LADDR;

// Define the union U_V0_P36CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P36CADDR;

/* Define the union U_V0_P36STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P36STRIDE;

/* Define the union U_V0_P36VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P36VFPOS;

/* Define the union U_V0_P36VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P36VLPOS;

/* Define the union U_V0_P36CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p36_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p36_rim_en            : 1   ; /* [1]  */
        unsigned int    p36_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p36_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p36_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p36_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P36CTRL;

/* Define the union U_V0_P37RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P37RESO;

// Define the union U_V0_P37LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P37LADDR;

// Define the union U_V0_P37CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P37CADDR;

/* Define the union U_V0_P37STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P37STRIDE;

/* Define the union U_V0_P37VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P37VFPOS;

/* Define the union U_V0_P37VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P37VLPOS;

/* Define the union U_V0_P37CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p37_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p37_rim_en            : 1   ; /* [1]  */
        unsigned int    p37_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p37_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p37_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p37_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P37CTRL;

/* Define the union U_V0_P38RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P38RESO;

// Define the union U_V0_P38LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P38LADDR;

// Define the union U_V0_P38CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P38CADDR;

/* Define the union U_V0_P38STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P38STRIDE;

/* Define the union U_V0_P38VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P38VFPOS;

/* Define the union U_V0_P38VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P38VLPOS;

/* Define the union U_V0_P38CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p38_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p38_rim_en            : 1   ; /* [1]  */
        unsigned int    p38_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p38_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p38_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p38_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P38CTRL;

/* Define the union U_V0_P39RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P39RESO;

// Define the union U_V0_P39LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P39LADDR;

// Define the union U_V0_P39CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P39CADDR;

/* Define the union U_V0_P39STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P39STRIDE;

/* Define the union U_V0_P39VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P39VFPOS;

/* Define the union U_V0_P39VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P39VLPOS;

/* Define the union U_V0_P39CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p39_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p39_rim_en            : 1   ; /* [1]  */
        unsigned int    p39_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p39_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p39_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p39_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P39CTRL;

/* Define the union U_V0_P40RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P40RESO;

// Define the union U_V0_P40LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P40LADDR;

// Define the union U_V0_P40CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P40CADDR;

/* Define the union U_V0_P40STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P40STRIDE;

/* Define the union U_V0_P40VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P40VFPOS;

/* Define the union U_V0_P40VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P40VLPOS;

/* Define the union U_V0_P40CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p40_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p40_rim_en            : 1   ; /* [1]  */
        unsigned int    p40_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p40_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p40_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p40_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P40CTRL;

/* Define the union U_V0_P41RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P41RESO;

// Define the union U_V0_P41LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P41LADDR;

// Define the union U_V0_P41CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P41CADDR;

/* Define the union U_V0_P41STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P41STRIDE;

/* Define the union U_V0_P41VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P41VFPOS;

/* Define the union U_V0_P41VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P41VLPOS;

/* Define the union U_V0_P41CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p41_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p41_rim_en            : 1   ; /* [1]  */
        unsigned int    p41_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p41_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p41_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p41_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P41CTRL;

/* Define the union U_V0_P42RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P42RESO;

// Define the union U_V0_P42LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P42LADDR;

// Define the union U_V0_P42CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P42CADDR;

/* Define the union U_V0_P42STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P42STRIDE;

/* Define the union U_V0_P42VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P42VFPOS;

/* Define the union U_V0_P42VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P42VLPOS;

/* Define the union U_V0_P42CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p42_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p42_rim_en            : 1   ; /* [1]  */
        unsigned int    p42_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p42_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p42_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p42_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P42CTRL;

/* Define the union U_V0_P43RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P43RESO;

// Define the union U_V0_P43LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P43LADDR;

// Define the union U_V0_P43CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P43CADDR;

/* Define the union U_V0_P43STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P43STRIDE;

/* Define the union U_V0_P43VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P43VFPOS;

/* Define the union U_V0_P43VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P43VLPOS;

/* Define the union U_V0_P43CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p43_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p43_rim_en            : 1   ; /* [1]  */
        unsigned int    p43_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p43_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p43_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p43_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P43CTRL;

/* Define the union U_V0_P44RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P44RESO;

// Define the union U_V0_P44LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P44LADDR;

// Define the union U_V0_P44CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P44CADDR;

/* Define the union U_V0_P44STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P44STRIDE;

/* Define the union U_V0_P44VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P44VFPOS;

/* Define the union U_V0_P44VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P44VLPOS;

/* Define the union U_V0_P44CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p44_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p44_rim_en            : 1   ; /* [1]  */
        unsigned int    p44_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p44_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p44_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p44_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P44CTRL;

/* Define the union U_V0_P45RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P45RESO;

// Define the union U_V0_P45LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P45LADDR;

// Define the union U_V0_P45CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P45CADDR;

/* Define the union U_V0_P45STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P45STRIDE;

/* Define the union U_V0_P45VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P45VFPOS;

/* Define the union U_V0_P45VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P45VLPOS;

/* Define the union U_V0_P45CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p45_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p45_rim_en            : 1   ; /* [1]  */
        unsigned int    p45_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p45_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p45_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p45_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P45CTRL;

/* Define the union U_V0_P46RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P46RESO;

// Define the union U_V0_P46LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P46LADDR;

// Define the union U_V0_P46CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P46CADDR;

/* Define the union U_V0_P46STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P46STRIDE;

/* Define the union U_V0_P46VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P46VFPOS;

/* Define the union U_V0_P46VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P46VLPOS;

/* Define the union U_V0_P46CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p46_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p46_rim_en            : 1   ; /* [1]  */
        unsigned int    p46_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p46_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p46_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p46_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P46CTRL;

/* Define the union U_V0_P47RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P47RESO;

// Define the union U_V0_P47LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P47LADDR;

// Define the union U_V0_P47CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P47CADDR;

/* Define the union U_V0_P47STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P47STRIDE;

/* Define the union U_V0_P47VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P47VFPOS;

/* Define the union U_V0_P47VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P47VLPOS;

/* Define the union U_V0_P47CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p47_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p47_rim_en            : 1   ; /* [1]  */
        unsigned int    p47_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p47_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p47_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p47_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P47CTRL;

/* Define the union U_V0_P48RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P48RESO;

// Define the union U_V0_P48LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P48LADDR;

// Define the union U_V0_P48CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P48CADDR;

/* Define the union U_V0_P48STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P48STRIDE;

/* Define the union U_V0_P48VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P48VFPOS;

/* Define the union U_V0_P48VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P48VLPOS;

/* Define the union U_V0_P48CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p48_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p48_rim_en            : 1   ; /* [1]  */
        unsigned int    p48_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p48_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p48_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p48_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P48CTRL;

/* Define the union U_V0_P49RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P49RESO;

// Define the union U_V0_P49LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P49LADDR;

// Define the union U_V0_P49CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P49CADDR;

/* Define the union U_V0_P49STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P49STRIDE;

/* Define the union U_V0_P49VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P49VFPOS;

/* Define the union U_V0_P49VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P49VLPOS;

/* Define the union U_V0_P49CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p49_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p49_rim_en            : 1   ; /* [1]  */
        unsigned int    p49_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p49_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p49_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p49_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P49CTRL;

/* Define the union U_V0_P50RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P50RESO;

// Define the union U_V0_P50LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P50LADDR;

// Define the union U_V0_P50CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P50CADDR;

/* Define the union U_V0_P50STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P50STRIDE;

/* Define the union U_V0_P50VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P50VFPOS;

/* Define the union U_V0_P50VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P50VLPOS;

/* Define the union U_V0_P50CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p50_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p50_rim_en            : 1   ; /* [1]  */
        unsigned int    p50_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p50_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p50_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p50_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P50CTRL;

/* Define the union U_V0_P51RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P51RESO;

// Define the union U_V0_P51LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P51LADDR;

// Define the union U_V0_P51CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P51CADDR;

/* Define the union U_V0_P51STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P51STRIDE;

/* Define the union U_V0_P51VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P51VFPOS;

/* Define the union U_V0_P51VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P51VLPOS;

/* Define the union U_V0_P51CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p51_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p51_rim_en            : 1   ; /* [1]  */
        unsigned int    p51_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p51_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p51_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p51_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P51CTRL;

/* Define the union U_V0_P52RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P52RESO;

// Define the union U_V0_P52LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P52LADDR;

// Define the union U_V0_P52CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P52CADDR;

/* Define the union U_V0_P52STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P52STRIDE;

/* Define the union U_V0_P52VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P52VFPOS;

/* Define the union U_V0_P52VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P52VLPOS;

/* Define the union U_V0_P52CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p52_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p52_rim_en            : 1   ; /* [1]  */
        unsigned int    p52_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p52_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p52_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p52_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P52CTRL;

/* Define the union U_V0_P53RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P53RESO;

// Define the union U_V0_P53LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P53LADDR;

// Define the union U_V0_P53CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P53CADDR;

/* Define the union U_V0_P53STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P53STRIDE;

/* Define the union U_V0_P53VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P53VFPOS;

/* Define the union U_V0_P53VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P53VLPOS;

/* Define the union U_V0_P53CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p53_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p53_rim_en            : 1   ; /* [1]  */
        unsigned int    p53_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p53_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p53_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p53_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P53CTRL;

/* Define the union U_V0_P54RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P54RESO;

// Define the union U_V0_P54LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P54LADDR;

// Define the union U_V0_P54CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P54CADDR;

/* Define the union U_V0_P54STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P54STRIDE;

/* Define the union U_V0_P54VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P54VFPOS;

/* Define the union U_V0_P54VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P54VLPOS;

/* Define the union U_V0_P54CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p54_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p54_rim_en            : 1   ; /* [1]  */
        unsigned int    p54_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p54_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p54_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p54_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P54CTRL;

/* Define the union U_V0_P55RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P55RESO;

// Define the union U_V0_P55LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P55LADDR;

// Define the union U_V0_P55CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P55CADDR;

/* Define the union U_V0_P55STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P55STRIDE;

/* Define the union U_V0_P55VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P55VFPOS;

/* Define the union U_V0_P55VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P55VLPOS;

/* Define the union U_V0_P55CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p55_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p55_rim_en            : 1   ; /* [1]  */
        unsigned int    p55_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p55_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p55_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p55_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P55CTRL;

/* Define the union U_V0_P56RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P56RESO;

// Define the union U_V0_P56LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P56LADDR;

// Define the union U_V0_P56CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P56CADDR;

/* Define the union U_V0_P56STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P56STRIDE;

/* Define the union U_V0_P56VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P56VFPOS;

/* Define the union U_V0_P56VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P56VLPOS;

/* Define the union U_V0_P56CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p56_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p56_rim_en            : 1   ; /* [1]  */
        unsigned int    p56_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p56_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p56_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p56_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P56CTRL;

/* Define the union U_V0_P57RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P57RESO;

// Define the union U_V0_P57LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P57LADDR;

// Define the union U_V0_P57CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P57CADDR;

/* Define the union U_V0_P57STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P57STRIDE;

/* Define the union U_V0_P57VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P57VFPOS;

/* Define the union U_V0_P57VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P57VLPOS;

/* Define the union U_V0_P57CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p57_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p57_rim_en            : 1   ; /* [1]  */
        unsigned int    p57_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p57_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p57_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p57_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P57CTRL;

/* Define the union U_V0_P58RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P58RESO;

// Define the union U_V0_P58LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P58LADDR;

// Define the union U_V0_P58CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P58CADDR;

/* Define the union U_V0_P58STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P58STRIDE;

/* Define the union U_V0_P58VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P58VFPOS;

/* Define the union U_V0_P58VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P58VLPOS;

/* Define the union U_V0_P58CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p58_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p58_rim_en            : 1   ; /* [1]  */
        unsigned int    p58_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p58_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p58_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p58_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P58CTRL;

/* Define the union U_V0_P59RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P59RESO;

// Define the union U_V0_P59LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P59LADDR;

// Define the union U_V0_P59CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P59CADDR;

/* Define the union U_V0_P59STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P59STRIDE;

/* Define the union U_V0_P59VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P59VFPOS;

/* Define the union U_V0_P59VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P59VLPOS;

/* Define the union U_V0_P59CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p59_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p59_rim_en            : 1   ; /* [1]  */
        unsigned int    p59_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p59_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p59_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p59_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P59CTRL;

/* Define the union U_V0_P60RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P60RESO;

// Define the union U_V0_P60LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P60LADDR;

// Define the union U_V0_P60CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P60CADDR;

/* Define the union U_V0_P60STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P60STRIDE;

/* Define the union U_V0_P60VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P60VFPOS;

/* Define the union U_V0_P60VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P60VLPOS;

/* Define the union U_V0_P60CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p60_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p60_rim_en            : 1   ; /* [1]  */
        unsigned int    p60_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p60_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p60_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p60_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P60CTRL;

/* Define the union U_V0_P61RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P61RESO;

// Define the union U_V0_P61LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P61LADDR;

// Define the union U_V0_P61CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P61CADDR;

/* Define the union U_V0_P61STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P61STRIDE;

/* Define the union U_V0_P61VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P61VFPOS;

/* Define the union U_V0_P61VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P61VLPOS;

/* Define the union U_V0_P61CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p61_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p61_rim_en            : 1   ; /* [1]  */
        unsigned int    p61_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p61_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p61_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p61_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P61CTRL;

/* Define the union U_V0_P62RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P62RESO;

// Define the union U_V0_P62LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P62LADDR;

// Define the union U_V0_P62CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P62CADDR;

/* Define the union U_V0_P62STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P62STRIDE;

/* Define the union U_V0_P62VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P62VFPOS;

/* Define the union U_V0_P62VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P62VLPOS;

/* Define the union U_V0_P62CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p62_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p62_rim_en            : 1   ; /* [1]  */
        unsigned int    p62_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p62_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p62_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p62_en                : 1   ; /* [5]  */
        unsigned int    p62_mute_en           : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P62CTRL;

/* Define the union U_V0_P63RESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    w                     : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P63RESO;

// Define the union U_V0_P63LADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P63LADDR;

// Define the union U_V0_P63CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_P63CADDR;

/* Define the union U_V0_P63STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    surface_cstride       : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P63STRIDE;

/* Define the union U_V0_P63VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P63VFPOS;

/* Define the union U_V0_P63VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P63VLPOS;

/* Define the union U_V0_P63CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p63_rim_col_mod       : 1   ; /* [0]  */
        unsigned int    p63_rim_en            : 1   ; /* [1]  */
        unsigned int    p63_c_loss_en         : 1   ; /* [2]  */
        unsigned int    p63_l_loss_en         : 1   ; /* [3]  */
        unsigned int    p63_dcmp_en           : 1   ; /* [4]  */
        unsigned int    p63_en                : 1   ; /* [5]  */
        unsigned int    mute_en               : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_P63CTRL;

// Define the union U_V0_NADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_naddr           : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_NADDR;
// Define the union U_V0_NCADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_ncaddr          : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_NCADDR;
/* Define the union U_V0_MULTI_MODE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mrg_mode              : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_MULTI_MODE;

// Define the union U_V0_LADDROFFSET
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int laddr_offset            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_LADDROFFSET;
// Define the union U_V0_CADDROFFSET
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int caddr_offset            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_CADDROFFSET;
// Define the union U_V0_16REGIONENL
typedef union
{
    // Define the struct bits
    struct
    {
        unsigned int    p0_en                 : 1   ; // [0] 
        unsigned int    p1_en                 : 1   ; // [1] 
        unsigned int    p2_en                 : 1   ; // [2] 
        unsigned int    p3_en                 : 1   ; // [3] 
        unsigned int    p4_en                 : 1   ; // [4] 
        unsigned int    p5_en                 : 1   ; // [5] 
        unsigned int    p6_en                 : 1   ; // [6] 
        unsigned int    p7_en                 : 1   ; // [7] 
        unsigned int    p8_en                 : 1   ; // [8] 
        unsigned int    p9_en                 : 1   ; // [9] 
        unsigned int    p10_en                : 1   ; // [10] 
        unsigned int    p11_en                : 1   ; // [11] 
        unsigned int    p12_en                : 1   ; // [12] 
        unsigned int    p13_en                : 1   ; // [13] 
        unsigned int    p14_en                : 1   ; // [14] 
        unsigned int    p15_en                : 1   ; // [15] 
        unsigned int    Reserved_185          : 16  ; // [31..16] 
    } bits;

    // Define an unsigned member
    unsigned int    u32;

} U_V0_16REGIONENL;

// Define the union U_V0_16MUTE
typedef union
{
    // Define the struct bits
    struct
    {
        unsigned int    p0_mute_en            : 1   ; // [0] 
        unsigned int    p1_mute_en            : 1   ; // [1] 
        unsigned int    p2_mute_en            : 1   ; // [2] 
        unsigned int    p3_mute_en            : 1   ; // [3] 
        unsigned int    p4_mute_en            : 1   ; // [4] 
        unsigned int    p5_mute_en            : 1   ; // [5] 
        unsigned int    p6_mute_en            : 1   ; // [6] 
        unsigned int    p7_mute_en            : 1   ; // [7] 
        unsigned int    p8_mute_en            : 1   ; // [8] 
        unsigned int    p9_mute_en            : 1   ; // [9] 
        unsigned int    p10_mute_en           : 1   ; // [10] 
        unsigned int    p11_mute_en           : 1   ; // [11] 
        unsigned int    p12_mute_en           : 1   ; // [12] 
        unsigned int    p13_mute_en           : 1   ; // [13] 
        unsigned int    p14_mute_en           : 1   ; // [14] 
        unsigned int    p15_mute_en           : 1   ; // [15] 
        unsigned int    Reserved_187          : 16  ; // [31..16] 
    } bits;

    // Define an unsigned member
    unsigned int    u32;

} U_V0_16MUTE;

// Define the union U_V0_DCMP_LSTATE0
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int dcmp_l_state0           : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_DCMP_LSTATE0;
// Define the union U_V0_DCMP_LSTATE1
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int dcmp_l_state1           : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_DCMP_LSTATE1;
// Define the union U_V0_DCMP_CSTATE0
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int dcmp_c_state0           : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_DCMP_CSTATE0;
// Define the union U_V0_DCMP_CSTATE1
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int dcmp_c_state1           : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_V0_DCMP_CSTATE1;
/* Define the union U_VO_DCMPERRCLR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dcmp_l_errclr         : 1   ; /* [0]  */
        unsigned int    dcmp_c_errclr         : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_DCMPERRCLR;

/* Define the union U_V0_DCMP_ERR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dcmp_l_wrong          : 1   ; /* [0]  */
        unsigned int    dcmp_c_wrong          : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_DCMP_ERR;

/* Define the union U_VO_MRGERRCLR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mrg_errclr            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VO_MRGERRCLR;

/* Define the union U_V0_MRG_ERR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mrg_wrong             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_V0_MRG_ERR;

/* Define the union U_VP0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vp_galpha             : 8   ; /* [7..0]  */
        unsigned int    mute_en               : 1   ; /* [8]  */
        unsigned int    reserved_0            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CTRL;

/* Define the union U_VP0_UPD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    regup                 : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_UPD;
// Define the union U_VP0_ACC_CAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_VP0_ACC_CAD;
// Define the union U_VP0_ACM_CAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_VP0_ACM_CAD;
// Define the union U_VP0_PARAUP
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v0_acmcoef_upd        : 1   ; /* [0]  */
        unsigned int    v0_acccoef_upd        : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_PARAUP;

/* Define the union U_VP0_IRESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    iw                    : 12  ; /* [11..0]  */
        unsigned int    ih                    : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_IRESO;

/* Define the union U_VP0_DOF_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [30..0]  */
        unsigned int    dof_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_DOF_CTRL;

/* Define the union U_VP0_DOF_STEP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    left_step             : 8   ; /* [7..0]  */
        unsigned int    right_step            : 8   ; /* [15..8]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_DOF_STEP;

/* Define the union U_VP0_ACCTHD1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    thd_low               : 10  ; /* [9..0]  */
        unsigned int    thd_high              : 10  ; /* [19..10]  */
        unsigned int    thd_med_low           : 10  ; /* [29..20]  */
        unsigned int    acc_mode              : 1   ; /* [30]  */
        unsigned int    acc_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACCTHD1;

/* Define the union U_VP0_ACCTHD2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    thd_med_high          : 10  ; /* [9..0]  */
        unsigned int    acc_multiple          : 8   ; /* [17..10]  */
        unsigned int    acc_rst               : 1   ; /* [18]  */
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACCTHD2;

/* Define the union U_VP0_ACCLOWN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    table_data1n          : 10  ; /* [9..0]  */
        unsigned int    table_data2n          : 10  ; /* [19..10]  */
        unsigned int    table_data3n          : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACCLOWN;

/* Define the union U_VP0_ACCMEDN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    table_data1n          : 10  ; /* [9..0]  */
        unsigned int    table_data2n          : 10  ; /* [19..10]  */
        unsigned int    table_data3n          : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACCMEDN;

/* Define the union U_VP0_ACCHIGHN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    table_data1n          : 10  ; /* [9..0]  */
        unsigned int    table_data2n          : 10  ; /* [19..10]  */
        unsigned int    table_data3n          : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACCHIGHN;

/* Define the union U_VP0_ACCMLN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    table_data1n          : 10  ; /* [9..0]  */
        unsigned int    table_data2n          : 10  ; /* [19..10]  */
        unsigned int    table_data3n          : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACCMLN;

/* Define the union U_VP0_ACCMHN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    table_data1n          : 10  ; /* [9..0]  */
        unsigned int    table_data2n          : 10  ; /* [19..10]  */
        unsigned int    table_data3n          : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACCMHN;

/* Define the union U_VP0_ACC3LOW */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnt3_low              : 21  ; /* [20..0]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACC3LOW;

/* Define the union U_VP0_ACC3MED */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnt3_med              : 21  ; /* [20..0]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACC3MED;

/* Define the union U_VP0_ACC3HIGH */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnt3_high             : 21  ; /* [20..0]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACC3HIGH;

/* Define the union U_VP0_ACC8MLOW */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnt8_med_low          : 21  ; /* [20..0]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACC8MLOW;

/* Define the union U_VP0_ACC8MHIGH */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnt8_med_high         : 21  ; /* [20..0]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACC8MHIGH;

/* Define the union U_VP0_ACCTOTAL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    acc_pix_total         : 21  ; /* [20..0]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACCTOTAL;

/* Define the union U_VP0_ACM_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    acm_cbcrthr           : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 19  ; /* [26..8]  */
        unsigned int    acm_cliporwrap        : 1   ; /* [27]  */
        unsigned int    acm_cliprange         : 1   ; /* [28]  */
        unsigned int    acm_stretch           : 1   ; /* [29]  */
        unsigned int    acm_dbg_en            : 1   ; /* [30]  */
        unsigned int    acm_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACM_CTRL;

/* Define the union U_VP0_ACM_ADJ */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    acm_gain2             : 10  ; /* [9..0]  */
        unsigned int    acm_gain1             : 10  ; /* [19..10]  */
        unsigned int    acm_gain0             : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ACM_ADJ;

/* Define the union U_VP0_DFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    disp_xfpos            : 12  ; /* [11..0]  */
        unsigned int    disp_yfpos            : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_DFPOS;

/* Define the union U_VP0_DLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    disp_xlpos            : 12  ; /* [11..0]  */
        unsigned int    disp_ylpos            : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_DLPOS;

/* Define the union U_VP0_VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_VFPOS;

/* Define the union U_VP0_VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_VLPOS;

/* Define the union U_VP0_BK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbk_cr                : 10  ; /* [9..0]  */
        unsigned int    vbk_cb                : 10  ; /* [19..10]  */
        unsigned int    vbk_y                 : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_BK;

/* Define the union U_VP0_ALPHA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbk_alpha             : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_ALPHA;

/* Define the union U_VP0_CSC0_IDC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc0               : 11  ; /* [10..0]  */
        unsigned int    cscidc1               : 11  ; /* [21..11]  */
        unsigned int    csc_en                : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC0_IDC;

/* Define the union U_VP0_CSC0_ODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscodc0               : 11  ; /* [10..0]  */
        unsigned int    cscodc1               : 11  ; /* [21..11]  */
        unsigned int    csc_sign_mode         : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC0_ODC;

/* Define the union U_VP0_CSC0_IODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc2               : 11  ; /* [10..0]  */
        unsigned int    cscodc2               : 11  ; /* [21..11]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC0_IODC;

/* Define the union U_VP0_CSC0_P0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp00                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp01                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC0_P0;

/* Define the union U_VP0_CSC0_P1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp02                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp10                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC0_P1;

/* Define the union U_VP0_CSC0_P2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp11                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp12                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC0_P2;

/* Define the union U_VP0_CSC0_P3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp20                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp21                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC0_P3;

/* Define the union U_VP0_CSC0_P4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp22                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC0_P4;

/* Define the union U_VP0_CSC1_IDC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc0               : 11  ; /* [10..0]  */
        unsigned int    cscidc1               : 11  ; /* [21..11]  */
        unsigned int    csc_en                : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC1_IDC;

/* Define the union U_VP0_CSC1_ODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscodc0               : 11  ; /* [10..0]  */
        unsigned int    cscodc1               : 11  ; /* [21..11]  */
        unsigned int    csc_sign_mode         : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC1_ODC;

/* Define the union U_VP0_CSC1_IODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc2               : 11  ; /* [10..0]  */
        unsigned int    cscodc2               : 11  ; /* [21..11]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC1_IODC;

/* Define the union U_VP0_CSC1_P0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp00                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp01                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC1_P0;

/* Define the union U_VP0_CSC1_P1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp02                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp10                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC1_P1;

/* Define the union U_VP0_CSC1_P2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp11                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp12                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC1_P2;

/* Define the union U_VP0_CSC1_P3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp20                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp21                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC1_P3;

/* Define the union U_VP0_CSC1_P4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp22                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_VP0_CSC1_P4;

/* Define the union U_G0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ifmt                  : 8   ; /* [7..0]  */
        unsigned int    bitext                : 2   ; /* [9..8]  */
        unsigned int    reserved_0            : 2   ; /* [11..10]  */
        unsigned int    req_ctrl              : 3   ; /* [14..12]  */
        unsigned int    reserved_1            : 9   ; /* [23..15]  */
        unsigned int    flip_en               : 1   ; /* [24]  */
        unsigned int    dcmp_en               : 1   ; /* [25]  */
        unsigned int    read_mode             : 1   ; /* [26]  */
        unsigned int    upd_mode              : 1   ; /* [27]  */
        unsigned int    mute_en               : 1   ; /* [28]  */
        unsigned int    reserved_2            : 1   ; /* [29]  */
        unsigned int    nosec_flag            : 1   ; /* [30]  */
        unsigned int    surface_en            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CTRL;

/* Define the union U_G0_UPD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    regup                 : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_UPD;

// Define the union U_G0_ADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_G0_ADDR;
// Define the union U_G0_NADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_G0_NADDR;
/* Define the union U_G0_STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    surface_stride        : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_STRIDE;

/* Define the union U_G0_IRESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    iw                    : 12  ; /* [11..0]  */
        unsigned int    ih                    : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_IRESO;

/* Define the union U_G0_SFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    src_xfpos             : 7   ; /* [6..0]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_SFPOS;

/* Define the union U_G0_CBMPARA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    galpha                : 8   ; /* [7..0]  */
        unsigned int    palpha_range          : 1   ; /* [8]  */
        unsigned int    reserved_0            : 1   ; /* [9]  */
        unsigned int    vedge_p               : 1   ; /* [10]  */
        unsigned int    hedge_p               : 1   ; /* [11]  */
        unsigned int    palpha_en             : 1   ; /* [12]  */
        unsigned int    premult_en            : 1   ; /* [13]  */
        unsigned int    key_en                : 1   ; /* [14]  */
        unsigned int    key_mode              : 1   ; /* [15]  */
        unsigned int    reserved_1            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CBMPARA;

/* Define the union U_G0_CKEYMAX */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    keyb_max              : 8   ; /* [7..0]  */
        unsigned int    keyg_max              : 8   ; /* [15..8]  */
        unsigned int    keyr_max              : 8   ; /* [23..16]  */
        unsigned int    va0                   : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CKEYMAX;

/* Define the union U_G0_CKEYMIN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    keyb_min              : 8   ; /* [7..0]  */
        unsigned int    keyg_min              : 8   ; /* [15..8]  */
        unsigned int    keyr_min              : 8   ; /* [23..16]  */
        unsigned int    va1                   : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CKEYMIN;

/* Define the union U_G0_CMASK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    kmsk_b                : 8   ; /* [7..0]  */
        unsigned int    kmsk_g                : 8   ; /* [15..8]  */
        unsigned int    kmsk_r                : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CMASK;

// Define the union U_G0_PARAADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_G0_PARAADDR;
/* Define the union U_G0_PARAUP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gdc_paraup            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_PARAUP;

/* Define the union U_G0_FIFOTHD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    buf_wr_thd            : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 21  ; /* [30..10]  */
        unsigned int    gdc_buf_en            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_FIFOTHD;

// Define the union U_G0_DCMP_ADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_G0_DCMP_ADDR;
// Define the union U_G0_DCMP_NADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int surface_addr            : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_G0_DCMP_NADDR;
// Define the union U_G0_DCMP_OFFSET
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int offset                  : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_G0_DCMP_OFFSET;
/* Define the union U_G0_DFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    disp_xfpos            : 12  ; /* [11..0]  */
        unsigned int    disp_yfpos            : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_DFPOS;

/* Define the union U_G0_DLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    disp_xlpos            : 12  ; /* [11..0]  */
        unsigned int    disp_ylpos            : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_DLPOS;

/* Define the union U_G0_VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_VFPOS;

/* Define the union U_G0_VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_VLPOS;

/* Define the union U_G0_BK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbk_cr                : 10  ; /* [9..0]  */
        unsigned int    vbk_cb                : 10  ; /* [19..10]  */
        unsigned int    vbk_y                 : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_BK;

/* Define the union U_G0_ALPHA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbk_alpha             : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_ALPHA;

/* Define the union U_G0_DOF_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [30..0]  */
        unsigned int    dof_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_DOF_CTRL;

/* Define the union U_G0_DOF_STEP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    left_step             : 8   ; /* [7..0]  */
        unsigned int    right_step            : 8   ; /* [15..8]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_DOF_STEP;

/* Define the union U_G0_CSC_IDC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc0               : 11  ; /* [10..0]  */
        unsigned int    cscidc1               : 11  ; /* [21..11]  */
        unsigned int    csc_en                : 1   ; /* [22]  */
        unsigned int    csc_mode              : 3   ; /* [25..23]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CSC_IDC;

/* Define the union U_G0_CSC_ODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscodc0               : 11  ; /* [10..0]  */
        unsigned int    cscodc1               : 11  ; /* [21..11]  */
        unsigned int    csc_sign_mode         : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CSC_ODC;

/* Define the union U_G0_CSC_IODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc2               : 11  ; /* [10..0]  */
        unsigned int    cscodc2               : 11  ; /* [21..11]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CSC_IODC;

/* Define the union U_G0_CSC_P0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp00                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp01                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CSC_P0;

/* Define the union U_G0_CSC_P1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp02                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp10                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CSC_P1;

/* Define the union U_G0_CSC_P2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp11                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp12                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CSC_P2;

/* Define the union U_G0_CSC_P3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp20                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp21                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CSC_P3;

/* Define the union U_G0_CSC_P4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp22                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_G0_CSC_P4;

/* Define the union U_GP0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mux1_sel              : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 2   ; /* [3..2]  */
        unsigned int    mux2_sel              : 2   ; /* [5..4]  */
        unsigned int    reserved_1            : 2   ; /* [7..6]  */
        unsigned int    aout_sel              : 2   ; /* [9..8]  */
        unsigned int    reserved_2            : 2   ; /* [11..10]  */
        unsigned int    bout_sel              : 2   ; /* [13..12]  */
        unsigned int    reserved_3            : 12  ; /* [25..14]  */
        unsigned int    ffc_sel               : 1   ; /* [26]  */
        unsigned int    reserved_4            : 3   ; /* [29..27]  */
        unsigned int    mute_en               : 1   ; /* [30]  */
        unsigned int    read_mode             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_CTRL;

/* Define the union U_GP0_UPD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    regup                 : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_UPD;

/* Define the union U_GP0_ORESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ow                    : 12  ; /* [11..0]  */
        unsigned int    oh                    : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ORESO;

/* Define the union U_GP0_IRESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    iw                    : 12  ; /* [11..0]  */
        unsigned int    ih                    : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_IRESO;

// Define the union U_GP0_HCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_GP0_HCOEFAD;
// Define the union U_GP0_VCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_GP0_VCOEFAD;
/* Define the union U_GP0_PARAUP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gp0_hcoef_upd         : 1   ; /* [0]  */
        unsigned int    gp0_vcoef_upd         : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_PARAUP;

/* Define the union U_GP0_GALPHA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    galpha                : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_GALPHA;

/* Define the union U_GP0_DFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    disp_xfpos            : 12  ; /* [11..0]  */
        unsigned int    disp_yfpos            : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_DFPOS;

/* Define the union U_GP0_DLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    disp_xlpos            : 12  ; /* [11..0]  */
        unsigned int    disp_ylpos            : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_DLPOS;

/* Define the union U_GP0_VFPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xfpos           : 12  ; /* [11..0]  */
        unsigned int    video_yfpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_VFPOS;

/* Define the union U_GP0_VLPOS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_xlpos           : 12  ; /* [11..0]  */
        unsigned int    video_ylpos           : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_VLPOS;

/* Define the union U_GP0_BK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbk_cr                : 10  ; /* [9..0]  */
        unsigned int    vbk_cb                : 10  ; /* [19..10]  */
        unsigned int    vbk_y                 : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_BK;

/* Define the union U_GP0_ALPHA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbk_alpha             : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ALPHA;

/* Define the union U_GP0_CSC_IDC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc0               : 11  ; /* [10..0]  */
        unsigned int    cscidc1               : 11  ; /* [21..11]  */
        unsigned int    csc_en                : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_CSC_IDC;

/* Define the union U_GP0_CSC_ODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscodc0               : 11  ; /* [10..0]  */
        unsigned int    cscodc1               : 11  ; /* [21..11]  */
        unsigned int    csc_sign_mode         : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_CSC_ODC;

/* Define the union U_GP0_CSC_IODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc2               : 11  ; /* [10..0]  */
        unsigned int    cscodc2               : 11  ; /* [21..11]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_CSC_IODC;

/* Define the union U_GP0_CSC_P0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp00                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp01                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_CSC_P0;

/* Define the union U_GP0_CSC_P1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp02                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp10                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_CSC_P1;

/* Define the union U_GP0_CSC_P2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp11                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp12                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_CSC_P2;

/* Define the union U_GP0_CSC_P3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp20                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp21                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_CSC_P3;

/* Define the union U_GP0_CSC_P4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp22                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_CSC_P4;

/* Define the union U_GP0_ZME_HSP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hratio                : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 3   ; /* [18..16]  */
        unsigned int    hfir_order            : 1   ; /* [19]  */
        unsigned int    reserved_1            : 3   ; /* [22..20]  */
        unsigned int    hafir_en              : 1   ; /* [23]  */
        unsigned int    hfir_en               : 1   ; /* [24]  */
        unsigned int    reserved_2            : 3   ; /* [27..25]  */
        unsigned int    hchmid_en             : 1   ; /* [28]  */
        unsigned int    hlmid_en              : 1   ; /* [29]  */
        unsigned int    hamid_en              : 1   ; /* [30]  */
        unsigned int    hsc_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_HSP;

/* Define the union U_GP0_ZME_HOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hor_coffset           : 16  ; /* [15..0]  */
        unsigned int    hor_loffset           : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_HOFFSET;

/* Define the union U_GP0_ZME_VSP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 23  ; /* [22..0]  */
        unsigned int    vafir_en              : 1   ; /* [23]  */
        unsigned int    vfir_en               : 1   ; /* [24]  */
        unsigned int    reserved_1            : 2   ; /* [26..25]  */
        unsigned int    vsc_luma_tap          : 1   ; /* [27]  */
        unsigned int    vchmid_en             : 1   ; /* [28]  */
        unsigned int    vlmid_en              : 1   ; /* [29]  */
        unsigned int    vamid_en              : 1   ; /* [30]  */
        unsigned int    vsc_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_VSP;

/* Define the union U_GP0_ZME_VSR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vratio                : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_VSR;

/* Define the union U_GP0_ZME_VOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbtm_offset           : 16  ; /* [15..0]  */
        unsigned int    vtp_offset            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_VOFFSET;

/* Define the union U_GP0_ZME_LTICTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lhpass_coef4          : 8   ; /* [7..0]  */
        unsigned int    lmixing_ratio         : 8   ; /* [15..8]  */
        unsigned int    lgain_ratio           : 12  ; /* [27..16]  */
        unsigned int    reserved_0            : 3   ; /* [30..28]  */
        unsigned int    lti_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_LTICTRL;

/* Define the union U_GP0_ZME_LHPASSCOEF */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lhpass_coef0          : 8   ; /* [7..0]  */
        unsigned int    lhpass_coef1          : 8   ; /* [15..8]  */
        unsigned int    lhpass_coef2          : 8   ; /* [23..16]  */
        unsigned int    lhpass_coef3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_LHPASSCOEF;

/* Define the union U_GP0_ZME_LTITHD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lover_swing           : 10  ; /* [9..0]  */
        unsigned int    lunder_swing          : 10  ; /* [19..10]  */
        unsigned int    lcoring_thd           : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_LTITHD;

/* Define the union U_GP0_ZME_LHFREQTHD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lhfreq_thd0           : 16  ; /* [15..0]  */
        unsigned int    lhfreq_thd1           : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_LHFREQTHD;

/* Define the union U_GP0_ZME_LGAINCOEF */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lgain_coef0           : 8   ; /* [7..0]  */
        unsigned int    lgain_coef1           : 8   ; /* [15..8]  */
        unsigned int    lgain_coef2           : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_LGAINCOEF;

/* Define the union U_GP0_ZME_CTICTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 8   ; /* [7..0]  */
        unsigned int    cmixing_ratio         : 8   ; /* [15..8]  */
        unsigned int    cgain_ratio           : 12  ; /* [27..16]  */
        unsigned int    reserved_1            : 3   ; /* [30..28]  */
        unsigned int    cti_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_CTICTRL;

/* Define the union U_GP0_ZME_CHPASSCOEF */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    chpass_coef0          : 8   ; /* [7..0]  */
        unsigned int    chpass_coef1          : 8   ; /* [15..8]  */
        unsigned int    chpass_coef2          : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_CHPASSCOEF;

/* Define the union U_GP0_ZME_CTITHD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cover_swing           : 10  ; /* [9..0]  */
        unsigned int    cunder_swing          : 10  ; /* [19..10]  */
        unsigned int    ccoring_thd           : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_GP0_ZME_CTITHD;

/* Define the union U_WBC_G0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    req_interval          : 10  ; /* [9..0]  */
        unsigned int    auto_stop_en          : 1   ; /* [10]  */
        unsigned int    reserved_0            : 15  ; /* [25..11]  */
        unsigned int    format_out            : 2   ; /* [27..26]  */
        unsigned int    reserved_1            : 3   ; /* [30..28]  */
        unsigned int    wbc_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_G0_CTRL;

/* Define the union U_WBC_G0_UPD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    regup                 : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_G0_UPD;

/* Define the union U_WBC_G0_CMP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cmp_lossy_en          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 3   ; /* [3..1]  */
        unsigned int    cmp_drr               : 4   ; /* [7..4]  */
        unsigned int    reserved_1            : 23  ; /* [30..8]  */
        unsigned int    cmp_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_G0_CMP;

// Define the union U_WBC_G0_AR_ADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int wbcaddr                 : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_G0_AR_ADDR;
// Define the union U_WBC_G0_GB_ADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int wbccaddr                : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_G0_GB_ADDR;
/* Define the union U_WBC_G0_STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wbcstride             : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_G0_STRIDE;

// Define the union U_WBC_G0_OFFSET
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int wbcoffset               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_G0_OFFSET;
/* Define the union U_WBC_G0_ORESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ow                    : 12  ; /* [11..0]  */
        unsigned int    oh                    : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_G0_ORESO;

/* Define the union U_WBC_G0_FCROP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wfcrop                : 12  ; /* [11..0]  */
        unsigned int    hfcrop                : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_G0_FCROP;

/* Define the union U_WBC_G0_LCROP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wlcrop                : 12  ; /* [11..0]  */
        unsigned int    hlcrop                : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_G0_LCROP;

/* Define the union U_WBC_GP0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    req_interval          : 10  ; /* [9..0]  */
        unsigned int    auto_stop_en          : 1   ; /* [10]  */
        unsigned int    reserved_0            : 1   ; /* [11]  */
        unsigned int    wbc_vtthd_mode        : 1   ; /* [12]  */
        unsigned int    reserved_1            : 5   ; /* [17..13]  */
        unsigned int    three_d_mode          : 2   ; /* [19..18]  */
        unsigned int    reserved_2            : 4   ; /* [23..20]  */
        unsigned int    format_out            : 4   ; /* [27..24]  */
        unsigned int    mode_out              : 2   ; /* [29..28]  */
        unsigned int    uv_order              : 1   ; /* [30]  */
        unsigned int    wbc_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_GP0_CTRL;

/* Define the union U_WBC_GP0_UPD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    regup                 : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_GP0_UPD;

// Define the union U_WBC_GP0_YADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int wbcaddr                 : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_GP0_YADDR;
// Define the union U_WBC_GP0_CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int wbccaddr                : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_GP0_CADDR;
/* Define the union U_WBC_GP0_STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wbclstride            : 16  ; /* [15..0]  */
        unsigned int    wbccstride            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_GP0_STRIDE;

/* Define the union U_WBC_GP0_ORESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ow                    : 12  ; /* [11..0]  */
        unsigned int    oh                    : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_GP0_ORESO;

/* Define the union U_WBC_GP0_FCROP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wfcrop                : 12  ; /* [11..0]  */
        unsigned int    hfcrop                : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_GP0_FCROP;

/* Define the union U_WBC_GP0_LCROP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wlcrop                : 12  ; /* [11..0]  */
        unsigned int    hlcrop                : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_GP0_LCROP;

/* Define the union U_WBC_GP0_DITHER_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [28..0]  */
        unsigned int    dither_md             : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_GP0_DITHER_CTRL;

/* Define the union U_WBC_GP0_DITHER_COEF0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef0          : 8   ; /* [7..0]  */
        unsigned int    dither_coef1          : 8   ; /* [15..8]  */
        unsigned int    dither_coef2          : 8   ; /* [23..16]  */
        unsigned int    dither_coef3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_GP0_DITHER_COEF0;

/* Define the union U_WBC_GP0_DITHER_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef4          : 8   ; /* [7..0]  */
        unsigned int    dither_coef5          : 8   ; /* [15..8]  */
        unsigned int    dither_coef6          : 8   ; /* [23..16]  */
        unsigned int    dither_coef7          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_GP0_DITHER_COEF1;

/* Define the union U_WBC_DHD0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    req_interval          : 10  ; /* [9..0]  */
        unsigned int    auto_stop_en          : 1   ; /* [10]  */
        unsigned int    histogam_en           : 1   ; /* [11]  */
        unsigned int    wbc_vtthd_mode        : 1   ; /* [12]  */
        unsigned int    reserved_0            : 5   ; /* [17..13]  */
        unsigned int    three_d_mode          : 2   ; /* [19..18]  */
        unsigned int    reserved_1            : 4   ; /* [23..20]  */
        unsigned int    format_out            : 4   ; /* [27..24]  */
        unsigned int    mode_out              : 2   ; /* [29..28]  */
        unsigned int    uv_order              : 1   ; /* [30]  */
        unsigned int    wbc_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_CTRL;

/* Define the union U_WBC_DHD0_UPD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    regup                 : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_UPD;

// Define the union U_WBC_DHD0_YADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int wbcaddr                 : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_DHD0_YADDR;
// Define the union U_WBC_DHD0_CADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int wbccaddr                : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_DHD0_CADDR;
/* Define the union U_WBC_DHD0_STRIDE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wbclstride            : 16  ; /* [15..0]  */
        unsigned int    wbccstride            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_STRIDE;

/* Define the union U_WBC_DHD0_ORESO */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ow                    : 12  ; /* [11..0]  */
        unsigned int    oh                    : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_ORESO;

/* Define the union U_WBC_DHD0_FCROP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wfcrop                : 12  ; /* [11..0]  */
        unsigned int    hfcrop                : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_FCROP;

/* Define the union U_WBC_DHD0_LCROP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wlcrop                : 12  ; /* [11..0]  */
        unsigned int    hlcrop                : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_LCROP;

/* Define the union U_WBC_DHD0_LOWDLYCTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wb_per_line_num       : 12  ; /* [11..0]  */
        unsigned int    partfns_line_num      : 12  ; /* [23..12]  */
        unsigned int    reserved_0            : 6   ; /* [29..24]  */
        unsigned int    lowdly_test           : 1   ; /* [30]  */
        unsigned int    lowdly_en             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_LOWDLYCTRL;

// Define the union U_WBC_DHD0_TUNLADDR
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int tunl_cell_addr          : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_DHD0_TUNLADDR;
/* Define the union U_WBC_DHD0_LOWDLYSTA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [30..0]  */
        unsigned int    part_finish           : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_LOWDLYSTA;

/* Define the union U_WBC_DHD0_PARAUP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wbc_hlcoef_upd        : 1   ; /* [0]  */
        unsigned int    wbc_hccoef_upd        : 1   ; /* [1]  */
        unsigned int    wbc_vlcoef_upd        : 1   ; /* [2]  */
        unsigned int    wbc_vccoef_upd        : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_PARAUP;

// Define the union U_WBC_DHD0_HLCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_DHD0_HLCOEFAD;
// Define the union U_WBC_DHD0_HCCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_DHD0_HCCOEFAD;
// Define the union U_WBC_DHD0_VLCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_DHD0_VLCOEFAD;
// Define the union U_WBC_DHD0_VCCOEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_DHD0_VCCOEFAD;
/* Define the union U_WBC_DHD0_HISTOGRAM0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM0;

/* Define the union U_WBC_DHD0_HISTOGRAM1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM1;

/* Define the union U_WBC_DHD0_HISTOGRAM2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM2;

/* Define the union U_WBC_DHD0_HISTOGRAM3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM3;

/* Define the union U_WBC_DHD0_HISTOGRAM4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM4;

/* Define the union U_WBC_DHD0_HISTOGRAM5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM5;

/* Define the union U_WBC_DHD0_HISTOGRAM6 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM6;

/* Define the union U_WBC_DHD0_HISTOGRAM7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM7;

/* Define the union U_WBC_DHD0_HISTOGRAM8 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM8;

/* Define the union U_WBC_DHD0_HISTOGRAM9 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM9;

/* Define the union U_WBC_DHD0_HISTOGRAM10 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM10;

/* Define the union U_WBC_DHD0_HISTOGRAM11 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM11;

/* Define the union U_WBC_DHD0_HISTOGRAM12 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM12;

/* Define the union U_WBC_DHD0_HISTOGRAM13 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM13;

/* Define the union U_WBC_DHD0_HISTOGRAM14 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM14;

/* Define the union U_WBC_DHD0_HISTOGRAM15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hgram_cnt0            : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HISTOGRAM15;

// Define the union U_WBC_DHD0_CHECKSUM_Y
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int Reserved_0              : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_DHD0_CHECKSUM_Y;
// Define the union U_WBC_DHD0_CHECKSUM_C
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int Reserved_0              : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_WBC_DHD0_CHECKSUM_C;
/* Define the union U_WBC_DHD0_DITHER_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [28..0]  */
        unsigned int    dither_md             : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_DITHER_CTRL;

/* Define the union U_WBC_DHD0_DITHER_COEF0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef0          : 8   ; /* [7..0]  */
        unsigned int    dither_coef1          : 8   ; /* [15..8]  */
        unsigned int    dither_coef2          : 8   ; /* [23..16]  */
        unsigned int    dither_coef3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_DITHER_COEF0;

/* Define the union U_WBC_DHD0_DITHER_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef4          : 8   ; /* [7..0]  */
        unsigned int    dither_coef5          : 8   ; /* [15..8]  */
        unsigned int    dither_coef6          : 8   ; /* [23..16]  */
        unsigned int    dither_coef7          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_DITHER_COEF1;

/* Define the union U_WBC_DHD0_HCDS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [28..0]  */
        unsigned int    hchfir_en             : 1   ; /* [29]  */
        unsigned int    hchmid_en             : 1   ; /* [30]  */
        unsigned int    hcds_en               : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HCDS;

/* Define the union U_WBC_DHD0_HCDS_COEF0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef0                 : 10  ; /* [9..0]  */
        unsigned int    coef1                 : 10  ; /* [19..10]  */
        unsigned int    coef2                 : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HCDS_COEF0;

/* Define the union U_WBC_DHD0_HCDS_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef3                 : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_HCDS_COEF1;

/* Define the union U_WBC_DHD0_ZME_HSP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hratio                : 24  ; /* [23..0]  */
        unsigned int    hfir_order            : 1   ; /* [24]  */
        unsigned int    hchfir_en             : 1   ; /* [25]  */
        unsigned int    hlfir_en              : 1   ; /* [26]  */
        unsigned int    non_lnr_en            : 1   ; /* [27]  */
        unsigned int    hchmid_en             : 1   ; /* [28]  */
        unsigned int    hlmid_en              : 1   ; /* [29]  */
        unsigned int    hchmsc_en             : 1   ; /* [30]  */
        unsigned int    hlmsc_en              : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_ZME_HSP;

/* Define the union U_WBC_DHD0_ZME_HLOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hor_loffset           : 28  ; /* [27..0]  */
        unsigned int    reserved_0            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_ZME_HLOFFSET;

/* Define the union U_WBC_DHD0_ZME_HCOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hor_coffset           : 28  ; /* [27..0]  */
        unsigned int    reserved_0            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_ZME_HCOFFSET;

/* Define the union U_WBC_DHD0_ZME_VSP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 19  ; /* [18..0]  */
        unsigned int    zme_in_fmt            : 2   ; /* [20..19]  */
        unsigned int    zme_out_fmt           : 2   ; /* [22..21]  */
        unsigned int    vchfir_en             : 1   ; /* [23]  */
        unsigned int    vlfir_en              : 1   ; /* [24]  */
        unsigned int    reserved_1            : 1   ; /* [25]  */
        unsigned int    vsc_chroma_tap        : 1   ; /* [26]  */
        unsigned int    reserved_2            : 1   ; /* [27]  */
        unsigned int    vchmid_en             : 1   ; /* [28]  */
        unsigned int    vlmid_en              : 1   ; /* [29]  */
        unsigned int    vchmsc_en             : 1   ; /* [30]  */
        unsigned int    vlmsc_en              : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_ZME_VSP;

/* Define the union U_WBC_DHD0_ZME_VSR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vratio                : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_ZME_VSR;

/* Define the union U_WBC_DHD0_ZME_VOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vchroma_offset        : 16  ; /* [15..0]  */
        unsigned int    vluma_offset          : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_ZME_VOFFSET;

/* Define the union U_WBC_DHD0_ZME_VBOFFSET */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vbchroma_offset       : 16  ; /* [15..0]  */
        unsigned int    vbluma_offset         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_ZME_VBOFFSET;

/* Define the union U_WBC_DHD0_CSCIDC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc0               : 9   ; /* [8..0]  */
        unsigned int    cscidc1               : 9   ; /* [17..9]  */
        unsigned int    cscidc2               : 9   ; /* [26..18]  */
        unsigned int    csc_en                : 1   ; /* [27]  */
        unsigned int    csc_mode              : 3   ; /* [30..28]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_CSCIDC;

/* Define the union U_WBC_DHD0_CSCODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscodc0               : 9   ; /* [8..0]  */
        unsigned int    cscodc1               : 9   ; /* [17..9]  */
        unsigned int    cscodc2               : 9   ; /* [26..18]  */
        unsigned int    reserved_0            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_CSCODC;

/* Define the union U_WBC_DHD0_CSCP0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp00                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp01                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_CSCP0;

/* Define the union U_WBC_DHD0_CSCP1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp02                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp10                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_CSCP1;

/* Define the union U_WBC_DHD0_CSCP2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp11                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp12                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_CSCP2;

/* Define the union U_WBC_DHD0_CSCP3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp20                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp21                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_CSCP3;

/* Define the union U_WBC_DHD0_CSCP4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp22                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_WBC_DHD0_CSCP4;

/* Define the union U_MIXV0_BKG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mixer_bkgcr           : 10  ; /* [9..0]  */
        unsigned int    mixer_bkgcb           : 10  ; /* [19..10]  */
        unsigned int    mixer_bkgy            : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_MIXV0_BKG;

/* Define the union U_MIXV0_MIX */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mixer_prio0           : 4   ; /* [3..0]  */
        unsigned int    mixer_prio1           : 4   ; /* [7..4]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_MIXV0_MIX;

/* Define the union U_MIXG0_BKG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mixer_bkgcr           : 10  ; /* [9..0]  */
        unsigned int    mixer_bkgcb           : 10  ; /* [19..10]  */
        unsigned int    mixer_bkgy            : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_MIXG0_BKG;

/* Define the union U_MIXG0_BKALPHA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mixer_alpha           : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_MIXG0_BKALPHA;

/* Define the union U_MIXG0_MIX */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mixer_prio0           : 4   ; /* [3..0]  */
        unsigned int    mixer_prio1           : 4   ; /* [7..4]  */
        unsigned int    mixer_prio2           : 4   ; /* [11..8]  */
        unsigned int    mixer_prio3           : 4   ; /* [15..12]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_MIXG0_MIX;

/* Define the union U_CBM_BKG1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cbm_bkgcr1            : 10  ; /* [9..0]  */
        unsigned int    cbm_bkgcb1            : 10  ; /* [19..10]  */
        unsigned int    cbm_bkgy1             : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CBM_BKG1;

/* Define the union U_CBM_MIX1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mixer_prio0           : 4   ; /* [3..0]  */
        unsigned int    mixer_prio1           : 4   ; /* [7..4]  */
        unsigned int    mixer_prio2           : 4   ; /* [11..8]  */
        unsigned int    mixer_prio3           : 4   ; /* [15..12]  */
        unsigned int    mixer_prio4           : 4   ; /* [19..16]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CBM_MIX1;

/* Define the union U_CBM_BKG2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cbm_bkgcr2            : 10  ; /* [9..0]  */
        unsigned int    cbm_bkgcb2            : 10  ; /* [19..10]  */
        unsigned int    cbm_bkgy2             : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CBM_BKG2;

/* Define the union U_CBM_MIX2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mixer_prio0           : 4   ; /* [3..0]  */
        unsigned int    mixer_prio1           : 4   ; /* [7..4]  */
        unsigned int    mixer_prio2           : 4   ; /* [11..8]  */
        unsigned int    mixer_prio3           : 4   ; /* [15..12]  */
        unsigned int    mixer_prio4           : 4   ; /* [19..16]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CBM_MIX2;

/* Define the union U_CBM_ATTR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sur_attr0             : 1   ; /* [0]  */
        unsigned int    sur_attr1             : 1   ; /* [1]  */
        unsigned int    sur_attr2             : 1   ; /* [2]  */
        unsigned int    sur_attr3             : 1   ; /* [3]  */
        unsigned int    sur_attr4             : 1   ; /* [4]  */
        unsigned int    sur_attr5             : 1   ; /* [5]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_CBM_ATTR;

/* Define the union U_MIXDSD_BKG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mixer_bkgcr           : 10  ; /* [9..0]  */
        unsigned int    mixer_bkgcb           : 10  ; /* [19..10]  */
        unsigned int    mixer_bkgy            : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_MIXDSD_BKG;

/* Define the union U_MIXDSD_MIX */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mixer_prio0           : 4   ; /* [3..0]  */
        unsigned int    mixer_prio1           : 4   ; /* [7..4]  */
        unsigned int    mixer_prio2           : 4   ; /* [11..8]  */
        unsigned int    mixer_prio3           : 4   ; /* [15..12]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_MIXDSD_MIX;

/* Define the union U_DHD0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    regup                 : 1   ; /* [0]  */
        unsigned int    disp_mode             : 3   ; /* [3..1]  */
        unsigned int    iop                   : 1   ; /* [4]  */
        unsigned int    reserved_0            : 7   ; /* [11..5]  */
        unsigned int    gmm_mode              : 1   ; /* [12]  */
        unsigned int    gmm_en                : 1   ; /* [13]  */
        unsigned int    hdmi_mode             : 1   ; /* [14]  */
        unsigned int    reserved_1            : 3   ; /* [17..15]  */
        unsigned int    sin_en                : 1   ; /* [18]  */
        unsigned int    trigger_en            : 1   ; /* [19]  */
        unsigned int    fpga_lmt_width        : 7   ; /* [26..20]  */
        unsigned int    fpga_lmt_en           : 1   ; /* [27]  */
        unsigned int    p2i_en                : 1   ; /* [28]  */
        unsigned int    cbar_sel              : 1   ; /* [29]  */
        unsigned int    cbar_en               : 1   ; /* [30]  */
        unsigned int    intf_en               : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CTRL;

/* Define the union U_DHD0_VSYNC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vact                  : 12  ; /* [11..0]  */
        unsigned int    vbb                   : 8   ; /* [19..12]  */
        unsigned int    vfb                   : 8   ; /* [27..20]  */
        unsigned int    reserved_0            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_VSYNC;

/* Define the union U_DHD0_HSYNC1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hact                  : 16  ; /* [15..0]  */
        unsigned int    hbb                   : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSYNC1;

/* Define the union U_DHD0_HSYNC2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hfb                   : 16  ; /* [15..0]  */
        unsigned int    hmid                  : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSYNC2;

/* Define the union U_DHD0_VPLUS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    bvact                 : 12  ; /* [11..0]  */
        unsigned int    bvbb                  : 8   ; /* [19..12]  */
        unsigned int    bvfb                  : 8   ; /* [27..20]  */
        unsigned int    reserved_0            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_VPLUS;

/* Define the union U_DHD0_PWR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hpw                   : 16  ; /* [15..0]  */
        unsigned int    vpw                   : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_PWR;

/* Define the union U_DHD0_VTTHD3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vtmgthd3              : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 2   ; /* [14..13]  */
        unsigned int    thd3_mode             : 1   ; /* [15]  */
        unsigned int    vtmgthd4              : 13  ; /* [28..16]  */
        unsigned int    reserved_1            : 2   ; /* [30..29]  */
        unsigned int    thd4_mode             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_VTTHD3;

/* Define the union U_DHD0_VTTHD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vtmgthd1              : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 2   ; /* [14..13]  */
        unsigned int    thd1_mode             : 1   ; /* [15]  */
        unsigned int    vtmgthd2              : 13  ; /* [28..16]  */
        unsigned int    reserved_1            : 2   ; /* [30..29]  */
        unsigned int    thd2_mode             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_VTTHD;

/* Define the union U_DHD0_SYNC_INV */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lcd_dv_inv            : 1   ; /* [0]  */
        unsigned int    lcd_hs_inv            : 1   ; /* [1]  */
        unsigned int    lcd_vs_inv            : 1   ; /* [2]  */
        unsigned int    reserved_0            : 1   ; /* [3]  */
        unsigned int    vga_dv_inv            : 1   ; /* [4]  */
        unsigned int    vga_hs_inv            : 1   ; /* [5]  */
        unsigned int    vga_vs_inv            : 1   ; /* [6]  */
        unsigned int    reserved_1            : 1   ; /* [7]  */
        unsigned int    hdmi_dv_inv           : 1   ; /* [8]  */
        unsigned int    hdmi_hs_inv           : 1   ; /* [9]  */
        unsigned int    hdmi_vs_inv           : 1   ; /* [10]  */
        unsigned int    hdmi_f_inv            : 1   ; /* [11]  */
        unsigned int    date_dv_inv           : 1   ; /* [12]  */
        unsigned int    date_hs_inv           : 1   ; /* [13]  */
        unsigned int    date_vs_inv           : 1   ; /* [14]  */
        unsigned int    date_f_inv            : 1   ; /* [15]  */
        unsigned int    reserved_2            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_SYNC_INV;

/* Define the union U_DHD0_DATA_SEL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    date_data_sel         : 1   ; /* [0]  */
        unsigned int    vga_data_sel          : 1   ; /* [1]  */
        unsigned int    lcd_data_sel          : 1   ; /* [2]  */
        unsigned int    hdmi_data_sel         : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_DATA_SEL;

/* Define the union U_DHD0_ABUFTHD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd_buf_thd           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 21  ; /* [31..11]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_ABUFTHD;

/* Define the union U_DHD0_CSC_IDC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc0               : 11  ; /* [10..0]  */
        unsigned int    cscidc1               : 11  ; /* [21..11]  */
        unsigned int    csc_en                : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CSC_IDC;

/* Define the union U_DHD0_CSC_ODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscodc0               : 11  ; /* [10..0]  */
        unsigned int    cscodc1               : 11  ; /* [21..11]  */
        unsigned int    csc_sign_mode         : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CSC_ODC;

/* Define the union U_DHD0_CSC_IODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc2               : 11  ; /* [10..0]  */
        unsigned int    cscodc2               : 11  ; /* [21..11]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CSC_IODC;

/* Define the union U_DHD0_CSC_P0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp00                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp01                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CSC_P0;

/* Define the union U_DHD0_CSC_P1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp02                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp10                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CSC_P1;

/* Define the union U_DHD0_CSC_P2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp11                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp12                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CSC_P2;

/* Define the union U_DHD0_CSC_P3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp20                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp21                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CSC_P3;

/* Define the union U_DHD0_CSC_P4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp22                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CSC_P4;

/* Define the union U_DHD0_DITHER0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [28..0]  */
        unsigned int    dither_md             : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_DITHER0_CTRL;

/* Define the union U_DHD0_DITHER0_COEF0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef0          : 8   ; /* [7..0]  */
        unsigned int    dither_coef1          : 8   ; /* [15..8]  */
        unsigned int    dither_coef2          : 8   ; /* [23..16]  */
        unsigned int    dither_coef3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_DITHER0_COEF0;

/* Define the union U_DHD0_DITHER0_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef4          : 8   ; /* [7..0]  */
        unsigned int    dither_coef5          : 8   ; /* [15..8]  */
        unsigned int    dither_coef6          : 8   ; /* [23..16]  */
        unsigned int    dither_coef7          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_DITHER0_COEF1;

/* Define the union U_DHD0_DITHER1_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [28..0]  */
        unsigned int    dither_md             : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_DITHER1_CTRL;

/* Define the union U_DHD0_DITHER1_COEF0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef0          : 8   ; /* [7..0]  */
        unsigned int    dither_coef1          : 8   ; /* [15..8]  */
        unsigned int    dither_coef2          : 8   ; /* [23..16]  */
        unsigned int    dither_coef3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_DITHER1_COEF0;

/* Define the union U_DHD0_DITHER1_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef4          : 8   ; /* [7..0]  */
        unsigned int    dither_coef5          : 8   ; /* [15..8]  */
        unsigned int    dither_coef6          : 8   ; /* [23..16]  */
        unsigned int    dither_coef7          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_DITHER1_COEF1;

/* Define the union U_DHD0_CLIP0_L */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_cl0              : 10  ; /* [9..0]  */
        unsigned int    clip_cl1              : 10  ; /* [19..10]  */
        unsigned int    clip_cl2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP0_L;

/* Define the union U_DHD0_CLIP0_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_ch0              : 10  ; /* [9..0]  */
        unsigned int    clip_ch1              : 10  ; /* [19..10]  */
        unsigned int    clip_ch2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP0_H;

/* Define the union U_DHD0_CLIP1_L */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_cl0              : 10  ; /* [9..0]  */
        unsigned int    clip_cl1              : 10  ; /* [19..10]  */
        unsigned int    clip_cl2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP1_L;

/* Define the union U_DHD0_CLIP1_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_ch0              : 10  ; /* [9..0]  */
        unsigned int    clip_ch1              : 10  ; /* [19..10]  */
        unsigned int    clip_ch2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP1_H;

/* Define the union U_DHD0_CLIP2_L */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_cl0              : 10  ; /* [9..0]  */
        unsigned int    clip_cl1              : 10  ; /* [19..10]  */
        unsigned int    clip_cl2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP2_L;

/* Define the union U_DHD0_CLIP2_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_ch0              : 10  ; /* [9..0]  */
        unsigned int    clip_ch1              : 10  ; /* [19..10]  */
        unsigned int    clip_ch2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP2_H;

/* Define the union U_DHD0_CLIP3_L */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_cl0              : 10  ; /* [9..0]  */
        unsigned int    clip_cl1              : 10  ; /* [19..10]  */
        unsigned int    clip_cl2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP3_L;

/* Define the union U_DHD0_CLIP3_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_ch0              : 10  ; /* [9..0]  */
        unsigned int    clip_ch1              : 10  ; /* [19..10]  */
        unsigned int    clip_ch2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP3_H;

/* Define the union U_DHD0_CLIP4_L */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_cl0              : 10  ; /* [9..0]  */
        unsigned int    clip_cl1              : 10  ; /* [19..10]  */
        unsigned int    clip_cl2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP4_L;

/* Define the union U_DHD0_CLIP4_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_ch0              : 10  ; /* [9..0]  */
        unsigned int    clip_ch1              : 10  ; /* [19..10]  */
        unsigned int    clip_ch2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CLIP4_H;

/* Define the union U_DHD0_PARATHD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    para_thd              : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 25  ; /* [30..6]  */
        unsigned int    dfs_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_PARATHD;

/* Define the union U_DHD0_START_POS */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    start_pos             : 8   ; /* [7..0]  */
        unsigned int    timing_start_pos      : 8   ; /* [15..8]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_START_POS;

/* Define the union U_DHD0_CCDOIMGMOD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    img_mode              : 7   ; /* [6..0]  */
        unsigned int    img_right             : 1   ; /* [7]  */
        unsigned int    img_id                : 2   ; /* [9..8]  */
        unsigned int    reserved_0            : 1   ; /* [10]  */
        unsigned int    ccd_en                : 1   ; /* [11]  */
        unsigned int    reserved_1            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CCDOIMGMOD;

/* Define the union U_DHD0_CCDOPOSMSKH */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p32_en                : 1   ; /* [0]  */
        unsigned int    p33_en                : 1   ; /* [1]  */
        unsigned int    p34_en                : 1   ; /* [2]  */
        unsigned int    p35_en                : 1   ; /* [3]  */
        unsigned int    p36_en                : 1   ; /* [4]  */
        unsigned int    p37_en                : 1   ; /* [5]  */
        unsigned int    p38_en                : 1   ; /* [6]  */
        unsigned int    p39_en                : 1   ; /* [7]  */
        unsigned int    p40_en                : 1   ; /* [8]  */
        unsigned int    p41_en                : 1   ; /* [9]  */
        unsigned int    p42_en                : 1   ; /* [10]  */
        unsigned int    p43_en                : 1   ; /* [11]  */
        unsigned int    p44_en                : 1   ; /* [12]  */
        unsigned int    p45_en                : 1   ; /* [13]  */
        unsigned int    p46_en                : 1   ; /* [14]  */
        unsigned int    p47_en                : 1   ; /* [15]  */
        unsigned int    p48_en                : 1   ; /* [16]  */
        unsigned int    p49_en                : 1   ; /* [17]  */
        unsigned int    p50_en                : 1   ; /* [18]  */
        unsigned int    p51_en                : 1   ; /* [19]  */
        unsigned int    p52_en                : 1   ; /* [20]  */
        unsigned int    p53_en                : 1   ; /* [21]  */
        unsigned int    p54_en                : 1   ; /* [22]  */
        unsigned int    p55_en                : 1   ; /* [23]  */
        unsigned int    p56_en                : 1   ; /* [24]  */
        unsigned int    p57_en                : 1   ; /* [25]  */
        unsigned int    p58_en                : 1   ; /* [26]  */
        unsigned int    p59_en                : 1   ; /* [27]  */
        unsigned int    p60_en                : 1   ; /* [28]  */
        unsigned int    p61_en                : 1   ; /* [29]  */
        unsigned int    p62_en                : 1   ; /* [30]  */
        unsigned int    p63_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CCDOPOSMSKH;

/* Define the union U_DHD0_CCDOPOSMSKL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    p0_en                 : 1   ; /* [0]  */
        unsigned int    p1_en                 : 1   ; /* [1]  */
        unsigned int    p2_en                 : 1   ; /* [2]  */
        unsigned int    p3_en                 : 1   ; /* [3]  */
        unsigned int    p4_en                 : 1   ; /* [4]  */
        unsigned int    p5_en                 : 1   ; /* [5]  */
        unsigned int    p6_en                 : 1   ; /* [6]  */
        unsigned int    p7_en                 : 1   ; /* [7]  */
        unsigned int    p8_en                 : 1   ; /* [8]  */
        unsigned int    p9_en                 : 1   ; /* [9]  */
        unsigned int    p10_en                : 1   ; /* [10]  */
        unsigned int    p11_en                : 1   ; /* [11]  */
        unsigned int    p12_en                : 1   ; /* [12]  */
        unsigned int    p13_en                : 1   ; /* [13]  */
        unsigned int    p14_en                : 1   ; /* [14]  */
        unsigned int    p15_en                : 1   ; /* [15]  */
        unsigned int    p16_en                : 1   ; /* [16]  */
        unsigned int    p17_en                : 1   ; /* [17]  */
        unsigned int    p18_en                : 1   ; /* [18]  */
        unsigned int    p19_en                : 1   ; /* [19]  */
        unsigned int    p20_en                : 1   ; /* [20]  */
        unsigned int    p21_en                : 1   ; /* [21]  */
        unsigned int    p22_en                : 1   ; /* [22]  */
        unsigned int    p23_en                : 1   ; /* [23]  */
        unsigned int    p24_en                : 1   ; /* [24]  */
        unsigned int    p25_en                : 1   ; /* [25]  */
        unsigned int    p26_en                : 1   ; /* [26]  */
        unsigned int    p27_en                : 1   ; /* [27]  */
        unsigned int    p28_en                : 1   ; /* [28]  */
        unsigned int    p29_en                : 1   ; /* [29]  */
        unsigned int    p30_en                : 1   ; /* [30]  */
        unsigned int    p31_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_CCDOPOSMSKL;

/* Define the union U_DHD0_LOCKCFG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    measure_en            : 1   ; /* [0]  */
        unsigned int    lock_cnt_en           : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_LOCKCFG;

/* Define the union U_DHD0_LOCK_STATE1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cap_frm_cnt           : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_LOCK_STATE1;

/* Define the union U_DHD0_LOCK_STATE2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vsync_cap_vdp_init    : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_LOCK_STATE2;

/* Define the union U_DHD0_LOCK_STATE3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vsync_cap_vdp_cnt     : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_LOCK_STATE3;

// Define the union U_DHD0_GMM_COEFAD
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int coef_addr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_DHD0_GMM_COEFAD;
/* Define the union U_DHD0_PARAUP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dhd0_gmm_upd          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_PARAUP;

/* Define the union U_DHD0_STATE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vback_blank           : 1   ; /* [0]  */
        unsigned int    vblank                : 1   ; /* [1]  */
        unsigned int    bottom_field          : 1   ; /* [2]  */
        unsigned int    vcnt                  : 13  ; /* [15..3]  */
        unsigned int    count_int             : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_STATE;

/* Define the union U_DHD0_DEBUG */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pix_h                 : 16  ; /* [15..0]  */
        unsigned int    pix_v                 : 12  ; /* [27..16]  */
        unsigned int    pix_src               : 3   ; /* [30..28]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_DEBUG;

/* Define the union U_DHD0_DEBUG_STATE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pixel_value           : 30  ; /* [29..0]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_DEBUG_STATE;

/* Define the union U_DHD0_HSPCFG0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf0_tmp0          : 8   ; /* [7..0]  */
        unsigned int    hsp_hf0_tmp1          : 8   ; /* [15..8]  */
        unsigned int    hsp_hf0_tmp2          : 8   ; /* [23..16]  */
        unsigned int    hsp_hf0_tmp3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG0;

/* Define the union U_DHD0_HSPCFG1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf0_coring        : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 23  ; /* [30..8]  */
        unsigned int    hsp_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG1;

/* Define the union U_DHD0_HSPCFG5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf0_gainpos       : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    hsp_hf0_gainneg       : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG5;

/* Define the union U_DHD0_HSPCFG6 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf0_overth        : 8   ; /* [7..0]  */
        unsigned int    hsp_hf0_underth       : 8   ; /* [15..8]  */
        unsigned int    hsp_hf0_mixratio      : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 4   ; /* [27..24]  */
        unsigned int    hsp_hf0_winsize       : 3   ; /* [30..28]  */
        unsigned int    hsp_hf0_adpshoot_en   : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG6;

/* Define the union U_DHD0_HSPCFG7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf1_tmp0          : 8   ; /* [7..0]  */
        unsigned int    hsp_hf1_tmp1          : 8   ; /* [15..8]  */
        unsigned int    hsp_hf1_tmp2          : 8   ; /* [23..16]  */
        unsigned int    hsp_hf1_tmp3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG7;

/* Define the union U_DHD0_HSPCFG8 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf1_coring        : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG8;

/* Define the union U_DHD0_HSPCFG12 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf1_gainpos       : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    hsp_hf1_gainneg       : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG12;

/* Define the union U_DHD0_HSPCFG13 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf1_overth        : 8   ; /* [7..0]  */
        unsigned int    hsp_hf1_underth       : 8   ; /* [15..8]  */
        unsigned int    hsp_hf1_mixratio      : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 4   ; /* [27..24]  */
        unsigned int    hsp_hf1_winsize       : 3   ; /* [30..28]  */
        unsigned int    hsp_hf1_adpshoot_en   : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG13;

/* Define the union U_DHD0_HSPCFG14 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_cdti_gain         : 8   ; /* [7..0]  */
        unsigned int    hsp_ldti_gain         : 8   ; /* [15..8]  */
        unsigned int    hsp_lti_ratio         : 8   ; /* [23..16]  */
        unsigned int    hsp_hf_shootdiv       : 3   ; /* [26..24]  */
        unsigned int    reserved_0            : 1   ; /* [27]  */
        unsigned int    hsp_ctih_en           : 1   ; /* [28]  */
        unsigned int    hsp_ltih_en           : 1   ; /* [29]  */
        unsigned int    hsp_h1_en             : 1   ; /* [30]  */
        unsigned int    hsp_h0_en             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG14;

/* Define the union U_DHD0_HSPCFG15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_glb_underth       : 9   ; /* [8..0]  */
        unsigned int    reserved_0            : 1   ; /* [9]  */
        unsigned int    hsp_glb_overth        : 9   ; /* [18..10]  */
        unsigned int    reserved_1            : 1   ; /* [19]  */
        unsigned int    hsp_peak_ratio        : 8   ; /* [27..20]  */
        unsigned int    reserved_2            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DHD0_HSPCFG15;

/* Define the union U_INTF_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [28..0]  */
        unsigned int    yc_mode               : 1   ; /* [29]  */
        unsigned int    hdmi_420_mode         : 1   ; /* [30]  */
        unsigned int    hdmi_mode             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CTRL;

/* Define the union U_INTF_UPD */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    regup                 : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_UPD;

/* Define the union U_INTF_SYNC_INV */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dv_inv                : 1   ; /* [0]  */
        unsigned int    hs_inv                : 1   ; /* [1]  */
        unsigned int    vs_inv                : 1   ; /* [2]  */
        unsigned int    f_inv                 : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_SYNC_INV;

/* Define the union U_INTF_CLIP0_L */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_cl0              : 10  ; /* [9..0]  */
        unsigned int    clip_cl1              : 10  ; /* [19..10]  */
        unsigned int    clip_cl2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CLIP0_L;

/* Define the union U_INTF_CLIP0_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_ch0              : 10  ; /* [9..0]  */
        unsigned int    clip_ch1              : 10  ; /* [19..10]  */
        unsigned int    clip_ch2              : 10  ; /* [29..20]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CLIP0_H;

/* Define the union U_INTF_CSC_IDC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc0               : 11  ; /* [10..0]  */
        unsigned int    cscidc1               : 11  ; /* [21..11]  */
        unsigned int    csc_en                : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CSC_IDC;

/* Define the union U_INTF_CSC_ODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscodc0               : 11  ; /* [10..0]  */
        unsigned int    cscodc1               : 11  ; /* [21..11]  */
        unsigned int    csc_sign_mode         : 1   ; /* [22]  */
        unsigned int    reserved_0            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CSC_ODC;

/* Define the union U_INTF_CSC_IODC */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscidc2               : 11  ; /* [10..0]  */
        unsigned int    cscodc2               : 11  ; /* [21..11]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CSC_IODC;

/* Define the union U_INTF_CSC_P0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp00                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp01                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CSC_P0;

/* Define the union U_INTF_CSC_P1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp02                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp10                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CSC_P1;

/* Define the union U_INTF_CSC_P2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp11                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp12                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CSC_P2;

/* Define the union U_INTF_CSC_P3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp20                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 1   ; /* [15]  */
        unsigned int    cscp21                : 15  ; /* [30..16]  */
        unsigned int    reserved_1            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CSC_P3;

/* Define the union U_INTF_CSC_P4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cscp22                : 15  ; /* [14..0]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CSC_P4;

/* Define the union U_INTF_HSPCFG0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf0_tmp0          : 8   ; /* [7..0]  */
        unsigned int    hsp_hf0_tmp1          : 8   ; /* [15..8]  */
        unsigned int    hsp_hf0_tmp2          : 8   ; /* [23..16]  */
        unsigned int    hsp_hf0_tmp3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG0;

/* Define the union U_INTF_HSPCFG1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf0_coring        : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 23  ; /* [30..8]  */
        unsigned int    hsp_en                : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG1;

/* Define the union U_INTF_HSPCFG5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf0_gainpos       : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    hsp_hf0_gainneg       : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG5;

/* Define the union U_INTF_HSPCFG6 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf0_overth        : 8   ; /* [7..0]  */
        unsigned int    hsp_hf0_underth       : 8   ; /* [15..8]  */
        unsigned int    hsp_hf0_mixratio      : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 4   ; /* [27..24]  */
        unsigned int    hsp_hf0_winsize       : 3   ; /* [30..28]  */
        unsigned int    hsp_hf0_adpshoot_en   : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG6;

/* Define the union U_INTF_HSPCFG7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf1_tmp0          : 8   ; /* [7..0]  */
        unsigned int    hsp_hf1_tmp1          : 8   ; /* [15..8]  */
        unsigned int    hsp_hf1_tmp2          : 8   ; /* [23..16]  */
        unsigned int    hsp_hf1_tmp3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG7;

/* Define the union U_INTF_HSPCFG8 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf1_coring        : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG8;

/* Define the union U_INTF_HSPCFG12 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf1_gainpos       : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    hsp_hf1_gainneg       : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG12;

/* Define the union U_INTF_HSPCFG13 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_hf1_overth        : 8   ; /* [7..0]  */
        unsigned int    hsp_hf1_underth       : 8   ; /* [15..8]  */
        unsigned int    hsp_hf1_mixratio      : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 4   ; /* [27..24]  */
        unsigned int    hsp_hf1_winsize       : 3   ; /* [30..28]  */
        unsigned int    hsp_hf1_adpshoot_en   : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG13;

/* Define the union U_INTF_HSPCFG14 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_cdti_gain         : 8   ; /* [7..0]  */
        unsigned int    hsp_ldti_gain         : 8   ; /* [15..8]  */
        unsigned int    hsp_lti_ratio         : 8   ; /* [23..16]  */
        unsigned int    hsp_hf_shootdiv       : 3   ; /* [26..24]  */
        unsigned int    reserved_0            : 1   ; /* [27]  */
        unsigned int    hsp_ctih_en           : 1   ; /* [28]  */
        unsigned int    hsp_ltih_en           : 1   ; /* [29]  */
        unsigned int    hsp_h1_en             : 1   ; /* [30]  */
        unsigned int    hsp_h0_en             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG14;

/* Define the union U_INTF_HSPCFG15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsp_glb_underth       : 9   ; /* [8..0]  */
        unsigned int    reserved_0            : 1   ; /* [9]  */
        unsigned int    hsp_glb_overth        : 9   ; /* [18..10]  */
        unsigned int    reserved_1            : 1   ; /* [19]  */
        unsigned int    hsp_peak_ratio        : 8   ; /* [27..20]  */
        unsigned int    reserved_2            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_HSPCFG15;

/* Define the union U_INTF_DITHER0_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [28..0]  */
        unsigned int    dither_md             : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_DITHER0_CTRL;

/* Define the union U_INTF_DITHER0_COEF0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef0          : 8   ; /* [7..0]  */
        unsigned int    dither_coef1          : 8   ; /* [15..8]  */
        unsigned int    dither_coef2          : 8   ; /* [23..16]  */
        unsigned int    dither_coef3          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_DITHER0_COEF0;

/* Define the union U_INTF_DITHER0_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dither_coef4          : 8   ; /* [7..0]  */
        unsigned int    dither_coef5          : 8   ; /* [15..8]  */
        unsigned int    dither_coef6          : 8   ; /* [23..16]  */
        unsigned int    dither_coef7          : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_DITHER0_COEF1;

/* Define the union U_INTF_CHKSUM_Y_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    check_sum             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CHKSUM_Y_H;

/* Define the union U_INTF_CHKSUM_Y_L */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    check_sum             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CHKSUM_Y_L;

/* Define the union U_INTF_CHKSUM_U_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    check_sum             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CHKSUM_U_H;

/* Define the union U_INTF_CHKSUM_U_L */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    check_sum             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CHKSUM_U_L;

/* Define the union U_INTF_CHKSUM_V_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    check_sum             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CHKSUM_V_H;

/* Define the union U_INTF_CHKSUM_V_L */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    check_sum             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_INTF_CHKSUM_V_L;

// Define the union U_HDATE_VERSION
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int hdate_version           : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_HDATE_VERSION;
/* Define the union U_HDATE_EN */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hd_en                 : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_EN;

/* Define the union U_HDATE_POLA_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hsync_in_pola         : 1   ; /* [0]  */
        unsigned int    vsync_in_pola         : 1   ; /* [1]  */
        unsigned int    fid_in_pola           : 1   ; /* [2]  */
        unsigned int    hsync_out_pola        : 1   ; /* [3]  */
        unsigned int    vsync_out_pola        : 1   ; /* [4]  */
        unsigned int    fid_out_pola          : 1   ; /* [5]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_POLA_CTRL;

/* Define the union U_HDATE_VIDEO_FORMAT */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_ft              : 4   ; /* [3..0]  */
        unsigned int    sync_add_ctrl         : 3   ; /* [6..4]  */
        unsigned int    video_out_ctrl        : 2   ; /* [8..7]  */
        unsigned int    csc_ctrl              : 3   ; /* [11..9]  */
        unsigned int    csc_round_disable     : 1   ; /* [12]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_VIDEO_FORMAT;

/* Define the union U_HDATE_STATE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    line_len              : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 3   ; /* [15..13]  */
        unsigned int    frame_len             : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 1   ; /* [27]  */
        unsigned int    mv_en_pin             : 1   ; /* [28]  */
        unsigned int    reserved_2            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_STATE;

/* Define the union U_HDATE_OUT_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vsync_sel             : 2   ; /* [1..0]  */
        unsigned int    hsync_sel             : 2   ; /* [3..2]  */
        unsigned int    video3_sel            : 2   ; /* [5..4]  */
        unsigned int    video2_sel            : 2   ; /* [7..6]  */
        unsigned int    video1_sel            : 2   ; /* [9..8]  */
        unsigned int    src_ctrl              : 2   ; /* [11..10]  */
        unsigned int    sync_lpf_en           : 1   ; /* [12]  */
        unsigned int    sd_sel                : 1   ; /* [13]  */
        unsigned int    src_round_disable     : 1   ; /* [14]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_OUT_CTRL;

/* Define the union U_HDATE_SRC_13_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap1_1           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap1_3           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF1;

/* Define the union U_HDATE_SRC_13_COEF2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap2_1           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap2_3           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF2;

/* Define the union U_HDATE_SRC_13_COEF3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap3_1           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap3_3           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF3;

/* Define the union U_HDATE_SRC_13_COEF4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap4_1           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap4_3           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF4;

/* Define the union U_HDATE_SRC_13_COEF5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap5_1           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap5_3           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF5;

/* Define the union U_HDATE_SRC_13_COEF6 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap6_1           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap6_3           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF6;

/* Define the union U_HDATE_SRC_13_COEF7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap7_1           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap7_3           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF7;

/* Define the union U_HDATE_SRC_13_COEF8 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap8_1           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap8_3           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF8;

/* Define the union U_HDATE_SRC_13_COEF9 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap9_1           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap9_3           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF9;

/* Define the union U_HDATE_SRC_13_COEF10 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap10_1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap10_3          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF10;

/* Define the union U_HDATE_SRC_13_COEF11 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap11_1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap11_3          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF11;

/* Define the union U_HDATE_SRC_13_COEF12 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap12_1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap12_3          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF12;

/* Define the union U_HDATE_SRC_13_COEF13 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap13_1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap13_3          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF13;

/* Define the union U_HDATE_SRC_24_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap1_2           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap1_4           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF1;

/* Define the union U_HDATE_SRC_24_COEF2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap2_2           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap2_4           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF2;

/* Define the union U_HDATE_SRC_24_COEF3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap3_2           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap3_4           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF3;

/* Define the union U_HDATE_SRC_24_COEF4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap4_2           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap4_4           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF4;

/* Define the union U_HDATE_SRC_24_COEF5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap5_2           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap5_4           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF5;

/* Define the union U_HDATE_SRC_24_COEF6 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap6_2           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap6_4           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF6;

/* Define the union U_HDATE_SRC_24_COEF7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap7_2           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap7_4           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF7;

/* Define the union U_HDATE_SRC_24_COEF8 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap8_2           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap8_4           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF8;

/* Define the union U_HDATE_SRC_24_COEF9 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap9_2           : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap9_4           : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF9;

/* Define the union U_HDATE_SRC_24_COEF10 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap10_2          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap10_4          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF10;

/* Define the union U_HDATE_SRC_24_COEF11 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap11_2          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap11_4          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF11;

/* Define the union U_HDATE_SRC_24_COEF12 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap12_2          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap12_4          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF12;

/* Define the union U_HDATE_SRC_24_COEF13 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap13_2          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap13_4          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF13;

/* Define the union U_HDATE_CSC_COEF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    csc_coef_r_y          : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    csc_coef_r_cb         : 12  ; /* [27..16]  */
        unsigned int    reserved_1            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_CSC_COEF1;

/* Define the union U_HDATE_CSC_COEF2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    csc_coef_r_cr         : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    csc_coef_g_y          : 12  ; /* [27..16]  */
        unsigned int    reserved_1            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_CSC_COEF2;

/* Define the union U_HDATE_CSC_COEF3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    csc_coef_g_cb         : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    csc_coef_g_cr         : 12  ; /* [27..16]  */
        unsigned int    reserved_1            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_CSC_COEF3;

/* Define the union U_HDATE_CSC_COEF4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    csc_coef_b_y          : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 4   ; /* [15..12]  */
        unsigned int    csc_coef_b_cb         : 12  ; /* [27..16]  */
        unsigned int    reserved_1            : 4   ; /* [31..28]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_CSC_COEF4;

/* Define the union U_HDATE_CSC_COEF5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    csc_coef_b_cr         : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_CSC_COEF5;

/* Define the union U_HDATE_TEST */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    test_data             : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_TEST;

/* Define the union U_HDATE_VBI_CTRL */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cgmsb_add_en          : 1   ; /* [0]  */
        unsigned int    cgmsa_add_en          : 1   ; /* [1]  */
        unsigned int    mv_en                 : 1   ; /* [2]  */
        unsigned int    vbi_lpf_en            : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_VBI_CTRL;

/* Define the union U_HDATE_CGMSA_DATA */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cgmsa_data            : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_CGMSA_DATA;

/* Define the union U_HDATE_CGMSB_H */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hdate_cgmsb_h         : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_CGMSB_H;

// Define the union U_HDATE_CGMSB_DATA1
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int cgmsb_data1             : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_HDATE_CGMSB_DATA1;
// Define the union U_HDATE_CGMSB_DATA2
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int cgmsb_data2             : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_HDATE_CGMSB_DATA2;
// Define the union U_HDATE_CGMSB_DATA3
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int cgmsb_data3             : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_HDATE_CGMSB_DATA3;
// Define the union U_HDATE_CGMSB_DATA4
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int cgmsb_data4             : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_HDATE_CGMSB_DATA4;
/* Define the union U_HDATE_DACDET1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vdac_det_high         : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    det_line              : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_DACDET1;

/* Define the union U_HDATE_DACDET2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    det_pixel_sta         : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    det_pixel_wid         : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 4   ; /* [30..27]  */
        unsigned int    vdac_det_en           : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_DACDET2;

/* Define the union U_HDATE_SRC_13_COEF14 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap14_1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap14_3          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF14;

/* Define the union U_HDATE_SRC_13_COEF15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap15_1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap15_3          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF15;

/* Define the union U_HDATE_SRC_13_COEF16 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap16_1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap16_3          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF16;

/* Define the union U_HDATE_SRC_13_COEF17 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap17_1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap17_3          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF17;

/* Define the union U_HDATE_SRC_13_COEF18 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap18_1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap18_3          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_13_COEF18;

/* Define the union U_HDATE_SRC_24_COEF14 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap14_2          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap14_4          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF14;

/* Define the union U_HDATE_SRC_24_COEF15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap15_2          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap15_4          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF15;

/* Define the union U_HDATE_SRC_24_COEF16 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap16_2          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap16_4          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF16;

/* Define the union U_HDATE_SRC_24_COEF17 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap17_2          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap17_4          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF17;

/* Define the union U_HDATE_SRC_24_COEF18 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_tap18_2          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    coef_tap18_4          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_SRC_24_COEF18;

/* Define the union U_HDATE_CLIP */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clip_thdl             : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 5   ; /* [14..10]  */
        unsigned int    clip_disable          : 1   ; /* [15]  */
        unsigned int    clip_fb               : 8   ; /* [23..16]  */
        unsigned int    clip_bb               : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_HDATE_CLIP;

/* Define the union U_DATE_COEFF0 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tt_seq                : 1   ; /* [0]  */
        unsigned int    chgain_en             : 1   ; /* [1]  */
        unsigned int    sylp_en               : 1   ; /* [2]  */
        unsigned int    chlp_en               : 1   ; /* [3]  */
        unsigned int    oversam2_en           : 1   ; /* [4]  */
        unsigned int    lunt_en               : 1   ; /* [5]  */
        unsigned int    oversam_en            : 2   ; /* [7..6]  */
        unsigned int    reserved_0            : 1   ; /* [8]  */
        unsigned int    luma_dl               : 4   ; /* [12..9]  */
        unsigned int    agc_amp_sel           : 1   ; /* [13]  */
        unsigned int    length_sel            : 1   ; /* [14]  */
        unsigned int    sync_mode_scart       : 1   ; /* [15]  */
        unsigned int    sync_mode_sel         : 2   ; /* [17..16]  */
        unsigned int    style_sel             : 4   ; /* [21..18]  */
        unsigned int    fm_sel                : 1   ; /* [22]  */
        unsigned int    vbi_lpf_en            : 1   ; /* [23]  */
        unsigned int    rgb_en                : 1   ; /* [24]  */
        unsigned int    scanline              : 1   ; /* [25]  */
        unsigned int    pbpr_lpf_en           : 1   ; /* [26]  */
        unsigned int    pal_half_en           : 1   ; /* [27]  */
        unsigned int    reserved_1            : 1   ; /* [28]  */
        unsigned int    dis_ire               : 1   ; /* [29]  */
        unsigned int    clpf_sel              : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF0;

/* Define the union U_DATE_COEFF1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dac_test              : 10  ; /* [9..0]  */
        unsigned int    date_test_mode        : 2   ; /* [11..10]  */
        unsigned int    date_test_en          : 1   ; /* [12]  */
        unsigned int    amp_outside           : 10  ; /* [22..13]  */
        unsigned int    c_limit_en            : 1   ; /* [23]  */
        unsigned int    cc_seq                : 1   ; /* [24]  */
        unsigned int    cgms_seq              : 1   ; /* [25]  */
        unsigned int    vps_seq               : 1   ; /* [26]  */
        unsigned int    wss_seq               : 1   ; /* [27]  */
        unsigned int    cvbs_limit_en         : 1   ; /* [28]  */
        unsigned int    c_gain                : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF1;

// Define the union U_DATE_COEFF2
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int    coef02                : 32   ; // [31..0]    
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_DATE_COEFF2;
/* Define the union U_DATE_COEFF3 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef03                : 26  ; /* [25..0]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF3;

/* Define the union U_DATE_COEFF4 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef04                : 30  ; /* [29..0]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF4;

/* Define the union U_DATE_COEFF5 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef05                : 29  ; /* [28..0]  */
        unsigned int    reserved_0            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF5;

/* Define the union U_DATE_COEFF6 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef06_1              : 23  ; /* [22..0]  */
        unsigned int    reserved_0            : 8   ; /* [30..23]  */
        unsigned int    coef06_0              : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF6;

/* Define the union U_DATE_COEFF7 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tt07_enf2             : 1   ; /* [0]  */
        unsigned int    tt08_enf2             : 1   ; /* [1]  */
        unsigned int    tt09_enf2             : 1   ; /* [2]  */
        unsigned int    tt10_enf2             : 1   ; /* [3]  */
        unsigned int    tt11_enf2             : 1   ; /* [4]  */
        unsigned int    tt12_enf2             : 1   ; /* [5]  */
        unsigned int    tt13_enf2             : 1   ; /* [6]  */
        unsigned int    tt14_enf2             : 1   ; /* [7]  */
        unsigned int    tt15_enf2             : 1   ; /* [8]  */
        unsigned int    tt16_enf2             : 1   ; /* [9]  */
        unsigned int    tt17_enf2             : 1   ; /* [10]  */
        unsigned int    tt18_enf2             : 1   ; /* [11]  */
        unsigned int    tt19_enf2             : 1   ; /* [12]  */
        unsigned int    tt20_enf2             : 1   ; /* [13]  */
        unsigned int    tt21_enf2             : 1   ; /* [14]  */
        unsigned int    tt22_enf2             : 1   ; /* [15]  */
        unsigned int    tt07_enf1             : 1   ; /* [16]  */
        unsigned int    tt08_enf1             : 1   ; /* [17]  */
        unsigned int    tt09_enf1             : 1   ; /* [18]  */
        unsigned int    tt10_enf1             : 1   ; /* [19]  */
        unsigned int    tt11_enf1             : 1   ; /* [20]  */
        unsigned int    tt12_enf1             : 1   ; /* [21]  */
        unsigned int    tt13_enf1             : 1   ; /* [22]  */
        unsigned int    tt14_enf1             : 1   ; /* [23]  */
        unsigned int    tt15_enf1             : 1   ; /* [24]  */
        unsigned int    tt16_enf1             : 1   ; /* [25]  */
        unsigned int    tt17_enf1             : 1   ; /* [26]  */
        unsigned int    tt18_enf1             : 1   ; /* [27]  */
        unsigned int    tt19_enf1             : 1   ; /* [28]  */
        unsigned int    tt20_enf1             : 1   ; /* [29]  */
        unsigned int    tt21_enf1             : 1   ; /* [30]  */
        unsigned int    tt22_enf1             : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF7;

// Define the union U_DATE_COEFF8
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int tt_staddr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_DATE_COEFF8;
// Define the union U_DATE_COEFF9
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int tt_edaddr               : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_DATE_COEFF9;
/* Define the union U_DATE_COEFF10 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tt_pktoff             : 8   ; /* [7..0]  */
        unsigned int    tt_mode               : 2   ; /* [9..8]  */
        unsigned int    tt_highest            : 1   ; /* [10]  */
        unsigned int    full_page             : 1   ; /* [11]  */
        unsigned int    nabts_100ire          : 1   ; /* [12]  */
        unsigned int    reserved_0            : 18  ; /* [30..13]  */
        unsigned int    tt_ready              : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF10;

/* Define the union U_DATE_COEFF11 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    date_clf2             : 10  ; /* [9..0]  */
        unsigned int    date_clf1             : 10  ; /* [19..10]  */
        unsigned int    cc_enf2               : 1   ; /* [20]  */
        unsigned int    cc_enf1               : 1   ; /* [21]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF11;

/* Define the union U_DATE_COEFF12 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cc_f2data             : 16  ; /* [15..0]  */
        unsigned int    cc_f1data             : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF12;

/* Define the union U_DATE_COEFF13 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cg_f1data             : 20  ; /* [19..0]  */
        unsigned int    cg_enf2               : 1   ; /* [20]  */
        unsigned int    cg_enf1               : 1   ; /* [21]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF13;

/* Define the union U_DATE_COEFF14 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cg_f2data             : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF14;

/* Define the union U_DATE_COEFF15 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wss_data              : 14  ; /* [13..0]  */
        unsigned int    wss_en                : 1   ; /* [14]  */
        unsigned int    reserved_0            : 17  ; /* [31..15]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF15;

/* Define the union U_DATE_COEFF16 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vps_data              : 24  ; /* [23..0]  */
        unsigned int    vps_en                : 1   ; /* [24]  */
        unsigned int    reserved_0            : 7   ; /* [31..25]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF16;

// Define the union U_DATE_COEFF17
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int vps_data                : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_DATE_COEFF17;
// Define the union U_DATE_COEFF18
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int vps_data                : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_DATE_COEFF18;
/* Define the union U_DATE_COEFF19 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vps_data              : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF19;

/* Define the union U_DATE_COEFF20 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tt05_enf2             : 1   ; /* [0]  */
        unsigned int    tt06_enf2             : 1   ; /* [1]  */
        unsigned int    tt06_enf1             : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF20;

/* Define the union U_DATE_COEFF21 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dac0_in_sel           : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 1   ; /* [3]  */
        unsigned int    dac1_in_sel           : 3   ; /* [6..4]  */
        unsigned int    reserved_1            : 1   ; /* [7]  */
        unsigned int    dac2_in_sel           : 3   ; /* [10..8]  */
        unsigned int    reserved_2            : 1   ; /* [11]  */
        unsigned int    dac3_in_sel           : 3   ; /* [14..12]  */
        unsigned int    reserved_3            : 1   ; /* [15]  */
        unsigned int    dac4_in_sel           : 3   ; /* [18..16]  */
        unsigned int    reserved_4            : 1   ; /* [19]  */
        unsigned int    dac5_in_sel           : 3   ; /* [22..20]  */
        unsigned int    reserved_5            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF21;

/* Define the union U_DATE_COEFF22 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    video_phase_delta     : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 21  ; /* [31..11]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF22;

/* Define the union U_DATE_COEFF23 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dac0_out_dly          : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 1   ; /* [3]  */
        unsigned int    dac1_out_dly          : 3   ; /* [6..4]  */
        unsigned int    reserved_1            : 1   ; /* [7]  */
        unsigned int    dac2_out_dly          : 3   ; /* [10..8]  */
        unsigned int    reserved_2            : 1   ; /* [11]  */
        unsigned int    dac3_out_dly          : 3   ; /* [14..12]  */
        unsigned int    reserved_3            : 1   ; /* [15]  */
        unsigned int    dac4_out_dly          : 3   ; /* [18..16]  */
        unsigned int    reserved_4            : 1   ; /* [19]  */
        unsigned int    dac5_out_dly          : 3   ; /* [22..20]  */
        unsigned int    reserved_5            : 9   ; /* [31..23]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF23;

// Define the union U_DATE_COEFF24
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int burst_start             : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_DATE_COEFF24;
/* Define the union U_DATE_COEFF25 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_n_coef              : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 3   ; /* [15..13]  */
        unsigned int    x_n_1_coef            : 13  ; /* [28..16]  */
        unsigned int    reserved_1            : 3   ; /* [31..29]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF25;

/* Define the union U_DATE_COEFF26 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    x_n_1_coef            : 13  ; /* [12..0]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF26;

/* Define the union U_DATE_COEFF27 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    y_n_coef              : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    y_n_1_coef            : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF27;

/* Define the union U_DATE_COEFF28 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pixel_begin1          : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    pixel_begin2          : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF28;

/* Define the union U_DATE_COEFF29 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pixel_end             : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 21  ; /* [31..11]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF29;

/* Define the union U_DATE_COEFF30 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    g_secam               : 7   ; /* [6..0]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF30;

/* Define the union U_DATE_ISRMASK */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tt_mask               : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_ISRMASK;

/* Define the union U_DATE_ISRSTATE */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tt_status             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_ISRSTATE;

/* Define the union U_DATE_ISR */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tt_int                : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_ISR;

// Define the union U_DATE_VERSION
typedef union
{
    // Define the struct bits 
    struct
    {
        unsigned int Reserved_0              : 32  ; // [31..0] 
    } bits;
 
    // Define an unsigned member
        unsigned int    u32;
 
} U_DATE_VERSION;
/* Define the union U_DATE_COEFF37 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_y1_coeff0         : 8   ; /* [7..0]  */
        unsigned int    fir_y1_coeff1         : 8   ; /* [15..8]  */
        unsigned int    fir_y1_coeff2         : 8   ; /* [23..16]  */
        unsigned int    fir_y1_coeff3         : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF37;

/* Define the union U_DATE_COEFF38 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_y2_coeff0         : 16  ; /* [15..0]  */
        unsigned int    fir_y2_coeff1         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF38;

/* Define the union U_DATE_COEFF39 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_y2_coeff2         : 16  ; /* [15..0]  */
        unsigned int    fir_y2_coeff3         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF39;

/* Define the union U_DATE_COEFF40 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_c1_coeff0         : 8   ; /* [7..0]  */
        unsigned int    fir_c1_coeff1         : 8   ; /* [15..8]  */
        unsigned int    fir_c1_coeff2         : 8   ; /* [23..16]  */
        unsigned int    fir_c1_coeff3         : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF40;

/* Define the union U_DATE_COEFF41 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_c2_coeff0         : 16  ; /* [15..0]  */
        unsigned int    fir_c2_coeff1         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF41;

/* Define the union U_DATE_COEFF42 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_c2_coeff2         : 16  ; /* [15..0]  */
        unsigned int    fir_c2_coeff3         : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF42;

/* Define the union U_DATE_DACDET1 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    vdac_det_high         : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    det_line              : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_DACDET1;

/* Define the union U_DATE_DACDET2 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    det_pixel_sta         : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    det_pixel_wid         : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 4   ; /* [30..27]  */
        unsigned int    vdac_det_en           : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_DACDET2;

/* Define the union U_DATE_COEFF50 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ovs_coeff0            : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    ovs_coeff1            : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF50;

/* Define the union U_DATE_COEFF51 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ovs_coeff0            : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    ovs_coeff1            : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF51;

/* Define the union U_DATE_COEFF52 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ovs_coeff0            : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    ovs_coeff1            : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF52;

/* Define the union U_DATE_COEFF53 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ovs_coeff0            : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    ovs_coeff1            : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF53;

/* Define the union U_DATE_COEFF54 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ovs_coeff0            : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    ovs_coeff1            : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF54;

/* Define the union U_DATE_COEFF55 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ovs_coeff0            : 11  ; /* [10..0]  */
        unsigned int    reserved_0            : 5   ; /* [15..11]  */
        unsigned int    ovs_coeff1            : 11  ; /* [26..16]  */
        unsigned int    reserved_1            : 5   ; /* [31..27]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF55;

/* Define the union U_DATE_COEFF56 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    oversam2_round_en     : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF56;

/* Define the union U_DATE_COEFF57 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    v_gain                : 8   ; /* [7..0]  */
        unsigned int    u_gain                : 8   ; /* [15..8]  */
        unsigned int    ycvbs_gain            : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 7   ; /* [30..24]  */
        unsigned int    cvbs_gain_en          : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF57;

/* Define the union U_DATE_COEFF58 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pr_gain               : 8   ; /* [7..0]  */
        unsigned int    pb_gain               : 8   ; /* [15..8]  */
        unsigned int    ycomp_gain            : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 7   ; /* [30..24]  */
        unsigned int    comp_gain_en          : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF58;

/* Define the union U_DATE_COEFF59 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ynotch_clip_fullrange : 1   ; /* [0]  */
        unsigned int    clpf_clip_fullrange   : 1   ; /* [1]  */
        unsigned int    reserved_0            : 2   ; /* [3..2]  */
        unsigned int    y_os_clip_fullrange   : 1   ; /* [4]  */
        unsigned int    reserved_1            : 3   ; /* [7..5]  */
        unsigned int    u_os_clip_fullrange   : 1   ; /* [8]  */
        unsigned int    v_os_clip_fullrange   : 1   ; /* [9]  */
        unsigned int    reserved_2            : 2   ; /* [11..10]  */
        unsigned int    cb_os_clip_fullrange  : 1   ; /* [12]  */
        unsigned int    cr_os_clip_fullrange  : 1   ; /* [13]  */
        unsigned int    reserved_3            : 2   ; /* [15..14]  */
        unsigned int    cb_gain_polar         : 1   ; /* [16]  */
        unsigned int    reserved_4            : 15  ; /* [31..17]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF59;

/* Define the union U_DATE_COEFF60 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    line_960h_en          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF60;

/* Define the union U_DATE_COEFF61 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    burst_start_ovrd      : 1   ; /* [0]  */
        unsigned int    burst_dura_ovrd       : 1   ; /* [1]  */
        unsigned int    cb_bound_ovrd         : 1   ; /* [2]  */
        unsigned int    pal_half_ovrd         : 1   ; /* [3]  */
        unsigned int    rgb_acrive_ovrd       : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF61;

// Define the union U_DATE_COEFF62
typedef union
{
    // Define the struct bits
    struct
    {
        unsigned int    burst_dura_coeff      : 32  ; // [31..0]
    } bits;

    // Define an unsigned member
    unsigned int    u32;

} U_DATE_COEFF62;

// Define the union U_DATE_COEFF63
typedef union
{
    // Define the struct bits
    struct
    {
        unsigned int    cb_bound_coeff        : 32  ; // [31..0]
    } bits;

    // Define an unsigned member
    unsigned int    u32;

} U_DATE_COEFF63;

// Define the union U_DATE_COEFF64
typedef union
{
    // Define the struct bits
    struct
    {
        unsigned int    pal_half_coeff        : 32  ; // [31..0]
    } bits;

    // Define an unsigned member
    unsigned int    u32;

} U_DATE_COEFF64;

// Define the union U_DATE_COEFF65
typedef union
{
    // Define the struct bits
    struct
    {
        unsigned int    rgb_active_coeff      : 32  ; // [31..0]
    } bits;

    // Define an unsigned member
    unsigned int    u32;

} U_DATE_COEFF65;

/* Define the union U_DATE_COEFF66 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    htotal_ovrd           : 1   ; /* [0]  */
        unsigned int    wid_sync_ovrd         : 1   ; /* [1]  */
        unsigned int    wid_hfb_ovrd          : 1   ; /* [2]  */
        unsigned int    wid_act_ovrd          : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF66;

/* Define the union U_DATE_COEFF67 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    htotal_sw             : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF67;

/* Define the union U_DATE_COEFF68 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wid_sync_sw           : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF68;

/* Define the union U_DATE_COEFF69 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wid_hfb_sw            : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF69;

/* Define the union U_DATE_COEFF70 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wid_act_sw            : 12  ; /* [11..0]  */
        unsigned int    reserved_0            : 20  ; /* [31..12]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF70;

/* Define the union U_DATE_COEFF71 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    phase_shift_ovrd      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF71;

// Define the union U_DATE_COEFF72
typedef union
{
    // Define the struct bits
    struct
    {
        unsigned int    phase_shift_coeff    : 32  ; // [31..0]
    } bits;

    // Define an unsigned member
    unsigned int    u32;

} U_DATE_COEFF72;

/* Define the union U_DATE_COEFF73 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_notch_ovrd       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF73;

/* Define the union U_DATE_COEFF74 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_notch_1          : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef_notch_2          : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF74;

/* Define the union U_DATE_COEFF75 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_notch_3          : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef_notch_4          : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF75;

/* Define the union U_DATE_COEFF76 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_notch_5          : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef_notch_6          : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF76;

/* Define the union U_DATE_COEFF77 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_notch_7          : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef_notch_8          : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF77;

/* Define the union U_DATE_COEFF78 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_notch_9          : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef_notch_10         : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF78;

/* Define the union U_DATE_COEFF79 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_notch_11         : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 6   ; /* [15..10]  */
        unsigned int    coef_notch_12         : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF79;

/* Define the union U_DATE_COEFF80 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_chra_lpf_ovrd    : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF80;

/* Define the union U_DATE_COEFF81 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_chra_lpf_1       : 9   ; /* [8..0]  */
        unsigned int    reserved_0            : 7   ; /* [15..9]  */
        unsigned int    coef_chra_lpf_2       : 9   ; /* [24..16]  */
        unsigned int    reserved_1            : 7   ; /* [31..25]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF81;

/* Define the union U_DATE_COEFF82 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_chra_lpf_3       : 9   ; /* [8..0]  */
        unsigned int    reserved_0            : 7   ; /* [15..9]  */
        unsigned int    coef_chra_lpf_4       : 9   ; /* [24..16]  */
        unsigned int    reserved_1            : 7   ; /* [31..25]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF82;

/* Define the union U_DATE_COEFF83 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_chra_lpf_5       : 9   ; /* [8..0]  */
        unsigned int    reserved_0            : 7   ; /* [15..9]  */
        unsigned int    coef_chra_lpf_6       : 9   ; /* [24..16]  */
        unsigned int    reserved_1            : 7   ; /* [31..25]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF83;

/* Define the union U_DATE_COEFF84 */
typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    coef_chra_lpf_7       : 9   ; /* [8..0]  */
        unsigned int    reserved_0            : 23  ; /* [31..9]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} U_DATE_COEFF84;

//==============================================================================
/* Define the global struct */
typedef struct
{
    U_VOCTRL             VOCTRL;                          /* 0x0000 */
    U_VOINTSTA           VOINTSTA;                        /* 0x0004 */
    U_VOMSKINTSTA        VOMSKINTSTA;                     /* 0x0008 */
    U_VOINTMSK           VOINTMSK;                        /* 0x000C */
    U_VDPVERSION1        VDPVERSION1;                     /* 0x0010 */
    U_VDPVERSION2        VDPVERSION2;                     /* 0x0014 */
    unsigned int         Reserved_0[2];                   /* 0x0018~0x001C */
    U_VODEBUG            VODEBUG;                         /* 0x0020 */
    U_VOINTSTA1          VOINTSTA1;                       /* 0x0024 */
    U_VOMSKINTSTA1       VOMSKINTSTA1;                    /* 0x0028 */
    U_VOINTMSK1          VOINTMSK1;                       /* 0x002C */
    U_VOAXISEL           VOAXISEL;                        /* 0x0030 */
    U_VOAXICTRL          VOAXICTRL;                       /* 0x0034 */
    U_VOWBCARB0          VOWBCARB0;                       /* 0x0038 */
    U_VOWBCARB1          VOWBCARB1;                       /* 0x003C */
    U_VOUFSTA            VOUFSTA;                         /* 0x0040 */
    U_VOUFCLR            VOUFCLR;                         /* 0x0044 */
    unsigned int         Reserved_1[2];                   /* 0x0048~0x004C */
    U_VOINTPROC_TIM      VOINTPROC_TIM;                   /* 0x0050 */
    unsigned int         Reserved_2[43];                  /* 0x0054~0x00FC */
    U_VO_MUX             VO_MUX;                          /* 0x0100 */
    U_VO_MUX_DAC         VO_MUX_DAC;                      /* 0x0104 */
    U_VO_MUX_TESTSYNC    VO_MUX_TESTSYNC;                 /* 0x0108 */
    U_VO_MUX_TESTDATA    VO_MUX_TESTDATA;                 /* 0x010C */
    unsigned int         Reserved_3[4];                   /* 0x0110~0x011C */
    U_VO_DAC_CTRL        VO_DAC_CTRL;                     /* 0x0120 */
    unsigned int         Reserved_4[3];                   /* 0x0124~0x012C */
    U_VO_DAC_C_CTRL      VO_DAC_C_CTRL;                   /* 0x0130 */
    U_VO_DAC_R_CTRL      VO_DAC_R_CTRL;                   /* 0x0134 */
    U_VO_DAC_G_CTRL      VO_DAC_G_CTRL;                   /* 0x0138 */
    U_VO_DAC_B_CTRL      VO_DAC_B_CTRL;                   /* 0x013C */
    U_VO_DAC_STAT0       VO_DAC_STAT0;                    /* 0x0140 */
    U_VO_DAC_STAT1       VO_DAC_STAT1;                    /* 0x0144 */
    unsigned int         Reserved_5[110];                 /* 0x0148~0x02FC */
    U_WBC_DHD_LOCATE     WBC_DHD_LOCATE;                  /* 0x0300 */
    U_WBC_OFL_EN         WBC_OFL_EN;                      /* 0x0304 */
    U_VHD_CORRESP        VHD_CORRESP;                     /* 0x0308 */
    U_GDC_CORRESP        GDC_CORRESP;                     /* 0x030C */
    U_WBC_CORRESP        WBC_CORRESP;                     /* 0x0310 */
    unsigned int         Reserved_6[59];                  /* 0x0314~0x03FC */
    U_COEF_DATA          COEF_DATA;                       /* 0x0400 */
    unsigned int         Reserved_7[3];                   /* 0x0404~0x040C */
    U_V0_PARARD          V0_PARARD;                       /* 0x0410 */
    U_V1_PARARD          V1_PARARD;                       /* 0x0414 */
    unsigned int         Reserved_8;                      /* 0x0418 */
    U_V3_PARARD          V3_PARARD;                       /* 0x041C */
    unsigned int         Reserved_9[8];                   /* 0x0420~0x043C */
    U_VP0_PARARD         VP0_PARARD;                      /* 0x0440 */
    unsigned int         Reserved_10[19];                 /* 0x0444~0x048C */
    U_GP0_PARARD         GP0_PARARD;                      /* 0x0490 */
    U_GP1_PARARD         GP1_PARARD;                      /* 0x0494 */
    unsigned int         Reserved_11[10];                 /* 0x0498~0x04BC */
    U_WBCDHD_PARARD      WBCDHD_PARARD;                   /* 0x04C0 */
    unsigned int         Reserved_12[11];                 /* 0x04C4~0x04DC */
    U_DHD0_PARARD        DHD0_PARARD;                     /* 0x04F0 */
    U_DHD1_PARARD        DHD1_PARARD;                     /* 0x04F4 */
    unsigned int         Reserved_13[194];                /* 0x04F8~0x07FC */
    U_V0_CTRL            V0_CTRL;                         /* 0x0800 */
    U_V0_UPD             V0_UPD;                          /* 0x0804 */
    unsigned int         Reserved_14[6];                  /* 0x0808~0x081C */
    U_V0_PRERD           V0_PRERD;                        /* 0x0820 */
    unsigned int         Reserved_15;                     /* 0x0824 */
    U_V0_IRESO           V0_IRESO;                        /* 0x0828 */
    U_V0_ORESO           V0_ORESO;                        /* 0x082C */
    unsigned int         Reserved_16[2];                  /* 0x0830~0x0834 */
    U_V0_CBMPARA         V0_CBMPARA;                      /* 0x0838 */
    unsigned int         Reserved_17;                     /* 0x083C */
    U_V0_PARAUP          V0_PARAUP;                       /* 0x0840 */
    U_V0_CPOS            V0_CPOS;                         /* 0x0844 */
    U_V0_DRAWMODE        V0_DRAWMODE;                     /* 0x0848 */
    unsigned int         Reserved_18;                     /* 0x084C */
    U_V0_HLCOEFAD        V0_HLCOEFAD;                     /* 0x0850 */
    U_V0_HCCOEFAD        V0_HCCOEFAD;                     /* 0x0854 */
    U_V0_VLCOEFAD        V0_VLCOEFAD;                     /* 0x0858 */
    U_V0_VCCOEFAD        V0_VCCOEFAD;                     /* 0x085C */
    unsigned int         Reserved_19[8];                  /* 0x0860~0x087C */
    U_V0_CSC_IDC         V0_CSC_IDC;                      /* 0x0880 */
    U_V0_CSC_ODC         V0_CSC_ODC;                      /* 0x0884 */
    U_V0_CSC_IODC        V0_CSC_IODC;                     /* 0x0888 */
    U_V0_CSC_P0          V0_CSC_P0;                       /* 0x088C */
    U_V0_CSC_P1          V0_CSC_P1;                       /* 0x0890 */
    U_V0_CSC_P2          V0_CSC_P2;                       /* 0x0894 */
    U_V0_CSC_P3          V0_CSC_P3;                       /* 0x0898 */
    U_V0_CSC_P4          V0_CSC_P4;                       /* 0x089C */
    unsigned int         Reserved_20[8];                  /* 0x08A0~0x08BC */
    U_V0_HSP             V0_HSP;                          /* 0x08C0 */
    U_V0_HLOFFSET        V0_HLOFFSET;                     /* 0x08C4 */
    U_V0_HCOFFSET        V0_HCOFFSET;                     /* 0x08C8 */
    unsigned int         Reserved_21[3];                  /* 0x08CC~0x08D4 */
    U_V0_VSP             V0_VSP;                          /* 0x08D8 */
    U_V0_VSR             V0_VSR;                          /* 0x08DC */
    U_V0_VOFFSET         V0_VOFFSET;                      /* 0x08E0 */
    U_V0_VBOFFSET        V0_VBOFFSET;                     /* 0x08E4 */
    unsigned int         Reserved_22[6];                  /* 0x08E8~0x08FC */
    U_V0_DFPOS           V0_DFPOS;                        /* 0x0900 */
    U_V0_DLPOS           V0_DLPOS;                        /* 0x0904 */
    U_V0_VFPOS           V0_VFPOS;                        /* 0x0908 */
    U_V0_VLPOS           V0_VLPOS;                        /* 0x090C */
    U_V0_BK              V0_BK;                           /* 0x0910 */
    U_V0_ALPHA           V0_ALPHA;                        /* 0x0914 */
    U_V0_RIMWIDTH        V0_RIMWIDTH;                     /* 0x0918 */
    U_V0_RIMCOL0         V0_RIMCOL0;                      /* 0x091C */
    U_V0_RIMCOL1         V0_RIMCOL1;                      /* 0x0920 */
    unsigned int         Reserved_23[23];                 /* 0x0924~0x097C */
    U_V0_IFIRCOEF01      V0_IFIRCOEF01;                   /* 0x0980 */
    U_V0_IFIRCOEF23      V0_IFIRCOEF23;                   /* 0x0984 */
    U_V0_IFIRCOEF45      V0_IFIRCOEF45;                   /* 0x0988 */
    U_V0_IFIRCOEF67      V0_IFIRCOEF67;                   /* 0x098C */
    unsigned int         Reserved_24[28];                 /* 0x0990~0x09FC */
    U_V0_P0RESO          V0_P0RESO;                       /* 0x0A00 */
    U_V0_P0LADDR         V0_P0LADDR;                      /* 0x0A04 */
    U_V0_P0CADDR         V0_P0CADDR;                      /* 0x0A08 */
    U_V0_P0STRIDE        V0_P0STRIDE;                     /* 0x0A0C */
    U_V0_P0VFPOS         V0_P0VFPOS;                      /* 0x0A10 */
    U_V0_P0VLPOS         V0_P0VLPOS;                      /* 0x0A14 */
    U_V0_P0CTRL          V0_P0CTRL;                       /* 0x0A18 */
    unsigned int         Reserved_25;                     /* 0x0A1C */
    U_V0_P1RESO          V0_P1RESO;                       /* 0x0A20 */
    U_V0_P1LADDR         V0_P1LADDR;                      /* 0x0A24 */
    U_V0_P1CADDR         V0_P1CADDR;                      /* 0x0A28 */
    U_V0_P1STRIDE        V0_P1STRIDE;                     /* 0x0A2C */
    U_V0_P1VFPOS         V0_P1VFPOS;                      /* 0x0A30 */
    U_V0_P1VLPOS         V0_P1VLPOS;                      /* 0x0A34 */
    U_V0_P1CTRL          V0_P1CTRL;                       /* 0x0A38 */ 
    unsigned int         Reserved_26;                     /* 0x0A3C */
    U_V0_P2RESO          V0_P2RESO;                       /* 0x0A40 */
    U_V0_P2LADDR         V0_P2LADDR;                      /* 0x0A44 */
    U_V0_P2CADDR         V0_P2CADDR;                      /* 0x0A48 */
    U_V0_P2STRIDE        V0_P2STRIDE;                     /* 0x0A4C */
    U_V0_P2VFPOS         V0_P2VFPOS;                      /* 0x0A50 */
    U_V0_P2VLPOS         V0_P2VLPOS;                      /* 0x0A54 */
    U_V0_P2CTRL          V0_P2CTRL;                       /* 0x0A58 */
    unsigned int         Reserved_27;                     /* 0x0A5C */
    U_V0_P3RESO          V0_P3RESO;                       /* 0x0A60 */
    U_V0_P3LADDR         V0_P3LADDR;                      /* 0x0A64 */
    U_V0_P3CADDR         V0_P3CADDR;                      /* 0x0A68 */
    U_V0_P3STRIDE        V0_P3STRIDE;                     /* 0x0A6C */
    U_V0_P3VFPOS         V0_P3VFPOS;                      /* 0x0A70 */
    U_V0_P3VLPOS         V0_P3VLPOS;                      /* 0x0A74 */
    U_V0_P3CTRL          V0_P3CTRL;                       /* 0x0A78 */
    unsigned int         Reserved_28;                     /* 0x0A7C */
    U_V0_P4RESO          V0_P4RESO;                       /* 0x0A80 */
    U_V0_P4LADDR         V0_P4LADDR;                      /* 0x0A84 */
    U_V0_P4CADDR         V0_P4CADDR;                      /* 0x0A88 */
    U_V0_P4STRIDE        V0_P4STRIDE;                     /* 0x0A8C */
    U_V0_P4VFPOS         V0_P4VFPOS;                      /* 0x0A90 */
    U_V0_P4VLPOS         V0_P4VLPOS;                      /* 0x0A94 */
    U_V0_P4CTRL          V0_P4CTRL;                       /* 0x0A98 */
    unsigned int         Reserved_29;                     /* 0x0A9C */
    U_V0_P5RESO          V0_P5RESO;                       /* 0x0AA0 */
    U_V0_P5LADDR         V0_P5LADDR;
    U_V0_P5CADDR         V0_P5CADDR;
    U_V0_P5STRIDE        V0_P5STRIDE;
    U_V0_P5VFPOS         V0_P5VFPOS;
    U_V0_P5VLPOS         V0_P5VLPOS;
    U_V0_P5CTRL          V0_P5CTRL;
    unsigned int         Reserved_30;
    U_V0_P6RESO          V0_P6RESO;
    U_V0_P6LADDR         V0_P6LADDR;
    U_V0_P6CADDR         V0_P6CADDR;
    U_V0_P6STRIDE        V0_P6STRIDE;
    U_V0_P6VFPOS         V0_P6VFPOS;
    U_V0_P6VLPOS         V0_P6VLPOS;
    U_V0_P6CTRL          V0_P6CTRL;
    unsigned int         Reserved_31;
    U_V0_P7RESO          V0_P7RESO;
    U_V0_P7LADDR         V0_P7LADDR;
    U_V0_P7CADDR         V0_P7CADDR;
    U_V0_P7STRIDE        V0_P7STRIDE;
    U_V0_P7VFPOS         V0_P7VFPOS;
    U_V0_P7VLPOS         V0_P7VLPOS;
    U_V0_P7CTRL          V0_P7CTRL;
    unsigned int         Reserved_32;
    U_V0_P8RESO          V0_P8RESO;
    U_V0_P8LADDR         V0_P8LADDR;
    U_V0_P8CADDR         V0_P8CADDR;
    U_V0_P8STRIDE        V0_P8STRIDE;
    U_V0_P8VFPOS         V0_P8VFPOS;
    U_V0_P8VLPOS         V0_P8VLPOS;
    U_V0_P8CTRL          V0_P8CTRL; 
    unsigned int         Reserved_33;
    U_V0_P9RESO          V0_P9RESO;
    U_V0_P9LADDR         V0_P9LADDR;
    U_V0_P9CADDR         V0_P9CADDR;
    U_V0_P9STRIDE        V0_P9STRIDE;
    U_V0_P9VFPOS         V0_P9VFPOS;
    U_V0_P9VLPOS         V0_P9VLPOS;
    U_V0_P9CTRL          V0_P9CTRL;
    unsigned int         Reserved_34;
    U_V0_P10RESO         V0_P10RESO;
    U_V0_P10LADDR        V0_P10LADDR;
    U_V0_P10CADDR        V0_P10CADDR;
    U_V0_P10STRIDE       V0_P10STRIDE;
    U_V0_P10VFPOS        V0_P10VFPOS;
    U_V0_P10VLPOS        V0_P10VLPOS;
    U_V0_P10CTRL         V0_P10CTRL;
    unsigned int         Reserved_35;
    U_V0_P11RESO         V0_P11RESO;
    U_V0_P11LADDR        V0_P11LADDR;
    U_V0_P11CADDR        V0_P11CADDR;
    U_V0_P11STRIDE       V0_P11STRIDE;
    U_V0_P11VFPOS        V0_P11VFPOS;
    U_V0_P11VLPOS        V0_P11VLPOS;
    U_V0_P11CTRL         V0_P11CTRL;
    unsigned int         Reserved_36;
    U_V0_P12RESO         V0_P12RESO;
    U_V0_P12LADDR        V0_P12LADDR;
    U_V0_P12CADDR        V0_P12CADDR;
    U_V0_P12STRIDE       V0_P12STRIDE;
    U_V0_P12VFPOS        V0_P12VFPOS;
    U_V0_P12VLPOS        V0_P12VLPOS;
    U_V0_P12CTRL         V0_P12CTRL;
    unsigned int         Reserved_37;
    U_V0_P13RESO         V0_P13RESO;
    U_V0_P13LADDR        V0_P13LADDR;
    U_V0_P13CADDR        V0_P13CADDR;
    U_V0_P13STRIDE       V0_P13STRIDE;
    U_V0_P13VFPOS        V0_P13VFPOS;
    U_V0_P13VLPOS        V0_P13VLPOS;
    U_V0_P13CTRL         V0_P13CTRL;
    unsigned int         Reserved_38;
    U_V0_P14RESO         V0_P14RESO;
    U_V0_P14LADDR        V0_P14LADDR;
    U_V0_P14CADDR        V0_P14CADDR;
    U_V0_P14STRIDE       V0_P14STRIDE;
    U_V0_P14VFPOS        V0_P14VFPOS;
    U_V0_P14VLPOS        V0_P14VLPOS;
    U_V0_P14CTRL         V0_P14CTRL;
    unsigned int         Reserved_39;
    U_V0_P15RESO         V0_P15RESO;
    U_V0_P15LADDR        V0_P15LADDR;
    U_V0_P15CADDR        V0_P15CADDR;
    U_V0_P15STRIDE       V0_P15STRIDE;
    U_V0_P15VFPOS        V0_P15VFPOS;
    U_V0_P15VLPOS        V0_P15VLPOS;
    U_V0_P15CTRL         V0_P15CTRL;
    unsigned int         Reserved_40;
    U_V0_P16RESO         V0_P16RESO;
    U_V0_P16LADDR        V0_P16LADDR;
    U_V0_P16CADDR        V0_P16CADDR;
    U_V0_P16STRIDE       V0_P16STRIDE;
    U_V0_P16VFPOS        V0_P16VFPOS;
    U_V0_P16VLPOS        V0_P16VLPOS;
    U_V0_P16CTRL         V0_P16CTRL;
    unsigned int         Reserved_41;
    U_V0_P17RESO         V0_P17RESO;
    U_V0_P17LADDR        V0_P17LADDR;
    U_V0_P17CADDR        V0_P17CADDR;
    U_V0_P17STRIDE       V0_P17STRIDE;
    U_V0_P17VFPOS        V0_P17VFPOS;
    U_V0_P17VLPOS        V0_P17VLPOS;
    U_V0_P17CTRL         V0_P17CTRL;
    unsigned int         Reserved_42;
    U_V0_P18RESO         V0_P18RESO;
    U_V0_P18LADDR        V0_P18LADDR;
    U_V0_P18CADDR        V0_P18CADDR;
    U_V0_P18STRIDE       V0_P18STRIDE;
    U_V0_P18VFPOS        V0_P18VFPOS;
    U_V0_P18VLPOS        V0_P18VLPOS;
    U_V0_P18CTRL         V0_P18CTRL;
    unsigned int         Reserved_43;
    U_V0_P19RESO         V0_P19RESO;
    U_V0_P19LADDR        V0_P19LADDR;
    U_V0_P19CADDR        V0_P19CADDR;
    U_V0_P19STRIDE       V0_P19STRIDE;
    U_V0_P19VFPOS        V0_P19VFPOS;
    U_V0_P19VLPOS        V0_P19VLPOS;
    U_V0_P19CTRL         V0_P19CTRL;
    unsigned int         Reserved_44;
    U_V0_P20RESO         V0_P20RESO;
    U_V0_P20LADDR        V0_P20LADDR;
    U_V0_P20CADDR        V0_P20CADDR;
    U_V0_P20STRIDE       V0_P20STRIDE;
    U_V0_P20VFPOS        V0_P20VFPOS;
    U_V0_P20VLPOS        V0_P20VLPOS;
    U_V0_P20CTRL         V0_P20CTRL;
    unsigned int         Reserved_45;
    U_V0_P21RESO         V0_P21RESO;
    U_V0_P21LADDR        V0_P21LADDR;
    U_V0_P21CADDR        V0_P21CADDR;
    U_V0_P21STRIDE       V0_P21STRIDE;
    U_V0_P21VFPOS        V0_P21VFPOS;
    U_V0_P21VLPOS        V0_P21VLPOS;
    U_V0_P21CTRL         V0_P21CTRL;
    unsigned int         Reserved_46;
    U_V0_P22RESO         V0_P22RESO;
    U_V0_P22LADDR        V0_P22LADDR;
    U_V0_P22CADDR        V0_P22CADDR;
    U_V0_P22STRIDE       V0_P22STRIDE;
    U_V0_P22VFPOS        V0_P22VFPOS;
    U_V0_P22VLPOS        V0_P22VLPOS;
    U_V0_P22CTRL         V0_P22CTRL;
    unsigned int         Reserved_47;
    U_V0_P23RESO         V0_P23RESO;
    U_V0_P23LADDR        V0_P23LADDR;
    U_V0_P23CADDR        V0_P23CADDR;
    U_V0_P23STRIDE       V0_P23STRIDE;
    U_V0_P23VFPOS        V0_P23VFPOS;
    U_V0_P23VLPOS        V0_P23VLPOS;
    U_V0_P23CTRL         V0_P23CTRL;
    unsigned int         Reserved_48;
    U_V0_P24RESO         V0_P24RESO;
    U_V0_P24LADDR        V0_P24LADDR;
    U_V0_P24CADDR        V0_P24CADDR;
    U_V0_P24STRIDE       V0_P24STRIDE;
    U_V0_P24VFPOS        V0_P24VFPOS;
    U_V0_P24VLPOS        V0_P24VLPOS;
    U_V0_P24CTRL         V0_P24CTRL;
    unsigned int         Reserved_49;
    U_V0_P25RESO         V0_P25RESO;
    U_V0_P25LADDR        V0_P25LADDR;
    U_V0_P25CADDR        V0_P25CADDR;
    U_V0_P25STRIDE       V0_P25STRIDE;
    U_V0_P25VFPOS        V0_P25VFPOS;
    U_V0_P25VLPOS        V0_P25VLPOS;
    U_V0_P25CTRL         V0_P25CTRL;
    unsigned int         Reserved_50;
    U_V0_P26RESO         V0_P26RESO;
    U_V0_P26LADDR        V0_P26LADDR;
    U_V0_P26CADDR        V0_P26CADDR;
    U_V0_P26STRIDE       V0_P26STRIDE;
    U_V0_P26VFPOS        V0_P26VFPOS;
    U_V0_P26VLPOS        V0_P26VLPOS;
    U_V0_P26CTRL         V0_P26CTRL;
    unsigned int         Reserved_51;
    U_V0_P27RESO         V0_P27RESO;
    U_V0_P27LADDR        V0_P27LADDR;
    U_V0_P27CADDR        V0_P27CADDR;
    U_V0_P27STRIDE       V0_P27STRIDE;
    U_V0_P27VFPOS        V0_P27VFPOS;
    U_V0_P27VLPOS        V0_P27VLPOS;
    U_V0_P27CTRL         V0_P27CTRL;
    unsigned int         Reserved_52;
    U_V0_P28RESO         V0_P28RESO;
    U_V0_P28LADDR        V0_P28LADDR;
    U_V0_P28CADDR        V0_P28CADDR;
    U_V0_P28STRIDE       V0_P28STRIDE;
    U_V0_P28VFPOS        V0_P28VFPOS;
    U_V0_P28VLPOS        V0_P28VLPOS;
    U_V0_P28CTRL         V0_P28CTRL;
    unsigned int         Reserved_53;
    U_V0_P29RESO         V0_P29RESO;
    U_V0_P29LADDR        V0_P29LADDR;
    U_V0_P29CADDR        V0_P29CADDR;
    U_V0_P29STRIDE       V0_P29STRIDE;
    U_V0_P29VFPOS        V0_P29VFPOS;
    U_V0_P29VLPOS        V0_P29VLPOS;
    U_V0_P29CTRL         V0_P29CTRL;
    unsigned int         Reserved_54;
    U_V0_P30RESO         V0_P30RESO;
    U_V0_P30LADDR        V0_P30LADDR;
    U_V0_P30CADDR        V0_P30CADDR;
    U_V0_P30STRIDE       V0_P30STRIDE;
    U_V0_P30VFPOS        V0_P30VFPOS;
    U_V0_P30VLPOS        V0_P30VLPOS;
    U_V0_P30CTRL         V0_P30CTRL;
    unsigned int         Reserved_55;
    U_V0_P31RESO         V0_P31RESO;
    U_V0_P31LADDR        V0_P31LADDR;
    U_V0_P31CADDR        V0_P31CADDR;
    U_V0_P31STRIDE       V0_P31STRIDE;
    U_V0_P31VFPOS        V0_P31VFPOS;
    U_V0_P31VLPOS        V0_P31VLPOS;
    U_V0_P31CTRL         V0_P31CTRL;
    unsigned int         Reserved_56;
    U_V0_P32RESO         V0_P32RESO;
    U_V0_P32LADDR        V0_P32LADDR;
    U_V0_P32CADDR        V0_P32CADDR;
    U_V0_P32STRIDE       V0_P32STRIDE;
    U_V0_P32VFPOS        V0_P32VFPOS;
    U_V0_P32VLPOS        V0_P32VLPOS;
    U_V0_P32CTRL         V0_P32CTRL;
    unsigned int         Reserved_57;
    U_V0_P33RESO         V0_P33RESO;
    U_V0_P33LADDR        V0_P33LADDR;
    U_V0_P33CADDR        V0_P33CADDR;
    U_V0_P33STRIDE       V0_P33STRIDE;
    U_V0_P33VFPOS        V0_P33VFPOS;
    U_V0_P33VLPOS        V0_P33VLPOS;
    U_V0_P33CTRL         V0_P33CTRL;
    unsigned int         Reserved_58;
    U_V0_P34RESO         V0_P34RESO;
    U_V0_P34LADDR        V0_P34LADDR;
    U_V0_P34CADDR        V0_P34CADDR;
    U_V0_P34STRIDE       V0_P34STRIDE;
    U_V0_P34VFPOS        V0_P34VFPOS;
    U_V0_P34VLPOS        V0_P34VLPOS;
    U_V0_P34CTRL         V0_P34CTRL;
    unsigned int         Reserved_59;
    U_V0_P35RESO         V0_P35RESO;
    U_V0_P35LADDR        V0_P35LADDR;
    U_V0_P35CADDR        V0_P35CADDR;
    U_V0_P35STRIDE       V0_P35STRIDE;
    U_V0_P35VFPOS        V0_P35VFPOS;
    U_V0_P35VLPOS        V0_P35VLPOS;
    U_V0_P35CTRL         V0_P35CTRL;
    unsigned int         Reserved_60;
    U_V0_P36RESO         V0_P36RESO;
    U_V0_P36LADDR        V0_P36LADDR;
    U_V0_P36CADDR        V0_P36CADDR;
    U_V0_P36STRIDE       V0_P36STRIDE;
    U_V0_P36VFPOS        V0_P36VFPOS;
    U_V0_P36VLPOS        V0_P36VLPOS;
    U_V0_P36CTRL         V0_P36CTRL;
    unsigned int         Reserved_61;
    U_V0_P37RESO         V0_P37RESO;
    U_V0_P37LADDR        V0_P37LADDR;
    U_V0_P37CADDR        V0_P37CADDR;
    U_V0_P37STRIDE       V0_P37STRIDE;
    U_V0_P37VFPOS        V0_P37VFPOS;
    U_V0_P37VLPOS        V0_P37VLPOS;
    U_V0_P37CTRL         V0_P37CTRL;
    unsigned int         Reserved_62;
    U_V0_P38RESO         V0_P38RESO;
    U_V0_P38LADDR        V0_P38LADDR;
    U_V0_P38CADDR        V0_P38CADDR;
    U_V0_P38STRIDE       V0_P38STRIDE;
    U_V0_P38VFPOS        V0_P38VFPOS;
    U_V0_P38VLPOS        V0_P38VLPOS;
    U_V0_P38CTRL         V0_P38CTRL;
    unsigned int         Reserved_63;
    U_V0_P39RESO         V0_P39RESO;
    U_V0_P39LADDR        V0_P39LADDR;
    U_V0_P39CADDR        V0_P39CADDR;
    U_V0_P39STRIDE       V0_P39STRIDE;
    U_V0_P39VFPOS        V0_P39VFPOS;
    U_V0_P39VLPOS        V0_P39VLPOS;
    U_V0_P39CTRL         V0_P39CTRL;
    unsigned int         Reserved_64;
    U_V0_P40RESO         V0_P40RESO;
    U_V0_P40LADDR        V0_P40LADDR;
    U_V0_P40CADDR        V0_P40CADDR;
    U_V0_P40STRIDE       V0_P40STRIDE;
    U_V0_P40VFPOS        V0_P40VFPOS;
    U_V0_P40VLPOS        V0_P40VLPOS;
    U_V0_P40CTRL         V0_P40CTRL;
    unsigned int         Reserved_65;
    U_V0_P41RESO         V0_P41RESO;
    U_V0_P41LADDR        V0_P41LADDR;
    U_V0_P41CADDR        V0_P41CADDR;
    U_V0_P41STRIDE       V0_P41STRIDE;
    U_V0_P41VFPOS        V0_P41VFPOS;
    U_V0_P41VLPOS        V0_P41VLPOS;
    U_V0_P41CTRL         V0_P41CTRL;
    unsigned int         Reserved_66;
    U_V0_P42RESO         V0_P42RESO;
    U_V0_P42LADDR        V0_P42LADDR;
    U_V0_P42CADDR        V0_P42CADDR;
    U_V0_P42STRIDE       V0_P42STRIDE;
    U_V0_P42VFPOS        V0_P42VFPOS;
    U_V0_P42VLPOS        V0_P42VLPOS;
    U_V0_P42CTRL         V0_P42CTRL;
    unsigned int         Reserved_67;
    U_V0_P43RESO         V0_P43RESO;
    U_V0_P43LADDR        V0_P43LADDR;
    U_V0_P43CADDR        V0_P43CADDR;
    U_V0_P43STRIDE       V0_P43STRIDE;
    U_V0_P43VFPOS        V0_P43VFPOS;
    U_V0_P43VLPOS        V0_P43VLPOS;
    U_V0_P43CTRL         V0_P43CTRL;
    unsigned int         Reserved_68;
    U_V0_P44RESO         V0_P44RESO;
    U_V0_P44LADDR        V0_P44LADDR;
    U_V0_P44CADDR        V0_P44CADDR;
    U_V0_P44STRIDE       V0_P44STRIDE;
    U_V0_P44VFPOS        V0_P44VFPOS;
    U_V0_P44VLPOS        V0_P44VLPOS;
    U_V0_P44CTRL         V0_P44CTRL;
    unsigned int         Reserved_69;
    U_V0_P45RESO         V0_P45RESO;
    U_V0_P45LADDR        V0_P45LADDR;
    U_V0_P45CADDR        V0_P45CADDR;
    U_V0_P45STRIDE       V0_P45STRIDE;
    U_V0_P45VFPOS        V0_P45VFPOS;
    U_V0_P45VLPOS        V0_P45VLPOS;
    U_V0_P45CTRL         V0_P45CTRL;
    unsigned int         Reserved_70;
    U_V0_P46RESO         V0_P46RESO;
    U_V0_P46LADDR        V0_P46LADDR;
    U_V0_P46CADDR        V0_P46CADDR;
    U_V0_P46STRIDE       V0_P46STRIDE;
    U_V0_P46VFPOS        V0_P46VFPOS;
    U_V0_P46VLPOS        V0_P46VLPOS;
    U_V0_P46CTRL         V0_P46CTRL;
    unsigned int         Reserved_71;
    U_V0_P47RESO         V0_P47RESO;
    U_V0_P47LADDR        V0_P47LADDR;
    U_V0_P47CADDR        V0_P47CADDR;
    U_V0_P47STRIDE       V0_P47STRIDE;
    U_V0_P47VFPOS        V0_P47VFPOS;
    U_V0_P47VLPOS        V0_P47VLPOS;
    U_V0_P47CTRL         V0_P47CTRL;
    unsigned int         Reserved_72;
    U_V0_P48RESO         V0_P48RESO;
    U_V0_P48LADDR        V0_P48LADDR;
    U_V0_P48CADDR        V0_P48CADDR;
    U_V0_P48STRIDE       V0_P48STRIDE;
    U_V0_P48VFPOS        V0_P48VFPOS;
    U_V0_P48VLPOS        V0_P48VLPOS;
    U_V0_P48CTRL         V0_P48CTRL;
    unsigned int         Reserved_73;
    U_V0_P49RESO         V0_P49RESO;
    U_V0_P49LADDR        V0_P49LADDR;
    U_V0_P49CADDR        V0_P49CADDR;
    U_V0_P49STRIDE       V0_P49STRIDE;
    U_V0_P49VFPOS        V0_P49VFPOS;
    U_V0_P49VLPOS        V0_P49VLPOS;
    U_V0_P49CTRL         V0_P49CTRL;
    unsigned int         Reserved_74;
    U_V0_P50RESO         V0_P50RESO;
    U_V0_P50LADDR        V0_P50LADDR;
    U_V0_P50CADDR        V0_P50CADDR;
    U_V0_P50STRIDE       V0_P50STRIDE;
    U_V0_P50VFPOS        V0_P50VFPOS;
    U_V0_P50VLPOS        V0_P50VLPOS;
    U_V0_P50CTRL         V0_P50CTRL;
    unsigned int         Reserved_75;
    U_V0_P51RESO         V0_P51RESO;
    U_V0_P51LADDR        V0_P51LADDR;
    U_V0_P51CADDR        V0_P51CADDR;
    U_V0_P51STRIDE       V0_P51STRIDE;
    U_V0_P51VFPOS        V0_P51VFPOS;
    U_V0_P51VLPOS        V0_P51VLPOS;
    U_V0_P51CTRL         V0_P51CTRL;
    unsigned int         Reserved_76;
    U_V0_P52RESO         V0_P52RESO;
    U_V0_P52LADDR        V0_P52LADDR;
    U_V0_P52CADDR        V0_P52CADDR;
    U_V0_P52STRIDE       V0_P52STRIDE;
    U_V0_P52VFPOS        V0_P52VFPOS;
    U_V0_P52VLPOS        V0_P52VLPOS;
    U_V0_P52CTRL         V0_P52CTRL;
    unsigned int         Reserved_77;
    U_V0_P53RESO         V0_P53RESO;
    U_V0_P53LADDR        V0_P53LADDR;
    U_V0_P53CADDR        V0_P53CADDR;
    U_V0_P53STRIDE       V0_P53STRIDE;
    U_V0_P53VFPOS        V0_P53VFPOS;
    U_V0_P53VLPOS        V0_P53VLPOS;
    U_V0_P53CTRL         V0_P53CTRL;
    unsigned int         Reserved_78;
    U_V0_P54RESO         V0_P54RESO;
    U_V0_P54LADDR        V0_P54LADDR;
    U_V0_P54CADDR        V0_P54CADDR;
    U_V0_P54STRIDE       V0_P54STRIDE;
    U_V0_P54VFPOS        V0_P54VFPOS;
    U_V0_P54VLPOS        V0_P54VLPOS;
    U_V0_P54CTRL         V0_P54CTRL;
    unsigned int         Reserved_79;
    U_V0_P55RESO         V0_P55RESO;
    U_V0_P55LADDR        V0_P55LADDR;
    U_V0_P55CADDR        V0_P55CADDR;
    U_V0_P55STRIDE       V0_P55STRIDE;
    U_V0_P55VFPOS        V0_P55VFPOS;
    U_V0_P55VLPOS        V0_P55VLPOS;
    U_V0_P55CTRL         V0_P55CTRL;
    unsigned int         Reserved_80;
    U_V0_P56RESO         V0_P56RESO;
    U_V0_P56LADDR        V0_P56LADDR;
    U_V0_P56CADDR        V0_P56CADDR;
    U_V0_P56STRIDE       V0_P56STRIDE;
    U_V0_P56VFPOS        V0_P56VFPOS;
    U_V0_P56VLPOS        V0_P56VLPOS;
    U_V0_P56CTRL         V0_P56CTRL;
    unsigned int         Reserved_81;
    U_V0_P57RESO         V0_P57RESO;
    U_V0_P57LADDR        V0_P57LADDR;
    U_V0_P57CADDR        V0_P57CADDR;
    U_V0_P57STRIDE       V0_P57STRIDE;
    U_V0_P57VFPOS        V0_P57VFPOS;
    U_V0_P57VLPOS        V0_P57VLPOS;
    U_V0_P57CTRL         V0_P57CTRL;
    unsigned int         Reserved_82;
    U_V0_P58RESO         V0_P58RESO;
    U_V0_P58LADDR        V0_P58LADDR;
    U_V0_P58CADDR        V0_P58CADDR;
    U_V0_P58STRIDE       V0_P58STRIDE;
    U_V0_P58VFPOS        V0_P58VFPOS;
    U_V0_P58VLPOS        V0_P58VLPOS;
    U_V0_P58CTRL         V0_P58CTRL;
    unsigned int         Reserved_83;
    U_V0_P59RESO         V0_P59RESO;
    U_V0_P59LADDR        V0_P59LADDR;
    U_V0_P59CADDR        V0_P59CADDR;
    U_V0_P59STRIDE       V0_P59STRIDE;
    U_V0_P59VFPOS        V0_P59VFPOS;
    U_V0_P59VLPOS        V0_P59VLPOS;
    U_V0_P59CTRL         V0_P59CTRL;
    unsigned int         Reserved_84;
    U_V0_P60RESO         V0_P60RESO;
    U_V0_P60LADDR        V0_P60LADDR;
    U_V0_P60CADDR        V0_P60CADDR;
    U_V0_P60STRIDE       V0_P60STRIDE;
    U_V0_P60VFPOS        V0_P60VFPOS;
    U_V0_P60VLPOS        V0_P60VLPOS;
    U_V0_P60CTRL         V0_P60CTRL;
    unsigned int         Reserved_85;
    U_V0_P61RESO         V0_P61RESO;
    U_V0_P61LADDR        V0_P61LADDR;
    U_V0_P61CADDR        V0_P61CADDR;
    U_V0_P61STRIDE       V0_P61STRIDE;
    U_V0_P61VFPOS        V0_P61VFPOS;
    U_V0_P61VLPOS        V0_P61VLPOS;
    U_V0_P61CTRL         V0_P61CTRL;
    unsigned int         Reserved_86;
    U_V0_P62RESO         V0_P62RESO;
    U_V0_P62LADDR        V0_P62LADDR;
    U_V0_P62CADDR        V0_P62CADDR;
    U_V0_P62STRIDE       V0_P62STRIDE;
    U_V0_P62VFPOS        V0_P62VFPOS;
    U_V0_P62VLPOS        V0_P62VLPOS;
    U_V0_P62CTRL         V0_P62CTRL;
    unsigned int         Reserved_87;
    U_V0_P63RESO         V0_P63RESO;
    U_V0_P63LADDR        V0_P63LADDR;
    U_V0_P63CADDR        V0_P63CADDR;
    U_V0_P63STRIDE       V0_P63STRIDE;
    U_V0_P63VFPOS        V0_P63VFPOS;
    U_V0_P63VLPOS        V0_P63VLPOS;
    U_V0_P63CTRL         V0_P63CTRL;
    unsigned int         Reserved_88;
    U_V0_NADDR           V0_NADDR;
    U_V0_NCADDR          V0_NCADDR;
    unsigned int         Reserved_89[10];
    U_V0_MULTI_MODE      V0_MULTI_MODE;
    unsigned int         Reserved_90[3];
    U_V0_LADDROFFSET     V0_LADDROFFSET;
    U_V0_CADDROFFSET     V0_CADDROFFSET;
    unsigned int         Reserved_91[54];
    U_V0_DCMP_LSTATE0    V0_DCMP_LSTATE0;
    U_V0_DCMP_LSTATE1    V0_DCMP_LSTATE1;
    U_V0_DCMP_CSTATE0    V0_DCMP_CSTATE0;
    U_V0_DCMP_CSTATE1    V0_DCMP_CSTATE1;
    U_VO_DCMPERRCLR      VO_DCMPERRCLR;
    U_V0_DCMP_ERR        V0_DCMP_ERR;
    unsigned int         Reserved_92[6];
    U_V0_MRG_ERR         V0_MRG_ERR;
    U_VO_MRGERRCLR       VO_MRGERRCLR;
    unsigned int         Reserved_93[4394];
    U_VP0_CTRL           VP0_CTRL;
    U_VP0_UPD            VP0_UPD;
    U_VP0_ACC_CAD        VP0_ACC_CAD;
    U_VP0_ACM_CAD        VP0_ACM_CAD;
    U_VP0_PARAUP         VP0_PARAUP;
    U_VP0_IRESO          VP0_IRESO;
    U_VP0_DOF_CTRL       VP0_DOF_CTRL;
    U_VP0_DOF_STEP       VP0_DOF_STEP;
    U_VP0_ACCTHD1        VP0_ACCTHD1;
    U_VP0_ACCTHD2        VP0_ACCTHD2;
    U_VP0_ACCLOWN        VP0_ACCLOWN[3];
    U_VP0_ACCMEDN        VP0_ACCMEDN[3];
    U_VP0_ACCHIGHN       VP0_ACCHIGHN[3];
    U_VP0_ACCMLN         VP0_ACCMLN[3];
    U_VP0_ACCMHN         VP0_ACCMHN[3];
    U_VP0_ACC3LOW        VP0_ACC3LOW;
    U_VP0_ACC3MED        VP0_ACC3MED;
    U_VP0_ACC3HIGH       VP0_ACC3HIGH;
    U_VP0_ACC8MLOW       VP0_ACC8MLOW;
    U_VP0_ACC8MHIGH      VP0_ACC8MHIGH;
    U_VP0_ACCTOTAL       VP0_ACCTOTAL;
    U_VP0_ACM_CTRL       VP0_ACM_CTRL;
    U_VP0_ACM_ADJ        VP0_ACM_ADJ;
    U_VP0_DFPOS          VP0_DFPOS;
    U_VP0_DLPOS          VP0_DLPOS;
    U_VP0_VFPOS          VP0_VFPOS;
    U_VP0_VLPOS          VP0_VLPOS;
    U_VP0_BK             VP0_BK;
    U_VP0_ALPHA          VP0_ALPHA;
    U_VP0_CSC0_IDC       VP0_CSC0_IDC;
    unsigned int         Reserved_94[24];
    U_VP0_CSC0_ODC       VP0_CSC0_ODC;
    U_VP0_CSC0_IODC      VP0_CSC0_IODC;
    U_VP0_CSC0_P0        VP0_CSC0_P0;
    U_VP0_CSC0_P1        VP0_CSC0_P1;
    U_VP0_CSC0_P2        VP0_CSC0_P2;
    U_VP0_CSC0_P3        VP0_CSC0_P3;
    U_VP0_CSC0_P4        VP0_CSC0_P4;
    U_VP0_CSC1_IDC       VP0_CSC1_IDC;
    U_VP0_CSC1_ODC       VP0_CSC1_ODC;
    U_VP0_CSC1_IODC      VP0_CSC1_IODC;
    U_VP0_CSC1_P0        VP0_CSC1_P0;
    U_VP0_CSC1_P1        VP0_CSC1_P1;
    U_VP0_CSC1_P2        VP0_CSC1_P2;
    U_VP0_CSC1_P3        VP0_CSC1_P3;
    U_VP0_CSC1_P4        VP0_CSC1_P4;
    unsigned int         Reserved_106[433];
    U_G0_CTRL            G0_CTRL;
    U_G0_UPD             G0_UPD;
    unsigned int         Reserved_107[2];
    U_G0_ADDR            G0_ADDR;
    unsigned int         Reserved_108;
    U_G0_NADDR           G0_NADDR;
    U_G0_STRIDE          G0_STRIDE;
    U_G0_IRESO           G0_IRESO;
    U_G0_SFPOS           G0_SFPOS;
    unsigned int         Reserved_109[2];
    U_G0_CBMPARA         G0_CBMPARA;
    U_G0_CKEYMAX         G0_CKEYMAX;
    U_G0_CKEYMIN         G0_CKEYMIN;
    U_G0_CMASK           G0_CMASK;
    U_G0_PARAADDR        G0_PARAADDR;
    U_G0_PARAUP          G0_PARAUP;
    U_G0_FIFOTHD         G0_FIFOTHD;
    unsigned int         Reserved_110;
    U_G0_DCMP_ADDR       G0_DCMP_ADDR;
    U_G0_DCMP_NADDR      G0_DCMP_NADDR;
    U_G0_DCMP_OFFSET     G0_DCMP_OFFSET;
    unsigned int         Reserved_111[9];
    U_G0_DFPOS           G0_DFPOS;
    U_G0_DLPOS           G0_DLPOS;
    U_G0_VFPOS           G0_VFPOS;
    U_G0_VLPOS           G0_VLPOS;
    U_G0_BK              G0_BK;
    U_G0_ALPHA           G0_ALPHA;
    unsigned int         Reserved_112[2];
    U_G0_DOF_CTRL        G0_DOF_CTRL;
    U_G0_DOF_STEP        G0_DOF_STEP;
    unsigned int         Reserved_113[6];
    U_G0_CSC_IDC         G0_CSC_IDC;
    U_G0_CSC_ODC         G0_CSC_ODC;
    U_G0_CSC_IODC        G0_CSC_IODC;
    U_G0_CSC_P0          G0_CSC_P0;
    U_G0_CSC_P1          G0_CSC_P1;
    U_G0_CSC_P2          G0_CSC_P2;
    U_G0_CSC_P3          G0_CSC_P3;
    U_G0_CSC_P4          G0_CSC_P4;
    unsigned int         Reserved_114[3016];
    U_GP0_CTRL           GP0_CTRL;
    U_GP0_UPD            GP0_UPD;
    U_GP0_ORESO          GP0_ORESO;
    U_GP0_IRESO          GP0_IRESO;
    U_GP0_HCOEFAD        GP0_HCOEFAD;
    U_GP0_VCOEFAD        GP0_VCOEFAD;
    U_GP0_PARAUP         GP0_PARAUP;
    unsigned int         Reserved_115;
    U_GP0_GALPHA         GP0_GALPHA;
    unsigned int         Reserved_116[55];
    U_GP0_DFPOS          GP0_DFPOS;
    U_GP0_DLPOS          GP0_DLPOS;
    U_GP0_VFPOS          GP0_VFPOS;
    U_GP0_VLPOS          GP0_VLPOS;
    U_GP0_BK             GP0_BK;
    U_GP0_ALPHA          GP0_ALPHA;
    unsigned int         Reserved_117[2];
    U_GP0_CSC_IDC        GP0_CSC_IDC;
    U_GP0_CSC_ODC        GP0_CSC_ODC;
    U_GP0_CSC_IODC       GP0_CSC_IODC;
    U_GP0_CSC_P0         GP0_CSC_P0;
    U_GP0_CSC_P1         GP0_CSC_P1;
    U_GP0_CSC_P2         GP0_CSC_P2;
    U_GP0_CSC_P3         GP0_CSC_P3;
    U_GP0_CSC_P4         GP0_CSC_P4;
    U_GP0_ZME_HSP        GP0_ZME_HSP;
    U_GP0_ZME_HOFFSET    GP0_ZME_HOFFSET;
    U_GP0_ZME_VSP        GP0_ZME_VSP;
    U_GP0_ZME_VSR        GP0_ZME_VSR;
    U_GP0_ZME_VOFFSET    GP0_ZME_VOFFSET;
    unsigned int         Reserved_118[3];
    U_GP0_ZME_LTICTRL    GP0_ZME_LTICTRL;
    U_GP0_ZME_LHPASSCOEF GP0_ZME_LHPASSCOEF;
    U_GP0_ZME_LTITHD     GP0_ZME_LTITHD;
    unsigned int         Reserved_119;
    U_GP0_ZME_LHFREQTHD  GP0_ZME_LHFREQTHD;
    U_GP0_ZME_LGAINCOEF  GP0_ZME_LGAINCOEF;
    unsigned int         Reserved_120[2];
    U_GP0_ZME_CTICTRL    GP0_ZME_CTICTRL;
    U_GP0_ZME_CHPASSCOEF GP0_ZME_CHPASSCOEF;
    U_GP0_ZME_CTITHD     GP0_ZME_CTITHD;
    unsigned int         Reserved_121[925];
    U_WBC_G0_CTRL        WBC_G0_CTRL;
    U_WBC_G0_UPD         WBC_G0_UPD;
    U_WBC_G0_CMP         WBC_G0_CMP;
    unsigned int         Reserved_122;
    U_WBC_G0_AR_ADDR     WBC_G0_AR_ADDR;
    U_WBC_G0_GB_ADDR     WBC_G0_GB_ADDR;
    U_WBC_G0_STRIDE      WBC_G0_STRIDE;
    U_WBC_G0_OFFSET      WBC_G0_OFFSET;
    U_WBC_G0_ORESO       WBC_G0_ORESO;
    U_WBC_G0_FCROP       WBC_G0_FCROP;
    U_WBC_G0_LCROP       WBC_G0_LCROP;
    unsigned int         Reserved_123[501];
    //U_WBC_G0_STPSTACLR   WBC_G0_STPSTACLR;
    //unsigned int         Reserved_1_77[496];
    U_WBC_GP0_CTRL       WBC_GP0_CTRL;
    U_WBC_GP0_UPD        WBC_GP0_UPD;
    unsigned int         Reserved_124[2];
    U_WBC_GP0_YADDR      WBC_GP0_YADDR;
    U_WBC_GP0_CADDR      WBC_GP0_CADDR;
    U_WBC_GP0_STRIDE     WBC_GP0_STRIDE;
    unsigned int         Reserved_125;
    U_WBC_GP0_ORESO      WBC_GP0_ORESO;
    U_WBC_GP0_FCROP      WBC_GP0_FCROP;
    U_WBC_GP0_LCROP      WBC_GP0_LCROP;
    unsigned int         Reserved_126[53];
    U_WBC_GP0_DITHER_CTRL WBC_GP0_DITHER_CTRL;
    U_WBC_GP0_DITHER_COEF0 WBC_GP0_DITHER_COEF0;
    U_WBC_GP0_DITHER_COEF1 WBC_GP0_DITHER_COEF1;
    unsigned int         Reserved_127[189];
    U_WBC_DHD0_CTRL      WBC_DHD0_CTRL;
    U_WBC_DHD0_UPD       WBC_DHD0_UPD;
    unsigned int         Reserved_128[2];
    U_WBC_DHD0_YADDR     WBC_DHD0_YADDR;
    U_WBC_DHD0_CADDR     WBC_DHD0_CADDR;
    U_WBC_DHD0_STRIDE    WBC_DHD0_STRIDE;
    unsigned int         Reserved_129;
    U_WBC_DHD0_ORESO     WBC_DHD0_ORESO;
    U_WBC_DHD0_FCROP     WBC_DHD0_FCROP;
    U_WBC_DHD0_LCROP     WBC_DHD0_LCROP;
    unsigned int         Reserved_130;
    U_WBC_DHD0_LOWDLYCTRL WBC_DHD0_LOWDLYCTRL;
    U_WBC_DHD0_TUNLADDR  WBC_DHD0_TUNLADDR;
    U_WBC_DHD0_LOWDLYSTA WBC_DHD0_LOWDLYSTA;
    unsigned int         Reserved_131;
    U_WBC_DHD0_PARAUP    WBC_DHD0_PARAUP;
    unsigned int         Reserved_132[3];
    U_WBC_DHD0_HLCOEFAD  WBC_DHD0_HLCOEFAD;
    U_WBC_DHD0_HCCOEFAD  WBC_DHD0_HCCOEFAD;
    U_WBC_DHD0_VLCOEFAD  WBC_DHD0_VLCOEFAD;
    U_WBC_DHD0_VCCOEFAD  WBC_DHD0_VCCOEFAD;
    unsigned int         Reserved_133[16];
    U_WBC_DHD0_HISTOGRAM0 WBC_DHD0_HISTOGRAM0;
    U_WBC_DHD0_HISTOGRAM1 WBC_DHD0_HISTOGRAM1;
    U_WBC_DHD0_HISTOGRAM2 WBC_DHD0_HISTOGRAM2;
    U_WBC_DHD0_HISTOGRAM3 WBC_DHD0_HISTOGRAM3;
    U_WBC_DHD0_HISTOGRAM4 WBC_DHD0_HISTOGRAM4;
    U_WBC_DHD0_HISTOGRAM5 WBC_DHD0_HISTOGRAM5;
    U_WBC_DHD0_HISTOGRAM6 WBC_DHD0_HISTOGRAM6;
    U_WBC_DHD0_HISTOGRAM7 WBC_DHD0_HISTOGRAM7;
    U_WBC_DHD0_HISTOGRAM8 WBC_DHD0_HISTOGRAM8;
    U_WBC_DHD0_HISTOGRAM9 WBC_DHD0_HISTOGRAM9;
    U_WBC_DHD0_HISTOGRAM10 WBC_DHD0_HISTOGRAM10;
    U_WBC_DHD0_HISTOGRAM11 WBC_DHD0_HISTOGRAM11;
    U_WBC_DHD0_HISTOGRAM12 WBC_DHD0_HISTOGRAM12;
    U_WBC_DHD0_HISTOGRAM13 WBC_DHD0_HISTOGRAM13;
    U_WBC_DHD0_HISTOGRAM14 WBC_DHD0_HISTOGRAM14;
    U_WBC_DHD0_HISTOGRAM15 WBC_DHD0_HISTOGRAM15;
    unsigned int         Reserved_134[4];
    U_WBC_DHD0_CHECKSUM_Y WBC_DHD0_CHECKSUM_Y;
    U_WBC_DHD0_CHECKSUM_C WBC_DHD0_CHECKSUM_C;
    unsigned int         Reserved_135[2];
    U_WBC_DHD0_DITHER_CTRL WBC_DHD0_DITHER_CTRL;
    U_WBC_DHD0_DITHER_COEF0 WBC_DHD0_DITHER_COEF0;
    U_WBC_DHD0_DITHER_COEF1 WBC_DHD0_DITHER_COEF1;
    unsigned int         Reserved_136[65];
    U_WBC_DHD0_HCDS      WBC_DHD0_HCDS;
    U_WBC_DHD0_HCDS_COEF0 WBC_DHD0_HCDS_COEF0;
    U_WBC_DHD0_HCDS_COEF1 WBC_DHD0_HCDS_COEF1;
    unsigned int         Reserved_137[41];
    U_WBC_DHD0_ZME_HSP   WBC_DHD0_ZME_HSP;
    U_WBC_DHD0_ZME_HLOFFSET WBC_DHD0_ZME_HLOFFSET;
    U_WBC_DHD0_ZME_HCOFFSET WBC_DHD0_ZME_HCOFFSET;
    unsigned int         Reserved_138[3];
    U_WBC_DHD0_ZME_VSP   WBC_DHD0_ZME_VSP;
    U_WBC_DHD0_ZME_VSR   WBC_DHD0_ZME_VSR;
    U_WBC_DHD0_ZME_VOFFSET WBC_DHD0_ZME_VOFFSET;
    U_WBC_DHD0_ZME_VBOFFSET WBC_DHD0_ZME_VBOFFSET;
    unsigned int         Reserved_139[6];
    U_WBC_DHD0_CSCIDC    WBC_DHD0_CSCIDC;
    U_WBC_DHD0_CSCODC    WBC_DHD0_CSCODC;
    U_WBC_DHD0_CSCP0     WBC_DHD0_CSCP0;
    U_WBC_DHD0_CSCP1     WBC_DHD0_CSCP1;
    U_WBC_DHD0_CSCP2     WBC_DHD0_CSCP2;
    U_WBC_DHD0_CSCP3     WBC_DHD0_CSCP3;
    U_WBC_DHD0_CSCP4     WBC_DHD0_CSCP4;
    unsigned int         Reserved_140[57];
    U_MIXV0_BKG          MIXV0_BKG;
    unsigned int         Reserved_141;
    U_MIXV0_MIX          MIXV0_MIX;
    unsigned int         Reserved_142[125];
    U_MIXG0_BKG          MIXG0_BKG;
    U_MIXG0_BKALPHA      MIXG0_BKALPHA;
    U_MIXG0_MIX          MIXG0_MIX;
    unsigned int         Reserved_143[125];
    U_CBM_BKG1           CBM_BKG1;
    unsigned int         Reserved_144;
    U_CBM_MIX1           CBM_MIX1;
    unsigned int         Reserved_145[5];
    U_CBM_BKG2           CBM_BKG2;
    unsigned int         Reserved_146;
    U_CBM_MIX2           CBM_MIX2;
    unsigned int         Reserved_147[5];
    U_CBM_ATTR           CBM_ATTR;
    unsigned int         Reserved_148[111];
    U_MIXDSD_BKG         MIXDSD_BKG;
    unsigned int         Reserved_149;
    U_MIXDSD_MIX         MIXDSD_MIX;
    unsigned int         Reserved_150[637];
    U_DHD0_CTRL          DHD0_CTRL;
    U_DHD0_VSYNC         DHD0_VSYNC;
    U_DHD0_HSYNC1        DHD0_HSYNC1;
    U_DHD0_HSYNC2        DHD0_HSYNC2;
    U_DHD0_VPLUS         DHD0_VPLUS;
    U_DHD0_PWR           DHD0_PWR;
    U_DHD0_VTTHD3        DHD0_VTTHD3;
    U_DHD0_VTTHD         DHD0_VTTHD;
    U_DHD0_SYNC_INV      DHD0_SYNC_INV;
    unsigned int         Reserved_151[2];
    U_DHD0_DATA_SEL      DHD0_DATA_SEL;
    unsigned int         Reserved_152;
    //U_DHD0_AFFTHD        DHD0_AFFTHD;
    U_DHD0_ABUFTHD       DHD0_ABUFTHD;
    unsigned int         Reserved_153[2];
    //U_DHD0_VGA_DACDET1   DHD0_VGA_DACDET1;
    //U_DHD0_VGA_DACDET2   DHD0_VGA_DACDET2;
    U_DHD0_CSC_IDC       DHD0_CSC_IDC;
    U_DHD0_CSC_ODC       DHD0_CSC_ODC;
    U_DHD0_CSC_IODC      DHD0_CSC_IODC;
    U_DHD0_CSC_P0        DHD0_CSC_P0;
    U_DHD0_CSC_P1        DHD0_CSC_P1;
    U_DHD0_CSC_P2        DHD0_CSC_P2;
    U_DHD0_CSC_P3        DHD0_CSC_P3;
    U_DHD0_CSC_P4        DHD0_CSC_P4;
    U_DHD0_DITHER0_CTRL  DHD0_DITHER0_CTRL;
    U_DHD0_DITHER0_COEF0 DHD0_DITHER0_COEF0;
    U_DHD0_DITHER0_COEF1 DHD0_DITHER0_COEF1;
    unsigned int         Reserved_154;
    U_DHD0_DITHER1_CTRL  DHD0_DITHER1_CTRL;
    U_DHD0_DITHER1_COEF0 DHD0_DITHER1_COEF0;
    U_DHD0_DITHER1_COEF1 DHD0_DITHER1_COEF1;
    unsigned int         Reserved_155;
    U_DHD0_CLIP0_L       DHD0_CLIP0_L;
    U_DHD0_CLIP0_H       DHD0_CLIP0_H;
    U_DHD0_CLIP1_L       DHD0_CLIP1_L;
    U_DHD0_CLIP1_H       DHD0_CLIP1_H;
    U_DHD0_CLIP2_L       DHD0_CLIP2_L;
    U_DHD0_CLIP2_H       DHD0_CLIP2_H;
    U_DHD0_CLIP3_L       DHD0_CLIP3_L;
    U_DHD0_CLIP3_H       DHD0_CLIP3_H;
    U_DHD0_CLIP4_L       DHD0_CLIP4_L;
    U_DHD0_CLIP4_H       DHD0_CLIP4_H;
    unsigned int         Reserved_156[2];
    U_DHD0_PARATHD       DHD0_PARATHD;
    U_DHD0_START_POS     DHD0_START_POS;
    unsigned int         Reserved_158[2];
    U_DHD0_CCDOIMGMOD    DHD0_CCDOIMGMOD;
    U_DHD0_CCDOPOSMSKH   DHD0_CCDOPOSMSKH;
    U_DHD0_CCDOPOSMSKL   DHD0_CCDOPOSMSKL;
    unsigned int         Reserved_159;
    U_DHD0_LOCKCFG       DHD0_LOCKCFG;
    U_DHD0_LOCK_STATE1   DHD0_LOCK_STATE1;
    U_DHD0_LOCK_STATE2   DHD0_LOCK_STATE2;
    U_DHD0_LOCK_STATE3   DHD0_LOCK_STATE3;
    U_DHD0_GMM_COEFAD    DHD0_GMM_COEFAD;
    unsigned int         Reserved_160[2];
    U_DHD0_PARAUP        DHD0_PARAUP;
    U_DHD0_STATE         DHD0_STATE;
    unsigned int         Reserved_161;
    U_DHD0_DEBUG         DHD0_DEBUG;
    U_DHD0_DEBUG_STATE   DHD0_DEBUG_STATE;
    U_DHD0_HSPCFG0       DHD0_HSPCFG0;
    U_DHD0_HSPCFG1       DHD0_HSPCFG1;
    unsigned int         Reserved_162[3];
    U_DHD0_HSPCFG5       DHD0_HSPCFG5;
    U_DHD0_HSPCFG6       DHD0_HSPCFG6;
    U_DHD0_HSPCFG7       DHD0_HSPCFG7;
    U_DHD0_HSPCFG8       DHD0_HSPCFG8;
    unsigned int         Reserved_163[3];
    U_DHD0_HSPCFG12      DHD0_HSPCFG12;
    U_DHD0_HSPCFG13      DHD0_HSPCFG13;
    U_DHD0_HSPCFG14      DHD0_HSPCFG14;
    U_DHD0_HSPCFG15      DHD0_HSPCFG15;
    unsigned int         Reserved_164[944];
    U_INTF_CTRL          INTF_CTRL;
    U_INTF_UPD           INTF_UPD;
    U_INTF_SYNC_INV      INTF_SYNC_INV;
    unsigned int         Reserved_165;
    U_INTF_CLIP0_L       INTF_CLIP0_L;
    U_INTF_CLIP0_H       INTF_CLIP0_H;
    unsigned int         Reserved_166[2];
    U_INTF_CSC_IDC       INTF_CSC_IDC;
    U_INTF_CSC_ODC       INTF_CSC_ODC;
    U_INTF_CSC_IODC      INTF_CSC_IODC;
    U_INTF_CSC_P0        INTF_CSC_P0;
    U_INTF_CSC_P1        INTF_CSC_P1;
    U_INTF_CSC_P2        INTF_CSC_P2;
    U_INTF_CSC_P3        INTF_CSC_P3;
    U_INTF_CSC_P4        INTF_CSC_P4;
    U_INTF_HSPCFG0       INTF_HSPCFG0;
    U_INTF_HSPCFG1       INTF_HSPCFG1;
    unsigned int         Reserved_167[3];
    U_INTF_HSPCFG5       INTF_HSPCFG5;
    U_INTF_HSPCFG6       INTF_HSPCFG6;
    U_INTF_HSPCFG7       INTF_HSPCFG7;
    U_INTF_HSPCFG8       INTF_HSPCFG8;
    unsigned int         Reserved_168[3];
    U_INTF_HSPCFG12      INTF_HSPCFG12;
    U_INTF_HSPCFG13      INTF_HSPCFG13;
    U_INTF_HSPCFG14      INTF_HSPCFG14;
    U_INTF_HSPCFG15      INTF_HSPCFG15;
    U_INTF_DITHER0_CTRL  INTF_DITHER0_CTRL;
    U_INTF_DITHER0_COEF0 INTF_DITHER0_COEF0;
    U_INTF_DITHER0_COEF1 INTF_DITHER0_COEF1;
    unsigned int         Reserved_169[21];
    U_INTF_CHKSUM_Y_H    INTF_CHKSUM_Y_H;
    U_INTF_CHKSUM_Y_L    INTF_CHKSUM_Y_L;
    U_INTF_CHKSUM_U_H    INTF_CHKSUM_U_H;
    U_INTF_CHKSUM_U_L    INTF_CHKSUM_U_L;
    U_INTF_CHKSUM_V_H    INTF_CHKSUM_V_H;
    U_INTF_CHKSUM_V_L    INTF_CHKSUM_V_L;
    unsigned int         Reserved_170[1986];
    U_HDATE_VERSION      HDATE_VERSION;
    U_HDATE_EN           HDATE_EN;
    U_HDATE_POLA_CTRL    HDATE_POLA_CTRL;
    U_HDATE_VIDEO_FORMAT HDATE_VIDEO_FORMAT;
    U_HDATE_STATE        HDATE_STATE;
    U_HDATE_OUT_CTRL     HDATE_OUT_CTRL;
    U_HDATE_SRC_13_COEF1 HDATE_SRC_13_COEF1;
    U_HDATE_SRC_13_COEF2 HDATE_SRC_13_COEF2;
    U_HDATE_SRC_13_COEF3 HDATE_SRC_13_COEF3;
    U_HDATE_SRC_13_COEF4 HDATE_SRC_13_COEF4;
    U_HDATE_SRC_13_COEF5 HDATE_SRC_13_COEF5;
    U_HDATE_SRC_13_COEF6 HDATE_SRC_13_COEF6;
    U_HDATE_SRC_13_COEF7 HDATE_SRC_13_COEF7;
    U_HDATE_SRC_13_COEF8 HDATE_SRC_13_COEF8;
    U_HDATE_SRC_13_COEF9 HDATE_SRC_13_COEF9;
    U_HDATE_SRC_13_COEF10 HDATE_SRC_13_COEF10;
    U_HDATE_SRC_13_COEF11 HDATE_SRC_13_COEF11;
    U_HDATE_SRC_13_COEF12 HDATE_SRC_13_COEF12;
    U_HDATE_SRC_13_COEF13 HDATE_SRC_13_COEF13;
    U_HDATE_SRC_24_COEF1 HDATE_SRC_24_COEF1;
    U_HDATE_SRC_24_COEF2 HDATE_SRC_24_COEF2;
    U_HDATE_SRC_24_COEF3 HDATE_SRC_24_COEF3;
    U_HDATE_SRC_24_COEF4 HDATE_SRC_24_COEF4;
    U_HDATE_SRC_24_COEF5 HDATE_SRC_24_COEF5;
    U_HDATE_SRC_24_COEF6 HDATE_SRC_24_COEF6;
    U_HDATE_SRC_24_COEF7 HDATE_SRC_24_COEF7;
    U_HDATE_SRC_24_COEF8 HDATE_SRC_24_COEF8;
    U_HDATE_SRC_24_COEF9 HDATE_SRC_24_COEF9;
    U_HDATE_SRC_24_COEF10 HDATE_SRC_24_COEF10;
    U_HDATE_SRC_24_COEF11 HDATE_SRC_24_COEF11;
    U_HDATE_SRC_24_COEF12 HDATE_SRC_24_COEF12;
    U_HDATE_SRC_24_COEF13 HDATE_SRC_24_COEF13;
    U_HDATE_CSC_COEF1    HDATE_CSC_COEF1;
    U_HDATE_CSC_COEF2    HDATE_CSC_COEF2;
    U_HDATE_CSC_COEF3    HDATE_CSC_COEF3;
    U_HDATE_CSC_COEF4    HDATE_CSC_COEF4;
    U_HDATE_CSC_COEF5    HDATE_CSC_COEF5;
    unsigned int         Reserved_171[3];
    U_HDATE_TEST         HDATE_TEST;
    U_HDATE_VBI_CTRL     HDATE_VBI_CTRL;
    U_HDATE_CGMSA_DATA   HDATE_CGMSA_DATA;
    U_HDATE_CGMSB_H      HDATE_CGMSB_H;
    U_HDATE_CGMSB_DATA1  HDATE_CGMSB_DATA1;
    U_HDATE_CGMSB_DATA2  HDATE_CGMSB_DATA2;
    U_HDATE_CGMSB_DATA3  HDATE_CGMSB_DATA3;
    U_HDATE_CGMSB_DATA4  HDATE_CGMSB_DATA4;
    U_HDATE_DACDET1      HDATE_DACDET1;
    U_HDATE_DACDET2      HDATE_DACDET2;
    U_HDATE_SRC_13_COEF14 HDATE_SRC_13_COEF14;
    U_HDATE_SRC_13_COEF15 HDATE_SRC_13_COEF15;
    U_HDATE_SRC_13_COEF16 HDATE_SRC_13_COEF16;
    U_HDATE_SRC_13_COEF17 HDATE_SRC_13_COEF17;
    U_HDATE_SRC_13_COEF18 HDATE_SRC_13_COEF18;
    U_HDATE_SRC_24_COEF14 HDATE_SRC_24_COEF14;
    U_HDATE_SRC_24_COEF15 HDATE_SRC_24_COEF15;
    U_HDATE_SRC_24_COEF16 HDATE_SRC_24_COEF16;
    U_HDATE_SRC_24_COEF17 HDATE_SRC_24_COEF17;
    U_HDATE_SRC_24_COEF18 HDATE_SRC_24_COEF18;
    U_HDATE_CLIP         HDATE_CLIP;
    unsigned int         Reserved_172[67];
    U_DATE_COEFF0        DATE_COEFF0;
    U_DATE_COEFF1        DATE_COEFF1;
    U_DATE_COEFF2        DATE_COEFF2;
    U_DATE_COEFF3        DATE_COEFF3;
    U_DATE_COEFF4        DATE_COEFF4;
    U_DATE_COEFF5        DATE_COEFF5;
    U_DATE_COEFF6        DATE_COEFF6;
    U_DATE_COEFF7        DATE_COEFF7;
    U_DATE_COEFF8        DATE_COEFF8;
    U_DATE_COEFF9        DATE_COEFF9;
    U_DATE_COEFF10       DATE_COEFF10;
    U_DATE_COEFF11       DATE_COEFF11;
    U_DATE_COEFF12       DATE_COEFF12;
    U_DATE_COEFF13       DATE_COEFF13;
    U_DATE_COEFF14       DATE_COEFF14;
    U_DATE_COEFF15       DATE_COEFF15;
    U_DATE_COEFF16       DATE_COEFF16;
    U_DATE_COEFF17       DATE_COEFF17;
    U_DATE_COEFF18       DATE_COEFF18;
    U_DATE_COEFF19       DATE_COEFF19;
    U_DATE_COEFF20       DATE_COEFF20;
    U_DATE_COEFF21       DATE_COEFF21;
    U_DATE_COEFF22       DATE_COEFF22;
    U_DATE_COEFF23       DATE_COEFF23;
    U_DATE_COEFF24       DATE_COEFF24;
    U_DATE_COEFF25       DATE_COEFF25;
    U_DATE_COEFF26       DATE_COEFF26;
    U_DATE_COEFF27       DATE_COEFF27;
    U_DATE_COEFF28       DATE_COEFF28;
    U_DATE_COEFF29       DATE_COEFF29;
    U_DATE_COEFF30       DATE_COEFF30;
    unsigned int         Reserved_173;
    U_DATE_ISRMASK       DATE_ISRMASK;
    U_DATE_ISRSTATE      DATE_ISRSTATE;
    U_DATE_ISR           DATE_ISR;
    unsigned int         Reserved_174;
    U_DATE_VERSION       DATE_VERSION;
    U_DATE_COEFF37       DATE_COEFF37;
    U_DATE_COEFF38       DATE_COEFF38;
    U_DATE_COEFF39       DATE_COEFF39;
    U_DATE_COEFF40       DATE_COEFF40;
    U_DATE_COEFF41       DATE_COEFF41;
    U_DATE_COEFF42       DATE_COEFF42;
    unsigned int         Reserved_175[5];
    U_DATE_DACDET1       DATE_DACDET1;
    U_DATE_DACDET2       DATE_DACDET2;
    U_DATE_COEFF50       DATE_COEFF50;
    U_DATE_COEFF51       DATE_COEFF51;
    U_DATE_COEFF52       DATE_COEFF52;
    U_DATE_COEFF53       DATE_COEFF53;
    U_DATE_COEFF54       DATE_COEFF54;
    U_DATE_COEFF55       DATE_COEFF55;
    U_DATE_COEFF56       DATE_COEFF56;
    U_DATE_COEFF57       DATE_COEFF57;
    U_DATE_COEFF58       DATE_COEFF58;
    U_DATE_COEFF59       DATE_COEFF59;
    U_DATE_COEFF60       DATE_COEFF60;
    U_DATE_COEFF61       DATE_COEFF61;
    U_DATE_COEFF62       DATE_COEFF62;
    U_DATE_COEFF63       DATE_COEFF63;
    U_DATE_COEFF64       DATE_COEFF64;
    U_DATE_COEFF65       DATE_COEFF65;
    U_DATE_COEFF66       DATE_COEFF66;
    U_DATE_COEFF67       DATE_COEFF67;
    U_DATE_COEFF68       DATE_COEFF68;
    U_DATE_COEFF69       DATE_COEFF69;
    U_DATE_COEFF70       DATE_COEFF71;
    U_DATE_COEFF72       DATE_COEFF72;
    U_DATE_COEFF73       DATE_COEFF73;
    U_DATE_COEFF74       DATE_COEFF74;
    U_DATE_COEFF75       DATE_COEFF75;
    U_DATE_COEFF76       DATE_COEFF76;
    U_DATE_COEFF77       DATE_COEFF77;
    U_DATE_COEFF78       DATE_COEFF78;
    U_DATE_COEFF79       DATE_COEFF79;
    U_DATE_COEFF80       DATE_COEFF80;
    U_DATE_COEFF81       DATE_COEFF81;
    U_DATE_COEFF82       DATE_COEFF82;
    U_DATE_COEFF83       DATE_COEFF83;
    U_DATE_COEFF84       DATE_COEFF84;
} VOU_REGS_S;

// Declare the struct pointor of the module VDP
#ifdef __cplusplus
#if __cplusplus
	extern "C"{
#endif
#endif /* End of #ifdef __cplusplus */

#endif /* __VOU_REG_H__ */
