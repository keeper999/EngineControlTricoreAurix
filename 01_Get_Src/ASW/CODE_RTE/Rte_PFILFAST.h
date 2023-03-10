#if !defined(RTE_PFILFAST_H)
#define RTE_PFILFAST_H

/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2013 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /*
  * This file contains Rte component declarations for component type PFILFAST
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:30 CET 2014. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <Rte_Intern_Application_Core1.h>
#include <Rte_Main.h>         /* RTE main header file */
#include <Rte_PFILFAST_Type.h> /* RTE application types header file */
#include <Rte_Hook.h> /* RTE VFB trace hooks header file */

/*==================[macros]=================================================*/

#if (!defined RTE_CORE) /* if included by software component */

#if (!defined RTE_APPLICATION_HEADER_FILE_H) /* prevent double inclusion */
#define RTE_APPLICATION_HEADER_FILE_H
#else
#error Multiple application header files included.
#endif /* if !defined( RTE_APPLICATION_HEADER_FILE_H ) */

#endif

/*------------------[API mapping]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
#if !defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_tqEfcFil)
#define Rte_Write_P_CoCha_tqEfcLim_CoCha_tqEfcLim(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_230.value = (data), RTE_E_OK)

#define Rte_Write_P_CoCha_bRstAOS_CoCha_bRstAOS(data) Rte_Write_PFILFAST_P_CoCha_bRstAOS_CoCha_bRstAOS(data)

#define Rte_Write_P_CoCha_bTqAccuReq_CoCha_bTqAccuReq(data) Rte_Write_PFILFAST_P_CoCha_bTqAccuReq_CoCha_bTqAccuReq(data)

#define Rte_Write_P_CoCha_bTqReqMSR_CoCha_bTqReqMSR(data) Rte_Write_PFILFAST_P_CoCha_bTqReqMSR_CoCha_bTqReqMSR(data)

#define Rte_Write_P_CoCha_bTqReqASR_CoCha_bTqReqASR(data) Rte_Write_PFILFAST_P_CoCha_bTqReqASR_CoCha_bTqReqASR(data)

#define Rte_Write_P_CoCha_bInhEGR_CoCha_bInhEGR(data) Rte_Write_PFILFAST_P_CoCha_bInhEGR_CoCha_bInhEGR(data)

#define Rte_Write_P_CoCha_tqEfcLimTqMaxDyn_CoCha_tqEfcLimTqMaxDyn(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1142.value = (data), RTE_E_OK)

#define Rte_Write_P_CoCha_tqEfcReq_CoCha_tqEfcReq(data) Rte_Write_PFILFAST_P_CoCha_tqEfcReq_CoCha_tqEfcReq(data)

#define Rte_Write_P_CoCha_bTqDynReq_CoCha_bTqDynReq(data) Rte_Write_PFILFAST_P_CoCha_bTqDynReq_CoCha_bTqDynReq(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_PFilFast_001_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_tqEfcFil)
#define Rte_Read_R_EngLim_tqCkEfcChaLim_EngLim_tqCkEfcChaLim(data) Rte_Read_PFILFAST_R_EngLim_tqCkEfcChaLim_EngLim_tqCkEfcChaLim(data)

#define Rte_IsUpdated_R_EngLim_tqCkEfcChaLim_EngLim_tqCkEfcChaLim() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3274.isUpdated)

#define Rte_Read_R_Cha_tqMSRReq_Cha_tqMSRReq(data) Rte_Read_PFILFAST_R_Cha_tqMSRReq_Cha_tqMSRReq(data)

#define Rte_IsUpdated_R_Cha_tqMSRReq_Cha_tqMSRReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3267.isUpdated)

#define Rte_Read_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil(data) Rte_Read_PFILFAST_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil(data)

#define Rte_IsUpdated_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3293.isUpdated)

#define Rte_Read_R_Cha_stTqReq_Cha_stTqReq(data) Rte_Read_PFILFAST_R_Cha_stTqReq_Cha_stTqReq(data)

#define Rte_IsUpdated_R_Cha_stTqReq_Cha_stTqReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3265.isUpdated)

#define Rte_Read_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl(data) Rte_Read_PFILFAST_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl(data)

#define Rte_IsUpdated_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3271.isUpdated)

#define Rte_Read_R_EngLim_tqEfcMaxDynVehSpdCtl_EngLim_tqEfcMaxDynVehSpdCtl(data) Rte_Read_PFILFAST_R_EngLim_tqEfcMaxDynVehSpdCtl_EngLim_tqEfcMaxDynVehSpdCtl(data)

#define Rte_IsUpdated_R_EngLim_tqEfcMaxDynVehSpdCtl_EngLim_tqEfcMaxDynVehSpdCtl() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3275.isUpdated)

#define Rte_Call_R_FRM_bInhESPReq_GetFunctionPermission(Permission) (RE_FRM_bInhESPReq_GetFunctionPermission(Permission), RTE_E_OK)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_PFilFast_001_MSE)
#define Rte_Read_R_Cha_tqDynASRReq_Cha_tqDynASRReq(data) Rte_Read_PFILFAST_R_Cha_tqDynASRReq_Cha_tqDynASRReq(data)

#define Rte_IsUpdated_R_Cha_tqDynASRReq_Cha_tqDynASRReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3266.isUpdated)

#endif
#define Rte_Call_R_PFilFast_GetTimer_1ms_U32_GetTimer_1ms_U32 FRunTime_GetTimer_1ms_U32

#if !defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_CoCha)
#define Rte_Write_P_TqSys_noCylCutAuthIt_TqSys_noCylCutAuthIt(data) Rte_Write_PFILFAST_P_TqSys_noCylCutAuthIt_TqSys_noCylCutAuthIt(data)

#define Rte_Write_P_TqSys_tqIncCllIt_TqSys_tqIncCllIt(data) Rte_Write_PFILFAST_P_TqSys_tqIncCllIt_TqSys_tqIncCllIt(data)

#define Rte_Write_P_TqSys_nEngDeceIni_TqSys_nEngDeceIni(data) Rte_Write_PFILFAST_P_TqSys_nEngDeceIni_TqSys_nEngDeceIni(data)

#define Rte_Write_P_TqSys_stDrivFilCfPha_TqSys_stDrivFilCfPha(data) Rte_Write_PFILFAST_P_TqSys_stDrivFilCfPha_TqSys_stDrivFilCfPha(data)

#define Rte_Write_P_TqSys_bUHFrzReq_TqSys_bUHFrzReq(data) Rte_Write_PFILFAST_P_TqSys_bUHFrzReq_TqSys_bUHFrzReq(data)

#define Rte_Write_P_TqSys_nDif_nEngNTrb_TqSys_nDif_nEngNTrb(data) Rte_Write_PFILFAST_P_TqSys_nDif_nEngNTrb_TqSys_nDif_nEngNTrb(data)

#define Rte_Write_P_TqSys_stDrivFilPhaIt_TqSys_stDrivFilPhaIt(data) Rte_Write_PFILFAST_P_TqSys_stDrivFilPhaIt_TqSys_stDrivFilPhaIt(data)

#define Rte_Write_P_TqSys_bDeceAcvIt_TqSys_bDeceAcvIt(data) Rte_Write_PFILFAST_P_TqSys_bDeceAcvIt_TqSys_bDeceAcvIt(data)

#define Rte_Write_P_TqSys_noGearCordDrivFil_TqSys_noGearCordDrivFil(data) Rte_Write_PFILFAST_P_TqSys_noGearCordDrivFil_TqSys_noGearCordDrivFil(data)

#define Rte_Write_P_TqSys_tiTranCllIt_TqSys_tiTranCllIt(data) Rte_Write_PFILFAST_P_TqSys_tiTranCllIt_TqSys_tiTranCllIt(data)

#define Rte_Write_P_TqSys_bDeceDetAOSIt_TqSys_bDeceDetAOSIt(data) Rte_Write_PFILFAST_P_TqSys_bDeceDetAOSIt_TqSys_bDeceDetAOSIt(data)

#define Rte_Write_P_TqSys_noGearDece_TqSys_noGearDece(data) Rte_Write_PFILFAST_P_TqSys_noGearDece_TqSys_noGearDece(data)

#define Rte_Write_P_TqSys_tqCkDeceIniIt_TqSys_tqCkDeceIniIt(data) Rte_Write_PFILFAST_P_TqSys_tqCkDeceIniIt_TqSys_tqCkDeceIniIt(data)

#define Rte_Write_P_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil(data) Rte_Write_PFILFAST_P_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil(data)

#define Rte_Write_P_TqSys_bAcceClrCrossAOSIt_TqSys_bAcceClrCrossAOSIt(data) Rte_Write_PFILFAST_P_TqSys_bAcceClrCrossAOSIt_TqSys_bAcceClrCrossAOSIt(data)

#define Rte_Write_P_TqSys_tqThdPha3It_TqSys_tqThdPha3It(data) Rte_Write_PFILFAST_P_TqSys_tqThdPha3It_TqSys_tqThdPha3It(data)

#define Rte_Write_P_TqSys_bAcvCllIt_TqSys_bAcvCllIt(data) Rte_Write_PFILFAST_P_TqSys_bAcvCllIt_TqSys_bAcvCllIt(data)

#define Rte_Write_P_TqSys_bAcceDetAOSIt_TqSys_bAcceDetAOSIt(data) Rte_Write_PFILFAST_P_TqSys_bAcceDetAOSIt_TqSys_bAcceDetAOSIt(data)

#define Rte_Write_P_TqSys_bDiDrivFilReq_TqSys_bDiDrivFilReq(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1511.value = (data), RTE_E_OK)

#define Rte_Write_P_TqSys_bClrCrossAcce_TqSys_bClrCrossAcce(data) Rte_Write_PFILFAST_P_TqSys_bClrCrossAcce_TqSys_bClrCrossAcce(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_CoCha) || !defined(RTE_RUNNABLEAPI_RE_PFilFast_001_MSE)
#define Rte_Read_R_Ext_tAir_Ext_tAir(data) Rte_Read_PFILFAST_R_Ext_tAir_Ext_tAir(data)

#define Rte_IsUpdated_R_Ext_tAir_Ext_tAir() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3279.isUpdated)

#define Rte_Read_R_TqClrCros_bAcvClrCross_TqClrCros_bAcvClrCross(data) Rte_Read_PFILFAST_R_TqClrCros_bAcvClrCross_TqClrCros_bAcvClrCross(data)

#define Rte_IsUpdated_R_TqClrCros_bAcvClrCross_TqClrCros_bAcvClrCross() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3282.isUpdated)

#define Rte_Read_R_TqClrCros_stDetClr_TqClrCros_stDetClr(data) Rte_Read_PFILFAST_R_TqClrCros_stDetClr_TqClrCros_stDetClr(data)

#define Rte_IsUpdated_R_TqClrCros_stDetClr_TqClrCros_stDetClr() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3283.isUpdated)

#define Rte_Read_R_TqSys_bTypFu_TqSys_bTypFu(data) Rte_Read_PFILFAST_R_TqSys_bTypFu_TqSys_bTypFu(data)

#define Rte_IsUpdated_R_TqSys_bTypFu_TqSys_bTypFu() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3291.isUpdated)

#define Rte_Read_R_TqCmp_tqSumLossCmp_TqCmp_tqSumLossCmp(data) Rte_Read_PFILFAST_R_TqCmp_tqSumLossCmp_TqCmp_tqSumLossCmp(data)

#define Rte_IsUpdated_R_TqCmp_tqSumLossCmp_TqCmp_tqSumLossCmp() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3285.isUpdated)

#define Rte_Read_R_EngLim_tqCkDrivFil_EngLim_tqCkDrivFil(data) Rte_Read_PFILFAST_R_EngLim_tqCkDrivFil_EngLim_tqCkDrivFil(data)

#define Rte_IsUpdated_R_EngLim_tqCkDrivFil_EngLim_tqCkDrivFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3273.isUpdated)

#define Rte_Read_R_AccP_rAccP_AccP_rAccP(data) Rte_Read_PFILFAST_R_AccP_rAccP_AccP_rAccP(data)

#define Rte_IsUpdated_R_AccP_rAccP_AccP_rAccP() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3264.isUpdated)

#define Rte_Read_R_CoPt_noDrivFilTyp_CoPt_noDrivFilTyp(data) Rte_Read_PFILFAST_R_CoPt_noDrivFilTyp_CoPt_noDrivFilTyp(data)

#define Rte_IsUpdated_R_CoPt_noDrivFilTyp_CoPt_noDrivFilTyp() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3269.isUpdated)

#define Rte_Read_R_Ext_stGBxCf_Ext_stGBxCf(data) Rte_Read_PFILFAST_R_Ext_stGBxCf_Ext_stGBxCf(data)

#define Rte_IsUpdated_R_Ext_stGBxCf_Ext_stGBxCf() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3278.isUpdated)

#define Rte_Read_R_Ext_tCoMes_Ext_tCoMes(data) Rte_Read_PFILFAST_R_Ext_tCoMes_Ext_tCoMes(data)

#define Rte_IsUpdated_R_Ext_tCoMes_Ext_tCoMes() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3280.isUpdated)

#define Rte_Read_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng(data) Rte_Read_PFILFAST_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng(data)

#define Rte_IsUpdated_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3272.isUpdated)

#define Rte_Read_R_Veh_spdVeh_Veh_spdVeh(data) Rte_Read_PFILFAST_R_Veh_spdVeh_Veh_spdVeh(data)

#define Rte_IsUpdated_R_Veh_spdVeh_Veh_spdVeh() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3295.isUpdated)

#define Rte_Read_R_TqSys_idxTqAccu_TqSys_idxTqAccu(data) Rte_Read_PFILFAST_R_TqSys_idxTqAccu_TqSys_idxTqAccu(data)

#define Rte_IsUpdated_R_TqSys_idxTqAccu_TqSys_idxTqAccu() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3292.isUpdated)

#define Rte_Read_R_CoPt_noGearCordDrivFil_CoPt_noGearCordDrivFil(data) Rte_Read_PFILFAST_R_CoPt_noGearCordDrivFil_CoPt_noGearCordDrivFil(data)

#define Rte_IsUpdated_R_CoPt_noGearCordDrivFil_CoPt_noGearCordDrivFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3270.isUpdated)

#define Rte_Read_R_TqDem_bDrivTakeOff_TqDem_bDrivTakeOff(data) Rte_Read_PFILFAST_R_TqDem_bDrivTakeOff_TqDem_bDrivTakeOff(data)

#define Rte_IsUpdated_R_TqDem_bDrivTakeOff_TqDem_bDrivTakeOff() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3286.isUpdated)

#define Rte_Read_R_Ext_bDiDrivFilReq_Ext_bDiDrivFilReq(data) Rte_Read_PFILFAST_R_Ext_bDiDrivFilReq_Ext_bDiDrivFilReq(data)

#define Rte_IsUpdated_R_Ext_bDiDrivFilReq_Ext_bDiDrivFilReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3277.isUpdated)

#define Rte_Read_R_TqCmp_tqACLoss_TqCmp_tqACLoss(data) Rte_Read_PFILFAST_R_TqCmp_tqACLoss_TqCmp_tqACLoss(data)

#define Rte_IsUpdated_R_TqCmp_tqACLoss_TqCmp_tqACLoss() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3284.isUpdated)

#define Rte_Read_R_TqSys_bInjCutDynReq_TqSys_bInjCutDynReq(data) Rte_Read_PFILFAST_R_TqSys_bInjCutDynReq_TqSys_bInjCutDynReq(data)

#define Rte_IsUpdated_R_TqSys_bInjCutDynReq_TqSys_bInjCutDynReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3290.isUpdated)

#define Rte_Read_R_TqCll_bAcvCll_TqCll_bAcvCll(data) Rte_Read_PFILFAST_R_TqCll_bAcvCll_TqCll_bAcvCll(data)

#define Rte_IsUpdated_R_TqCll_bAcvCll_TqCll_bAcvCll() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3281.isUpdated)

#define Rte_Read_R_CoPt_nTrb_CoPt_nTrb(data) Rte_Read_PFILFAST_R_CoPt_nTrb_CoPt_nTrb(data)

#define Rte_IsUpdated_R_CoPt_nTrb_CoPt_nTrb() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3268.isUpdated)

#define Rte_Read_R_TreatTenms_nCkGrdFil_TreatTenms_nCkGrdFil(data) Rte_Read_PFILFAST_R_TreatTenms_nCkGrdFil_TreatTenms_nCkGrdFil(data)

#define Rte_IsUpdated_R_TreatTenms_nCkGrdFil_TreatTenms_nCkGrdFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3294.isUpdated)

#define Rte_Read_R_TqDem_bModSpt_TqDem_bModSpt(data) Rte_Read_PFILFAST_R_TqDem_bModSpt_TqDem_bModSpt(data)

#define Rte_IsUpdated_R_TqDem_bModSpt_TqDem_bModSpt() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3287.isUpdated)

#define Rte_Read_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg(data) Rte_Read_PFILFAST_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg(data)

#define Rte_IsUpdated_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3289.isUpdated)

#define Rte_Read_R_Eng_nCkFil_Eng_nCkFil(data) Rte_Read_PFILFAST_R_Eng_nCkFil_Eng_nCkFil(data)

#define Rte_IsUpdated_R_Eng_nCkFil_Eng_nCkFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3276.isUpdated)

#define Rte_Read_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM(data) Rte_Read_PFILFAST_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM(data)

#define Rte_IsUpdated_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3288.isUpdated)

#define Rte_Call_R_FRM_bDft_spdVeh_GetFunctionPermission(Permission) (RE_FRM_bDft_spdVeh_GetFunctionPermission(Permission), RTE_E_OK)

#endif

#endif

/*------------------[port handle API mapping]--------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*------------------[application errors]-------------------------------------*/

