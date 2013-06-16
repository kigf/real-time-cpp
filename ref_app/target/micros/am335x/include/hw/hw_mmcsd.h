/*
 * hw_mmcsd.h
 */
/* Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 * ALL RIGHTS RESERVED
 */

#ifndef _HW__MMCSD_H_
#define _HW__MMCSD_H_

#ifdef __cplusplus
extern "C" {
#endif

#define MMCSD_MMCCTL		(0x0)
#define MMCSD_MMCCLK		(0x4)
#define MMCSD_MMCST0		(0x8)
#define MMCSD_MMCST1		(0xC)
#define MMCSD_MMCIM		(0x10)
#define MMCSD_MMCTOR		(0x14)
#define MMCSD_MMCTOD		(0x18)
#define MMCSD_MMCBLEN		(0x1C)
#define MMCSD_MMCNBLK		(0x20)
#define MMCSD_MMCNBLC		(0x24)
#define MMCSD_MMCDRR		(0x28)
#define MMCSD_MMCDXR		(0x2C)
#define MMCSD_MMCCMD		(0x30)
#define MMCSD_MMCARGHL		(0x34)
#define MMCSD_MMCRSP01		(0x38)
#define MMCSD_MMCRSP23		(0x3C)
#define MMCSD_MMCRSP45		(0x40)
#define MMCSD_MMCRSP67		(0x44)
#define MMCSD_MMCDRSP		(0x48)
#define MMCSD_MMCCIDX		(0x50)
#define MMCSD_SDIOCTL		(0x64)
#define MMCSD_SDIOST0		(0x68)
#define MMCSD_SDIOIEN		(0x6C)
#define MMCSD_SDIOIST		(0x70)
#define MMCSD_MMCFIFOCTL	(0x74)

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* MMCCTL */


#define MMCSD_MMCCTL_PERMDX     (0x00000400u)
#define MMCSD_MMCCTL_PERMDX_SHIFT    (0x0000000Au)

#define MMCSD_MMCCTL_PERMDR     (0x00000200u)
#define MMCSD_MMCCTL_PERMDR_SHIFT    (0x00000009u)

/* WIDTH0 and WIDTH1 */


#define MMCSD_MMCCTL_WIDTH1_WIDTH0 (0x0104u)
#define MMCSD_MMCCTL_WIDTH1_WIDTH0_SHIFT (0x0002u)
/*----WIDTH1_WIDTH0 Tokens----*/
#define MMCSD_MMCCTL_WIDTH1_WIDTH0_1BIT (0x0000u)
#define MMCSD_MMCCTL_WIDTH1_WIDTH0_4BIT (0x0004u)
#define MMCSD_MMCCTL_WIDTH1_WIDTH0_8BIT (0x0100u)

/*NOTE : The WIDTH1 value should be used in conjunction
 with WIDTH0 to set appropriate data width*/
#define MMCSD_MMCCTL_WIDTH1       (0x00000100u)
#define MMCSD_MMCCTL_WIDTH1_SHIFT      (0x00000008u)

#define MMCSD_MMCCTL_DATEG      (0x000000C0u)
#define MMCSD_MMCCTL_DATEG_SHIFT     (0x00000006u)
/*----DATEG Tokens----*/
#define MMCSD_MMCCTL_DATEG_R_EDGE    (0x00000001u)
#define MMCSD_MMCCTL_DATEG_F_EDGE    (0x00000002u)
#define MMCSD_MMCCTL_DATEG_RF_EDGE   (0x00000003u)

/*NOTE : The WIDTH0 value should be used in conjunction
 with WIDTH1 to set appropriate data width*/
#define MMCSD_MMCCTL_WIDTH0       (0x00000004u)
#define MMCSD_MMCCTL_WIDTH0_SHIFT      (0x00000002u)
/*----WIDTH0 Tokens----*/
#define MMCSD_MMCCTL_WIDTH0_1BIT_8BIT  (0x00000000u)
#define MMCSD_MMCCTL_WIDTH0_4BIT       (0x00000004u)

#define MMCSD_MMCCTL_CMDRST     (0x00000002u)
#define MMCSD_MMCCTL_CMDRST_SHIFT    (0x00000001u)

#define MMCSD_MMCCTL_DATRST     (0x00000001u)
#define MMCSD_MMCCTL_DATRST_SHIFT    (0x00000000u)


/* MMCCLK */


#define MMCSD_MMCCLK_DIV4       (0x00000200u)
#define MMCSD_MMCCLK_DIV4_SHIFT      (0x00000009u)

#define MMCSD_MMCCLK_CLKEN      (0x00000100u)
#define MMCSD_MMCCLK_CLKEN_SHIFT     (0x00000008u)

#define MMCSD_MMCCLK_CLKRT      (0x000000FFu)
#define MMCSD_MMCCLK_CLKRT_SHIFT     (0x00000000u)


/* MMCST0 */


#define MMCSD_MMCST0_CCS        (0x00002000u)
#define MMCSD_MMCST0_CCS_SHIFT       (0x0000000Du)

#define MMCSD_MMCST0_TRNDNE     (0x00001000u)
#define MMCSD_MMCST0_TRNDNE_SHIFT    (0x0000000Cu)

#define MMCSD_MMCST0_DATED      (0x00000800u)
#define MMCSD_MMCST0_DATED_SHIFT     (0x0000000Bu)

#define MMCSD_MMCST0_DRRDY      (0x00000400u)
#define MMCSD_MMCST0_DRRDY_SHIFT     (0x0000000Au)

#define MMCSD_MMCST0_DXRDY      (0x00000200u)
#define MMCSD_MMCST0_DXRDY_SHIFT     (0x00000009u)

#define MMCSD_MMCST0_CRCRS      (0x00000080u)
#define MMCSD_MMCST0_CRCRS_SHIFT     (0x00000007u)

#define MMCSD_MMCST0_CRCRD      (0x00000040u)
#define MMCSD_MMCST0_CRCRD_SHIFT     (0x00000006u)

#define MMCSD_MMCST0_CRCWR      (0x00000020u)
#define MMCSD_MMCST0_CRCWR_SHIFT     (0x00000005u)

#define MMCSD_MMCST0_TOUTRS     (0x00000010u)
#define MMCSD_MMCST0_TOUTRS_SHIFT    (0x00000004u)

#define MMCSD_MMCST0_TOUTRD     (0x00000008u)
#define MMCSD_MMCST0_TOUTRD_SHIFT    (0x00000003u)

#define MMCSD_MMCST0_RSPDNE     (0x00000004u)
#define MMCSD_MMCST0_RSPDNE_SHIFT    (0x00000002u)

#define MMCSD_MMCST0_BSYDNE     (0x00000002u)
#define MMCSD_MMCST0_BSYDNE_SHIFT    (0x00000001u)

#define MMCSD_MMCST0_DATDNE     (0x00000001u)
#define MMCSD_MMCST0_DATDNE_SHIFT    (0x00000000u)


/* MMCST1 */


#define MMCSD_MMCST1_FIFOFUL    (0x00000040u)
#define MMCSD_MMCST1_FIFOFUL_SHIFT   (0x00000006u)

#define MMCSD_MMCST1_FIFOEMP    (0x00000020u)
#define MMCSD_MMCST1_FIFOEMP_SHIFT   (0x00000005u)

#define MMCSD_MMCST1_DAT3ST     (0x00000010u)
#define MMCSD_MMCST1_DAT3ST_SHIFT    (0x00000004u)

#define MMCSD_MMCST1_DRFUL      (0x00000008u)
#define MMCSD_MMCST1_DRFUL_SHIFT     (0x00000003u)

#define MMCSD_MMCST1_DXEMP      (0x00000004u)
#define MMCSD_MMCST1_DXEMP_SHIFT     (0x00000002u)

#define MMCSD_MMCST1_CLKSTP     (0x00000002u)
#define MMCSD_MMCST1_CLKSTP_SHIFT    (0x00000001u)

#define MMCSD_MMCST1_BUSY       (0x00000001u)
#define MMCSD_MMCST1_BUSY_SHIFT      (0x00000000u)


/* MMCIM */


#define MMCSD_MMCIM_ECCS        (0x00002000u)
#define MMCSD_MMCIM_ECCS_SHIFT       (0x0000000Du)

#define MMCSD_MMCIM_ETRNDNE     (0x00001000u)
#define MMCSD_MMCIM_ETRNDNE_SHIFT    (0x0000000Cu)

#define MMCSD_MMCIM_EDATED      (0x00000800u)
#define MMCSD_MMCIM_EDATED_SHIFT     (0x0000000Bu)

#define MMCSD_MMCIM_EDRRDY      (0x00000400u)
#define MMCSD_MMCIM_EDRRDY_SHIFT     (0x0000000Au)

#define MMCSD_MMCIM_EDXRDY      (0x00000200u)
#define MMCSD_MMCIM_EDXRDY_SHIFT     (0x00000009u)

#define MMCSD_MMCIM_ESPIERR     (0x00000100u)
#define MMCSD_MMCIM_ESPIERR_SHIFT    (0x00000008u)

#define MMCSD_MMCIM_ECRCRS      (0x00000080u)
#define MMCSD_MMCIM_ECRCRS_SHIFT     (0x00000007u)

#define MMCSD_MMCIM_ECRCRD      (0x00000040u)
#define MMCSD_MMCIM_ECRCRD_SHIFT     (0x00000006u)

#define MMCSD_MMCIM_ECRCWR      (0x00000020u)
#define MMCSD_MMCIM_ECRCWR_SHIFT     (0x00000005u)

#define MMCSD_MMCIM_ETOUTRS     (0x00000010u)
#define MMCSD_MMCIM_ETOUTRS_SHIFT    (0x00000004u)

#define MMCSD_MMCIM_ETOUTRD     (0x00000008u)
#define MMCSD_MMCIM_ETOUTRD_SHIFT    (0x00000003u)

#define MMCSD_MMCIM_ERSPDNE     (0x00000004u)
#define MMCSD_MMCIM_ERSPDNE_SHIFT    (0x00000002u)

#define MMCSD_MMCIM_EBSYDNE     (0x00000002u)
#define MMCSD_MMCIM_EBSYDNE_SHIFT    (0x00000001u)

#define MMCSD_MMCIM_EDATDNE     (0x00000001u)
#define MMCSD_MMCIM_EDATDNE_SHIFT    (0x00000000u)


/* MMCTOR */


#define MMCSD_MMCTOR_TOD_25_16  (0x0003FF00u)
#define MMCSD_MMCTOR_TOD_25_16_SHIFT (0x00000008u)

#define MMCSD_MMCTOR_TOR        (0x000000FFu)
#define MMCSD_MMCTOR_TOR_SHIFT       (0x00000000u)


/* MMCTOD */


#define MMCSD_MMCTOD_TOD_15_0   (0x0000FFFFu)
#define MMCSD_MMCTOD_TOD_15_0_SHIFT  (0x00000000u)


/* MMCBLEN */


#define MMCSD_MMCBLEN_BLEN      (0x00000FFFu)
#define MMCSD_MMCBLEN_BLEN_SHIFT     (0x00000000u)


/* MMCNBLK */


#define MMCSD_MMCNBLK_NBLK      (0x0000FFFFu)
#define MMCSD_MMCNBLK_NBLK_SHIFT     (0x00000000u)


/* MMCNBLC */


#define MMCSD_MMCNBLC_NBLC      (0x0000FFFFu)
#define MMCSD_MMCNBLC_NBLC_SHIFT     (0x00000000u)


/* MMCDRR */

#define MMCSD_MMCDRR_DRR        (0xFFFFFFFFu)
#define MMCSD_MMCDRR_DRR_SHIFT       (0x00000000u)


/* MMCDXR */

#define MMCSD_MMCDXR_DXR        (0xFFFFFFFFu)
#define MMCSD_MMCDXR_DXR_SHIFT       (0x00000000u)


/* MMCCMD */


#define MMCSD_MMCCMD_DMATRIG    (0x00010000u)
#define MMCSD_MMCCMD_DMATRIG_SHIFT   (0x00000010u)

#define MMCSD_MMCCMD_DCLR       (0x00008000u)
#define MMCSD_MMCCMD_DCLR_SHIFT      (0x0000000Fu)

#define MMCSD_MMCCMD_INITCK     (0x00004000u)
#define MMCSD_MMCCMD_INITCK_SHIFT    (0x0000000Eu)

#define MMCSD_MMCCMD_WDATX      (0x00002000u)
#define MMCSD_MMCCMD_WDATX_SHIFT     (0x0000000Du)

#define MMCSD_MMCCMD_STRMTP     (0x00001000u)
#define MMCSD_MMCCMD_STRMTP_SHIFT    (0x0000000Cu)

#define MMCSD_MMCCMD_DTRW       (0x00000800u)
#define MMCSD_MMCCMD_DTRW_SHIFT      (0x0000000Bu)

#define MMCSD_MMCCMD_RSPFMT     (0x00000600u)
#define MMCSD_MMCCMD_RSPFMT_SHIFT    (0x00000009u)
/*----RSPFMT Tokens----*/
#define MMCSD_MMCCMD_RSPFMT_NORSP    (0x00000000u)
#define MMCSD_MMCCMD_RSPFMT_R1       (0x00000001u)
#define MMCSD_MMCCMD_RSPFMT_R2       (0x00000002u)
#define MMCSD_MMCCMD_RSPFMT_R3       (0x00000003u)
#define MMCSD_MMCCMD_RSPFMT_R4       (0x00000001u)
#define MMCSD_MMCCMD_RSPFMT_R5       (0x00000001u)
#define MMCSD_MMCCMD_RSPFMT_R6       (0x00000001u)

#define MMCSD_MMCCMD_BSYEXP     (0x00000100u)
#define MMCSD_MMCCMD_BSYEXP_SHIFT    (0x00000008u)

#define MMCSD_MMCCMD_PPLEN      (0x00000080u)
#define MMCSD_MMCCMD_PPLEN_SHIFT     (0x00000007u)


#define MMCSD_MMCCMD_CMD        (0x0000003Fu)
#define MMCSD_MMCCMD_CMD_SHIFT       (0x00000000u)


/* MMCARGHL */

#define MMCSD_MMCARGHL_ARGH     (0xFFFF0000u)
#define MMCSD_MMCARGHL_ARGH_SHIFT    (0x00000010u)

#define MMCSD_MMCARGHL_ARGL     (0x0000FFFFu)
#define MMCSD_MMCARGHL_ARGL_SHIFT    (0x00000000u)


/* MMCRSP01 */

#define MMCSD_MMCRSP01_MMCRSP1  (0xFFFF0000u)
#define MMCSD_MMCRSP01_MMCRSP1_SHIFT (0x00000010u)

#define MMCSD_MMCRSP01_MMCRSP0  (0x0000FFFFu)
#define MMCSD_MMCRSP01_MMCRSP0_SHIFT (0x00000000u)


/* MMCRSP23 */

#define MMCSD_MMCRSP23_MMCRSP3  (0xFFFF0000u)
#define MMCSD_MMCRSP23_MMCRSP3_SHIFT (0x00000010u)

#define MMCSD_MMCRSP23_MMCRSP2  (0x0000FFFFu)
#define MMCSD_MMCRSP23_MMCRSP2_SHIFT (0x00000000u)


/* MMCRSP45 */

#define MMCSD_MMCRSP45_MMCRSP5  (0xFFFF0000u)
#define MMCSD_MMCRSP45_MMCRSP5_SHIFT (0x00000010u)

#define MMCSD_MMCRSP45_MMCRSP4  (0x0000FFFFu)
#define MMCSD_MMCRSP45_MMCRSP4_SHIFT (0x00000000u)


/* MMCRSP67 */

#define MMCSD_MMCRSP67_MMCRSP7  (0xFFFF0000u)
#define MMCSD_MMCRSP67_MMCRSP7_SHIFT (0x00000010u)

#define MMCSD_MMCRSP67_MMCRSP6  (0x0000FFFFu)
#define MMCSD_MMCRSP67_MMCRSP6_SHIFT (0x00000000u)


/* MMCDRSP */


#define MMCSD_MMCDRSP_DRSP      (0x000000FFu)
#define MMCSD_MMCDRSP_DRSP_SHIFT     (0x00000000u)


/* MMCCIDX */


#define MMCSD_MMCCIDX_STRT      (0x00000080u)
#define MMCSD_MMCCIDX_STRT_SHIFT     (0x00000007u)

#define MMCSD_MMCCIDX_XMIT      (0x00000040u)
#define MMCSD_MMCCIDX_XMIT_SHIFT     (0x00000006u)

#define MMCSD_MMCCIDX_CIDX      (0x0000003Fu)
#define MMCSD_MMCCIDX_CIDX_SHIFT     (0x00000000u)


/* SDIOCTL */


#define MMCSD_SDIOCTL_RDWTCR    (0x00000002u)
#define MMCSD_SDIOCTL_RDWTCR_SHIFT   (0x00000001u)

#define MMCSD_SDIOCTL_RDWTRQ    (0x00000001u)
#define MMCSD_SDIOCTL_RDWTRQ_SHIFT   (0x00000000u)


/* SDIOST0 */


#define MMCSD_SDIOST0_RDWTST    (0x00000004u)
#define MMCSD_SDIOST0_RDWTST_SHIFT   (0x00000002u)

#define MMCSD_SDIOST0_INTPRD    (0x00000002u)
#define MMCSD_SDIOST0_INTPRD_SHIFT   (0x00000001u)

#define MMCSD_SDIOST0_DAT1      (0x00000001u)
#define MMCSD_SDIOST0_DAT1_SHIFT     (0x00000000u)


/* SDIOIEN */


#define MMCSD_SDIOIEN_RWSEN     (0x00000002u)
#define MMCSD_SDIOIEN_RWSEN_SHIFT    (0x00000001u)

#define MMCSD_SDIOIEN_IOINTEN   (0x00000001u)
#define MMCSD_SDIOIEN_IOINTEN_SHIFT  (0x00000000u)


/* SDIOIST */


#define MMCSD_SDIOIST_RWS       (0x00000002u)
#define MMCSD_SDIOIST_RWS_SHIFT      (0x00000001u)

#define MMCSD_SDIOIST_IOINT     (0x00000001u)
#define MMCSD_SDIOIST_IOINT_SHIFT    (0x00000000u)


/* MMCFIFOCTL */


#define MMCSD_MMCFIFOCTL_ACCWD  (0x00000018u)
#define MMCSD_MMCFIFOCTL_ACCWD_SHIFT (0x00000003u)
/*----ACCWD Tokens----*/
#define MMCSD_MMCFIFOCTL_ACCWD_4BYTES (0x00000000u)
#define MMCSD_MMCFIFOCTL_ACCWD_3BYTES (0x00000001u)
#define MMCSD_MMCFIFOCTL_ACCWD_2BYTES (0x00000002u)
#define MMCSD_MMCFIFOCTL_ACCWD_1BYTE (0x00000003u)

#define MMCSD_MMCFIFOCTL_FIFOLEV (0x00000004u)
#define MMCSD_MMCFIFOCTL_FIFOLEV_SHIFT (0x00000002u)

#define MMCSD_MMCFIFOCTL_FIFODIR (0x00000002u)
#define MMCSD_MMCFIFOCTL_FIFODIR_SHIFT (0x00000001u)

#define MMCSD_MMCFIFOCTL_FIFORST (0x00000001u)
#define MMCSD_MMCFIFOCTL_FIFORST_SHIFT (0x00000000u)

#ifdef __cplusplus
}
#endif

#endif
