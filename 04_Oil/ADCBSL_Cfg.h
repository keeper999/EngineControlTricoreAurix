/******************************************************************************/
/* !Layer           : MCAL                                                    */
/* !Component       : ADCBSL                                                  */
/* !Description     : Analog digital converter                                */
/*                                                                            */
/* !File            : ADCBSL_Cfg.h                                            */
/* !Description     : ADCBSL configuration                                    */
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
 * %PID: P2017_BSW:A17857.A-SRC;4 %
 * %PCMS_HEADER_SUBSTITUTION_END:%
*******************************************************************************/
/** 11/10/14, 10:16:14: generated by Genecode v2.6.0.0                        */
/******************************************************************************/

#ifndef ADCBSL_CFG_H
#define ADCBSL_CFG_H

#include "Std_Types.h"
#include "IfxVadc_reg.h"

/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/

#define ADCBSL_U8NUMBER_OF_GROUPS 6

/* Conversion result of channel x of Hw unit y is put in register GyRESx      */
#define AN_WG_POS_RES VADC_G0_RES0.U
#define AN_BATT_VOLTAGE_RES VADC_G0_RES1.U
#define AN_SNS_SUP_1_RES VADC_G0_RES2.U
#define ANI_MAIN_UPS_LBDA_SNS_HEAT_RES VADC_G0_RES3.U
#define AN_MAIN_DWN_LBDA_SNS_RES VADC_G0_RES4.U
#define AN_THR_POS_SNS_1_RES VADC_G0_RES5.U
#define AN_INT_IGBT_TMP_RES VADC_G0_RES6.U
#define AN_RAIL_HP_PRS_RES VADC_G0_RES7.U
#define AN_FAN1_DIAG_INPUT_RES VADC_G1_RES1.U
#define AN_SNS_SUP_2_RES VADC_G1_RES2.U
#define ANI_MAIN_DWN_LBDA_SNS_HEAT_RES VADC_G1_RES3.U
#define AN_MAIN_UPS_LBDA_SNS_RES VADC_G1_RES4.U
#define AN_THR_POS_SNS_2_RES VADC_G1_RES5.U
#define AN_INT_ECU_TMP_RES VADC_G1_RES6.U
#define AN_VBOOST_RES VADC_G1_RES7.U
#define AN_BUCK_5V7_RES VADC_G2_RES0.U
#define ANI_IGN_COIL_3_RES VADC_G2_RES1.U
#define AN_SNS_SUP_3_RES VADC_G2_RES2.U
#define ANI_IGN_COIL_1_RES VADC_G2_RES3.U
#define AN_MASTERVAC_PRS_RES VADC_G2_RES4.U
#define AN_PED_POS_SNS_2_REDUNDANT_RES VADC_G2_RES5.U
#define AN_OIL_LVL_RES VADC_G2_RES6.U
#define AN_MAIN_SUP_RES VADC_G3_RES2.U
#define ANI_IGN_COIL_2_RES VADC_G3_RES3.U
#define AN_ENG_WAT_TMP_RES VADC_G3_RES4.U
#define AN_AIR_CONDITIONING_PRS_RES VADC_G3_RES5.U
#define AN_OIL_PRS_RES VADC_G3_RES6.U
#define AN_INT_ATMO_PRS_P0_RES VADC_G3_RES7.U
#define AN_GPF_DELTA_PRS_RES VADC_G4_RES0.U
#define AN_INTK_AIR_PRS_P2_RES VADC_G4_RES1.U
#define AN_PED_POS_SNS_2_RES VADC_G4_RES2.U
#define AN_VDD3A_CJ135_RES VADC_G4_RES3.U
#define AN_SPARE_4_RES VADC_G4_RES6.U
#define AN_SPARE_2_RES VADC_G4_RES7.U
#define AN_INTK_AIR_PRS_DWN_P2_RES VADC_G5_RES0.U
#define AN_INTK_AIR_TMP_T2_RES VADC_G5_RES1.U
#define AN_PED_POS_SNS_1_RES VADC_G5_RES2.U
#define AN_BICD_FBACK_INFO_RES VADC_G5_RES3.U
#define AN_PED_HARD_POINT_RES VADC_G5_RES4.U
#define AN_THR_POS_SNS_2_REDUNDANT_RES VADC_G5_RES5.U
#define AN_SPARE_3_RES VADC_G5_RES6.U
#define AN_SPARE_1_RES VADC_G5_RES7.U