#define RTE_E_IF_CS_FRunTime_1MS_U32_E_NOT_OK 1U

/*------------------[init values]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#define Rte_InitValue_P_CoCha_bInhEGR_CoCha_bInhEGR 0U
#define Rte_InitValue_P_CoCha_bRstAOS_CoCha_bRstAOS 0U
#define Rte_InitValue_P_CoCha_bTqAccuReq_CoCha_bTqAccuReq 0U
#define Rte_InitValue_P_CoCha_bTqDynReq_CoCha_bTqDynReq 0U
#define Rte_InitValue_P_CoCha_bTqReqASR_CoCha_bTqReqASR 0U
#define Rte_InitValue_P_CoCha_bTqReqMSR_CoCha_bTqReqMSR 0U
#define Rte_InitValue_P_CoCha_tqEfcLim_CoCha_tqEfcLim 0
#define Rte_InitValue_P_CoCha_tqEfcLimTqMaxDyn_CoCha_tqEfcLimTqMaxDyn 0
#define Rte_InitValue_P_CoCha_tqEfcReq_CoCha_tqEfcReq 0
#define Rte_InitValue_P_TqSys_bAcceClrCrossAOSIt_TqSys_bAcceClrCrossAOSIt 0U
#define Rte_InitValue_P_TqSys_bAcceDetAOSIt_TqSys_bAcceDetAOSIt 0U
#define Rte_InitValue_P_TqSys_bAcvCllIt_TqSys_bAcvCllIt 0U
#define Rte_InitValue_P_TqSys_bClrCrossAcce_TqSys_bClrCrossAcce 0U
#define Rte_InitValue_P_TqSys_bDeceAcvIt_TqSys_bDeceAcvIt 0U
#define Rte_InitValue_P_TqSys_bDeceDetAOSIt_TqSys_bDeceDetAOSIt 0U
#define Rte_InitValue_P_TqSys_bDiDrivFilReq_TqSys_bDiDrivFilReq 0U
#define Rte_InitValue_P_TqSys_bUHFrzReq_TqSys_bUHFrzReq 0U
#define Rte_InitValue_P_TqSys_nDif_nEngNTrb_TqSys_nDif_nEngNTrb 0
#define Rte_InitValue_P_TqSys_nEngDeceIni_TqSys_nEngDeceIni 0U
#define Rte_InitValue_P_TqSys_noCylCutAuthIt_TqSys_noCylCutAuthIt 0
#define Rte_InitValue_P_TqSys_noGearCordDrivFil_TqSys_noGearCordDrivFil 0U
#define Rte_InitValue_P_TqSys_noGearDece_TqSys_noGearDece 0U
#define Rte_InitValue_P_TqSys_stDrivFilCfPha_TqSys_stDrivFilCfPha 0U
#define Rte_InitValue_P_TqSys_stDrivFilPhaIt_TqSys_stDrivFilPhaIt 0U
#define Rte_InitValue_P_TqSys_tiTranCllIt_TqSys_tiTranCllIt 0U
#define Rte_InitValue_P_TqSys_tqCkDeceIniIt_TqSys_tqCkDeceIniIt 0
#define Rte_InitValue_P_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil 0
#define Rte_InitValue_P_TqSys_tqIncCllIt_TqSys_tqIncCllIt 0U
#define Rte_InitValue_P_TqSys_tqThdPha3It_TqSys_tqThdPha3It 0
#define Rte_InitValue_R_AccP_rAccP_AccP_rAccP 0U
#define Rte_InitValue_R_Cha_stTqReq_Cha_stTqReq 0U
#define Rte_InitValue_R_Cha_tqDynASRReq_Cha_tqDynASRReq 0
#define Rte_InitValue_R_Cha_tqMSRReq_Cha_tqMSRReq 0
#define Rte_InitValue_R_CoPt_nTrb_CoPt_nTrb 0U
#define Rte_InitValue_R_CoPt_noDrivFilTyp_CoPt_noDrivFilTyp 0U
#define Rte_InitValue_R_CoPt_noGearCordDrivFil_CoPt_noGearCordDrivFil 0U
#define Rte_InitValue_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl 32000
#define Rte_InitValue_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng 0U
#define Rte_InitValue_R_EngLim_tqCkDrivFil_EngLim_tqCkDrivFil 32000
#define Rte_InitValue_R_EngLim_tqCkEfcChaLim_EngLim_tqCkEfcChaLim 32000
#define Rte_InitValue_R_EngLim_tqEfcMaxDynVehSpdCtl_EngLim_tqEfcMaxDynVehSpdCtl 32000
#define Rte_InitValue_R_Eng_nCkFil_Eng_nCkFil 0U
#define Rte_InitValue_R_Ext_bDiDrivFilReq_Ext_bDiDrivFilReq 0U
#define Rte_InitValue_R_Ext_stGBxCf_Ext_stGBxCf 0U
#define Rte_InitValue_R_Ext_tAir_Ext_tAir 20
#define Rte_InitValue_R_Ext_tCoMes_Ext_tCoMes 20
#define Rte_InitValue_R_TqCll_bAcvCll_TqCll_bAcvCll 0U
#define Rte_InitValue_R_TqClrCros_bAcvClrCross_TqClrCros_bAcvClrCross 0U
#define Rte_InitValue_R_TqClrCros_stDetClr_TqClrCros_stDetClr 0U
#define Rte_InitValue_R_TqCmp_tqACLoss_TqCmp_tqACLoss 0U
#define Rte_InitValue_R_TqCmp_tqSumLossCmp_TqCmp_tqSumLossCmp 0
#define Rte_InitValue_R_TqDem_bDrivTakeOff_TqDem_bDrivTakeOff 0U
#define Rte_InitValue_R_TqDem_bModSpt_TqDem_bModSpt 0U
#define Rte_InitValue_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM 0
#define Rte_InitValue_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg 0U
#define Rte_InitValue_R_TqSys_bInjCutDynReq_TqSys_bInjCutDynReq 0U
#define Rte_InitValue_R_TqSys_bTypFu_TqSys_bTypFu 0U
#define Rte_InitValue_R_TqSys_idxTqAccu_TqSys_idxTqAccu 1U
#define Rte_InitValue_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil 0
#define Rte_InitValue_R_TreatTenms_nCkGrdFil_TreatTenms_nCkGrdFil 0
#define Rte_InitValue_R_Veh_spdVeh_Veh_spdVeh 0U

#endif

/*==================[type definitions]=======================================*/

