/******************************************************************************/
/* !Layer           : HAL                                                     */
/* !Component       : CRKHAL                                                  */
/* !Description     : MCS Driver                                              */
/*                                                                            */
/* !File            : MCS0.h                                                  */
/* !Description     : Definition of data of MCS Component                     */
/*                                                                            */
/* !Reference       :                                                         */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT VALEO all rights reserved                                        */
/******************************************************************************/
/* Dimension Informations
 * %PCMS_HEADER_SUBSTITUTION_START:%
 * The PID has this format: <Product ID>:<Item ID>.<Variant>-<Item Type>;<Revision>
 * %PID: P2017_BSW:A18517.A-SRC;4 %
 * %PCMS_HEADER_SUBSTITUTION_END:%
 ******************************************************************************/

/* H_File for initialisation of MCS 			 */
/* generated by MCS assembler CASPR-MCS-1.1.6 */
/* Last update : v02.13 - 21.06.14 - added condition for checking reliable by bidircfgen */

#define MCS0_CH_INIT_RAM_LEN 299
#define MCS0_tsk7_done 0x4a4
#define MCS0_tsk7_init 0x4a4
#define MCS0_tsk6_done 0x49c
#define MCS0_tsk6_main 0x49c
#define MCS0_tsk6_init 0x49c
#define MCS0_tsk5_done 0x494
#define MCS0_tsk5_main 0x494
#define MCS0_tsk5_init 0x494
#define MCS0_tsk4_done 0x48c
#define MCS0_tsk4_main 0x48c
#define MCS0_tsk4_init 0x48c
#define MCS0_tsk3_done 0x484
#define MCS0_tsk3_main 0x484
#define MCS0_tsk3_init 0x484
#define MCS0_tsk2_done 0x47c
#define MCS0_tsk2_main 0x47c
#define MCS0_tsk2_init 0x47c
#define MCS0_tsk1_done 0x474
#define MCS0_tsk1_main 0x474
#define MCS0_tsk1_init 0x474
#define MCS0_tsk0_done 0x46c
#define MCS0_updateglobalteethoffset 0x450
#define MCS0_resetglobaloffsetcnt 0x440
#define MCS0_raiseintr 0x430
#define MCS0_taskintrcheck 0x418
#define MCS0_bidir_fwmng_oor 0x408
#define MCS0_bidir_bwmng_oor 0x3f4
#define MCS0_bidir_oorcounter 0x3d4
#define MCS0_bidir_oorlmtcheck 0x3c0
#define MCS0_checkbwdor 0x3ac
#define MCS0_bidir_diagnostic 0x374
#define MCS0_bidir_diagnosticmng 0x354
#define MCS0_bidir_chmndmng 0x334
#define MCS0_bidir3fwdtethmng 0x314
#define MCS0_bidir_fwmng 0x304
#define MCS0_bidir_bwmng 0x2f0
#define MCS0_bidir_cntmng 0x2a0
#define MCS0_bidir_setint 0x290
#define MCS0_bidir_cfgthmireset 0x27c
#define MCS0_bidir_cfgthmiload 0x268
#define MCS0_bidir_gretermin 0x258
#define MCS0_bidir_lessmin 0x248
#define MCS0_bidir_chkmin 0x214
#define MCS0_bidircheck 0x204
#define MCS0_checkengrun 0x1e4
#define MCS0_gentoothtaskint 0x1c0
#define MCS0_label2 0x198
#define MCS0_noltoo1event 0x178
#define MCS0_step2 0x160
#define MCS0_tsk0_main 0xb4
#define MCS0_tsk0_init 0xa0
#define MCS0_t_five 0x9c
#define MCS0_t_four 0x98
#define MCS0_t_three 0x94
#define MCS0_t_two 0x90
#define MCS0_engrunthd 0x8c
#define MCS0_bidirrelable 0x88
#define MCS0_bidircfgen 0x84
#define MCS0_bidirmaxdur 0x80
#define MCS0_ltoo1event 0x7c
#define MCS0_toothcnt 0x78
#define MCS0_prevtoothdur 0x74
#define MCS0_bidirfwmaxcnt 0x70
#define MCS0_bidirchangminen 0x6c
#define MCS0_pulsediagcounter 0x68
#define MCS0_oorpulsecounter 0x64
#define MCS0_bidirbwdpulsedurmax 0x60
#define MCS0_bidirbwdpulsedurmin 0x5c
#define MCS0_bidirfwdpulsedurmax 0x58
#define MCS0_bidirfwdpulsedurmin 0x54
#define MCS0_teethaftrlastsyncloss 0x50
#define MCS0_globalteethoffset 0x4c
#define MCS0_globaloffsetcnt 0x48
#define MCS0_crankduration 0x44
#define MCS0_crankacttoinacttime 0x40
#define MCS0_enginerunthd 0x3c
#define MCS0_enginespeedthd 0x38
#define MCS0_bidirbwdcnt 0x34
#define MCS0_bidirfwdcnt 0x30
#define MCS0_bidirdiaen 0x2c
#define MCS0_bidiren 0x28
#define MCS0_tskintren 0x24
#define MCS0_enginestatus 0x20


/*------------------------------ end of file ------------------------------*/