/* Desired resolution for all ADCBSL channel                                  */
#define ADCBSL_u16AN_WG_POS_DESIRED_RESOL 4096
#define ADCBSL_u16AN_BATT_VOLTAGE_DESIRED_RESOL 4096
#define ADCBSL_u16AN_SNS_SUP_1_DESIRED_RESOL 4096
#define ADCBSL_u16ANI_MAIN_UPS_LBDA_SNS_HEAT_DESIRED_RESOL 4096
#define ADCBSL_u16AN_MAIN_DWN_LBDA_SNS_DESIRED_RESOL 4096
#define ADCBSL_u16AN_THR_POS_SNS_1_DESIRED_RESOL 4096
#define ADCBSL_u16AN_INT_IGBT_TMP_DESIRED_RESOL 4096
#define ADCBSL_u16AN_RAIL_HP_PRS_DESIRED_RESOL 4096
#define ADCBSL_u16AN_FAN1_DIAG_INPUT_DESIRED_RESOL 4096
#define ADCBSL_u16AN_SNS_SUP_2_DESIRED_RESOL 4096
#define ADCBSL_u16ANI_MAIN_DWN_LBDA_SNS_HEAT_DESIRED_RESOL 4096
#define ADCBSL_u16AN_MAIN_UPS_LBDA_SNS_DESIRED_RESOL 4096
#define ADCBSL_u16AN_THR_POS_SNS_2_DESIRED_RESOL 4096
#define ADCBSL_u16AN_INT_ECU_TMP_DESIRED_RESOL 4096
#define ADCBSL_u16AN_VBOOST_DESIRED_RESOL 4096
#define ADCBSL_u16AN_BUCK_5V7_DESIRED_RESOL 4096
#define ADCBSL_u16ANI_IGN_COIL_3_DESIRED_RESOL 1024
#define ADCBSL_u16AN_SNS_SUP_3_DESIRED_RESOL 4096
#define ADCBSL_u16ANI_IGN_COIL_1_DESIRED_RESOL 1024
#define ADCBSL_u16AN_MASTERVAC_PRS_DESIRED_RESOL 4096
#define ADCBSL_u16AN_PED_POS_SNS_2_REDUNDANT_DESIRED_RESOL 4096
#define ADCBSL_u16AN_OIL_LVL_DESIRED_RESOL 4096
#define ADCBSL_u16AN_MAIN_SUP_DESIRED_RESOL 4096
#define ADCBSL_u16ANI_IGN_COIL_2_DESIRED_RESOL 1024
#define ADCBSL_u16AN_ENG_WAT_TMP_DESIRED_RESOL 4096
#define ADCBSL_u16AN_AIR_CONDITIONING_PRS_DESIRED_RESOL 4096
#define ADCBSL_u16AN_OIL_PRS_DESIRED_RESOL 4096
#define ADCBSL_u16AN_INT_ATMO_PRS_P0_DESIRED_RESOL 4096
#define ADCBSL_u16AN_GPF_DELTA_PRS_DESIRED_RESOL 4096
#define ADCBSL_u16AN_INTK_AIR_PRS_P2_DESIRED_RESOL 4096
#define ADCBSL_u16AN_PED_POS_SNS_2_DESIRED_RESOL 4096
#define ADCBSL_u16AN_VDD3A_CJ135_DESIRED_RESOL 4096
#define ADCBSL_u16AN_SPARE_4_DESIRED_RESOL 4096
#define ADCBSL_u16AN_SPARE_2_DESIRED_RESOL 4096
#define ADCBSL_u16AN_INTK_AIR_PRS_DWN_P2_DESIRED_RESOL 4096
#define ADCBSL_u16AN_INTK_AIR_TMP_T2_DESIRED_RESOL 4096
#define ADCBSL_u16AN_PED_POS_SNS_1_DESIRED_RESOL 4096
#define ADCBSL_u16AN_BICD_FBACK_INFO_DESIRED_RESOL 4096
#define ADCBSL_u16AN_PED_HARD_POINT_DESIRED_RESOL 4096
#define ADCBSL_u16AN_THR_POS_SNS_2_REDUNDANT_DESIRED_RESOL 4096
#define ADCBSL_u16AN_SPARE_3_DESIRED_RESOL 4096
#define ADCBSL_u16AN_SPARE_1_DESIRED_RESOL 4096


#endif /* ADCBSL_CFG_H */

/*------------------------------ end of file ---------------------------------*/