/*------------------[instance handle type]-----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_PFILFAST, RTE_CONST, RTE_CONST) Rte_Instance;
#endif

/*------------------[port handle types]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
#endif

/*------------------[per instance memory types]------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*==================[external function declarations]=========================*/

/*------------------[declaration of runnable entities]-----------------------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

extern FUNC(void, RTE_APPL_CODE) RE_TqSys_Sdl10ms_CoCha(void);

extern FUNC(void, RTE_APPL_CODE) RE_PFilFast_001_MSE(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqSys_Sdl10ms_tqEfcFil(void);

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by Rte]--------------*/

#define RTE_START_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"
#if (!defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_tqEfcFil))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_CoCha_bRstAOS_CoCha_bRstAOS (DT_CoCha_bRstAOS data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_CoCha_bTqAccuReq_CoCha_bTqAccuReq (DT_CoCha_bTqAccuReq data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_CoCha_bTqReqMSR_CoCha_bTqReqMSR (DT_CoCha_bTqReqMSR data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_CoCha_bTqReqASR_CoCha_bTqReqASR (DT_CoCha_bTqReqASR data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_CoCha_bInhEGR_CoCha_bInhEGR (DT_CoCha_bInhEGR data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_CoCha_tqEfcReq_CoCha_tqEfcReq (DT_CoCha_tqEfcReq data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_CoCha_bTqDynReq_CoCha_bTqDynReq (DT_CoCha_bTqDynReq data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_PFilFast_001_MSE))  || (!defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_tqEfcFil))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_EngLim_tqCkEfcChaLim_EngLim_tqCkEfcChaLim (P2VAR(DT_EngLim_tqCkEfcChaLim, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_Cha_tqMSRReq_Cha_tqMSRReq (P2VAR(DT_Cha_tqMSRReq, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil (P2VAR(DT_TqSys_tqCkEfcFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_Cha_stTqReq_Cha_stTqReq (P2VAR(DT_Cha_stTqReq, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl (P2VAR(DT_CoPt_tqEfcMaxProtDftl, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_EngLim_tqEfcMaxDynVehSpdCtl_EngLim_tqEfcMaxDynVehSpdCtl (P2VAR(DT_EngLim_tqEfcMaxDynVehSpdCtl, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_PFilFast_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_Cha_tqDynASRReq_Cha_tqDynASRReq (P2VAR(DT_Cha_tqDynASRReq, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_CoCha))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_noCylCutAuthIt_TqSys_noCylCutAuthIt (DT_TqSys_noCylCutAuthIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_tqIncCllIt_TqSys_tqIncCllIt (DT_TqSys_tqIncCllIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_nEngDeceIni_TqSys_nEngDeceIni (DT_TqSys_nEngDeceIni data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_stDrivFilCfPha_TqSys_stDrivFilCfPha (DT_TqSys_stDrivFilCfPha data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_bUHFrzReq_TqSys_bUHFrzReq (DT_TqSys_bUHFrzReq data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_nDif_nEngNTrb_TqSys_nDif_nEngNTrb (DT_TqSys_nDif_nEngNTrb data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_stDrivFilPhaIt_TqSys_stDrivFilPhaIt (DT_TqSys_stDrivFilPhaIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_bDeceAcvIt_TqSys_bDeceAcvIt (DT_TqSys_bDeceAcvIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_noGearCordDrivFil_TqSys_noGearCordDrivFil (DT_TqSys_noGearCordDrivFil data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_tiTranCllIt_TqSys_tiTranCllIt (DT_TqSys_tiTranCllIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_bDeceDetAOSIt_TqSys_bDeceDetAOSIt (DT_TqSys_bDeceDetAOSIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_noGearDece_TqSys_noGearDece (DT_TqSys_noGearDece data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_tqCkDeceIniIt_TqSys_tqCkDeceIniIt (DT_TqSys_tqCkDeceIniIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil (DT_TqSys_tqCkEfcFil data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_bAcceClrCrossAOSIt_TqSys_bAcceClrCrossAOSIt (DT_TqSys_bAcceClrCrossAOSIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_tqThdPha3It_TqSys_tqThdPha3It (DT_TqSys_tqThdPha3It data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_bAcvCllIt_TqSys_bAcvCllIt (DT_TqSys_bAcvCllIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_bAcceDetAOSIt_TqSys_bAcceDetAOSIt (DT_TqSys_bAcceDetAOSIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILFAST_P_TqSys_bClrCrossAcce_TqSys_bClrCrossAcce (DT_TqSys_bClrCrossAcce data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_CoCha))  || (!defined(RTE_RUNNABLEAPI_RE_PFilFast_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_Ext_tAir_Ext_tAir (P2VAR(DT_Ext_tAir, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqClrCros_bAcvClrCross_TqClrCros_bAcvClrCross (P2VAR(DT_TqClrCros_bAcvClrCross, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqClrCros_stDetClr_TqClrCros_stDetClr (P2VAR(DT_TqClrCros_stDetClr, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqSys_bTypFu_TqSys_bTypFu (P2VAR(DT_TqSys_bTypFu, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqCmp_tqSumLossCmp_TqCmp_tqSumLossCmp (P2VAR(DT_TqCmp_tqSumLossCmp, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_EngLim_tqCkDrivFil_EngLim_tqCkDrivFil (P2VAR(DT_EngLim_tqCkDrivFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_AccP_rAccP_AccP_rAccP (P2VAR(DT_AccP_rAccP, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_CoPt_noDrivFilTyp_CoPt_noDrivFilTyp (P2VAR(DT_CoPt_noDrivFilTyp, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_Ext_stGBxCf_Ext_stGBxCf (P2VAR(DT_Ext_stGBxCf, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_Ext_tCoMes_Ext_tCoMes (P2VAR(DT_Ext_tCoMes, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng (P2VAR(DT_CoVSCtl_rAccPEng, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_Veh_spdVeh_Veh_spdVeh (P2VAR(DT_Veh_spdVeh, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqSys_idxTqAccu_TqSys_idxTqAccu (P2VAR(DT_TqSys_idxTqAccu, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_CoPt_noGearCordDrivFil_CoPt_noGearCordDrivFil (P2VAR(DT_CoPt_noGearCordDrivFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqDem_bDrivTakeOff_TqDem_bDrivTakeOff (P2VAR(DT_TqDem_bDrivTakeOff, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_Ext_bDiDrivFilReq_Ext_bDiDrivFilReq (P2VAR(DT_Ext_bDiDrivFilReq, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqCmp_tqACLoss_TqCmp_tqACLoss (P2VAR(DT_TqCmp_tqACLoss, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqSys_bInjCutDynReq_TqSys_bInjCutDynReq (P2VAR(DT_TqSys_bInjCutDynReq, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqCll_bAcvCll_TqCll_bAcvCll (P2VAR(DT_TqCll_bAcvCll, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_CoPt_nTrb_CoPt_nTrb (P2VAR(DT_CoPt_nTrb, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TreatTenms_nCkGrdFil_TreatTenms_nCkGrdFil (P2VAR(DT_TreatTenms_nCkGrdFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqDem_bModSpt_TqDem_bModSpt (P2VAR(DT_TqDem_bModSpt, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg (P2VAR(DT_TqSys_bAcvVehSpdCtlReg, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_Eng_nCkFil_Eng_nCkFil (P2VAR(DT_Eng_nCkFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILFAST_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM (P2VAR(DT_TqLimEM_tqLimEM, AUTOMATIC, RTE_APPL_DATA) data);

#endif

#define RTE_STOP_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by other Appl]--------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

#if (!defined RTE_CORE) /* if included by software component */

extern FUNC(void, RTE_APPL_CODE) RE_FRM_bInhESPReq_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) FRunTime_GetTimer_1ms_U32 (P2VAR(UInt32, AUTOMATIC, RTE_APPL_DATA) CurrentTime1msPtr);
extern FUNC(void, RTE_APPL_CODE) RE_FRM_bDft_spdVeh_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);

#endif /* (!defined RTE_CORE) */

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*------------------[instance handle declaration]----------------------------*/
#define RTE_START_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

extern CONSTP2CONST(Rte_CDS_PFILFAST, RTE_CONST, RTE_CONST) Rte_Inst_PFILFAST;

#define RTE_STOP_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
/** @} doxygen end group definition */
#endif /* !defined(RTE_PFILFAST_H) */
/*==================[end of file]============================================*/

