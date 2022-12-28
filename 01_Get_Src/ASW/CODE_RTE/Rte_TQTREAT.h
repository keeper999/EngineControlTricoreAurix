#if !defined(RTE_TQTREAT_H)
#define RTE_TQTREAT_H

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
  * This file contains Rte component declarations for component type TQTREAT
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:31 CET 2014. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <Rte_Intern_Application_Core1.h>
#include <Rte_Main.h>         /* RTE main header file */
#include <Rte_TQTREAT_Type.h> /* RTE application types header file */
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
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE)
#define Rte_Write_P_TreatTDC_nCkGrd_TreatTDC_nCkGrd(data) Rte_Write_TQTREAT_P_TreatTDC_nCkGrd_TreatTDC_nCkGrd(data)

#define Rte_Write_P_TreatTDC_nCkFil_TreatTDC_nCkFil(data) Rte_Write_TQTREAT_P_TreatTDC_nCkFil_TreatTDC_nCkFil(data)

#define Rte_Write_P_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta(data) Rte_Write_TQTREAT_P_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta(data)

#define Rte_Write_P_TreatTDC_nCkGrdFil_TreatTDC_nCkGrdFil(data) Rte_Write_TQTREAT_P_TreatTDC_nCkGrdFil_TreatTDC_nCkGrdFil(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE)
#define Rte_Read_R_Ext_tiTDC_Ext_tiTDC(data) Rte_Read_TQTREAT_R_Ext_tiTDC_Ext_tiTDC(data)

#define Rte_IsUpdated_R_Ext_tiTDC_Ext_tiTDC() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3951.isUpdated)

#define Rte_Read_R_TqDem_facGainFilTrv_nCk_TqDem_facGainFilTrv_nCk(data) Rte_Read_TQTREAT_R_TqDem_facGainFilTrv_nCk_TqDem_facGainFilTrv_nCk(data)

#define Rte_IsUpdated_R_TqDem_facGainFilTrv_nCk_TqDem_facGainFilTrv_nCk() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3950.isUpdated)

#define Rte_Read_R_TqSys_EveSync_TqTreatElem_TqSys_EveSync_TqTreatElem(data) Rte_Read_TQTREAT_R_TqSys_EveSync_TqTreatElem_TqSys_EveSync_TqTreatElem(data)

#define Rte_IsUpdated_R_TqSys_EveSync_TqTreatElem_TqSys_EveSync_TqTreatElem() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3975.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)
#define Rte_Read_R_Ext_nEng_Ext_nEng(data) Rte_Read_TQTREAT_R_Ext_nEng_Ext_nEng(data)

#define Rte_IsUpdated_R_Ext_nEng_Ext_nEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3956.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE)
#define Rte_Write_P_TreatTenms_nCkRaw_TreatTenms_nCkRaw(data) Rte_Write_TQTREAT_P_TreatTenms_nCkRaw_TreatTenms_nCkRaw(data)

#define Rte_Write_P_Eng_nCkFil_Eng_nCkFil(data) Rte_Write_TQTREAT_P_Eng_nCkFil_Eng_nCkFil(data)

#define Rte_Write_P_TreatTenms_nCkGrd_TreatTenms_nCkGrd(data) Rte_Write_TQTREAT_P_TreatTenms_nCkGrd_TreatTenms_nCkGrd(data)

#define Rte_Write_P_TreatTenms_nCkTDCDelta_TreatTenms_nCkTDCDelta(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_209.value = (data), RTE_E_OK)

#define Rte_Write_P_TreatTenms_nCkGrdFil_TreatTenms_nCkGrdFil(data) Rte_Write_TQTREAT_P_TreatTenms_nCkGrdFil_TreatTenms_nCkGrdFil(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE)
#define Rte_Read_R_TreatTDC_nCkFil_TreatTDC_nCkFil(data) Rte_Read_TQTREAT_R_TreatTDC_nCkFil_TreatTDC_nCkFil(data)

#define Rte_IsUpdated_R_TreatTDC_nCkFil_TreatTDC_nCkFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3967.isUpdated)

#define Rte_Read_R_TreatTDC_nCkGrd_TreatTDC_nCkGrd(data) Rte_Read_TQTREAT_R_TreatTDC_nCkGrd_TreatTDC_nCkGrd(data)

#define Rte_IsUpdated_R_TreatTDC_nCkGrd_TreatTDC_nCkGrd() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3968.isUpdated)

#define Rte_Read_R_TreatTDC_nCkGrdFil_TreatTDC_nCkGrdFil(data) Rte_Read_TQTREAT_R_TreatTDC_nCkGrdFil_TreatTDC_nCkGrdFil(data)

#define Rte_IsUpdated_R_TreatTDC_nCkGrdFil_TreatTDC_nCkGrdFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3969.isUpdated)

#define Rte_Read_R_Ext_nEngAvr_Ext_nEngAvr(data) Rte_Read_TQTREAT_R_Ext_nEngAvr_Ext_nEngAvr(data)

#define Rte_IsUpdated_R_Ext_nEngAvr_Ext_nEngAvr() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3949.isUpdated)

#define Rte_Read_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta(data) Rte_Read_TQTREAT_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta(data)

#define Rte_IsUpdated_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3970.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)
#define Rte_Write_P_Ext_nEngClc0_Ext_nEngClc0(data) Rte_Write_TQTREAT_P_Ext_nEngClc0_Ext_nEngClc0(data)

#define Rte_Write_P_Ext_nEngAvr_Ext_nEngAvr(data) Rte_Write_TQTREAT_P_Ext_nEngAvr_Ext_nEngAvr(data)

#define Rte_Write_P_Ext_nEng2_Ext_nEng2(data) Rte_Write_TQTREAT_P_Ext_nEng2_Ext_nEng2(data)

#define Rte_Write_P_Ext_nEngClc1_Ext_nEngClc1(data) Rte_Write_TQTREAT_P_Ext_nEngClc1_Ext_nEngClc1(data)

#define Rte_Write_P_Ext_nEng1_Ext_nEng1(data) Rte_Write_TQTREAT_P_Ext_nEng1_Ext_nEng1(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE)
#define Rte_Write_P_EOM_tiEngRun_EOM_tiEngRun(data) Rte_Write_TQTREAT_P_EOM_tiEngRun_EOM_tiEngRun(data)

#define Rte_Write_P_EOM_tiEngRunStrt_EOM_tiEngRunStrt(data) Rte_Write_TQTREAT_P_EOM_tiEngRunStrt_EOM_tiEngRunStrt(data)

#define Rte_Write_P_TqSys_stTypPwtCf_TqSys_stTypPwtCf(data) Rte_Write_TQTREAT_P_TqSys_stTypPwtCf_TqSys_stTypPwtCf(data)

#define Rte_Write_P_EOM_tiEngModStp_EOM_tiEngModStp(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_524.value = (data), RTE_E_OK)

#define Rte_Write_P_TqSys_idxTqAccu_TqSys_idxTqAccu(data) Rte_Write_TQTREAT_P_TqSys_idxTqAccu_TqSys_idxTqAccu(data)

#define Rte_Write_P_EOM_tiEngCrankStrt_EOM_tiEngCrankStrt(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1393.value = (data), RTE_E_OK)

#define Rte_Write_P_TqSys_bTypFu_TqSys_bTypFu(data) Rte_Write_TQTREAT_P_TqSys_bTypFu_TqSys_bTypFu(data)

#define Rte_Write_P_TqSys_bAcvVehSpdCtlLim_TqSys_bAcvVehSpdCtlLim(data) Rte_Write_TQTREAT_P_TqSys_bAcvVehSpdCtlLim_TqSys_bAcvVehSpdCtlLim(data)

#define Rte_Write_P_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg(data) Rte_Write_TQTREAT_P_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE)
#define Rte_Read_R_VSCtl_stTqPTMinCtl_VSCtl_stTqPTMinCtl(data) Rte_Read_TQTREAT_R_VSCtl_stTqPTMinCtl_VSCtl_stTqPTMinCtl(data)

#define Rte_IsUpdated_R_VSCtl_stTqPTMinCtl_VSCtl_stTqPTMinCtl() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3963.isUpdated)

#define Rte_Read_R_VSCtl_stVSMax_VSCtl_stVSMax(data) Rte_Read_TQTREAT_R_VSCtl_stVSMax_VSCtl_stVSMax(data)

#define Rte_IsUpdated_R_VSCtl_stVSMax_VSCtl_stVSMax() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3965.isUpdated)

#define Rte_Read_R_CoPTSt_stEng_CoPTSt_stEng(data) Rte_Read_TQTREAT_R_CoPTSt_stEng_CoPTSt_stEng(data)

#define Rte_IsUpdated_R_CoPTSt_stEng_CoPTSt_stEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3952.isUpdated)

#define Rte_Read_R_EOM_facItpolCur_EOM_facItpolCur(data) Rte_Read_TQTREAT_R_EOM_facItpolCur_EOM_facItpolCur(data)

#define Rte_IsUpdated_R_EOM_facItpolCur_EOM_facItpolCur() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3953.isUpdated)

#define Rte_Read_R_Ext_stFuTypCf_Ext_stFuTypCf(data) Rte_Read_TQTREAT_R_Ext_stFuTypCf_Ext_stFuTypCf(data)

#define Rte_IsUpdated_R_Ext_stFuTypCf_Ext_stFuTypCf() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3959.isUpdated)

#define Rte_Read_R_Ext_tCoMes_Ext_tCoMes(data) Rte_Read_TQTREAT_R_Ext_tCoMes_Ext_tCoMes(data)

#define Rte_IsUpdated_R_Ext_tCoMes_Ext_tCoMes() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3961.isUpdated)

#define Rte_Read_R_EOM_idxBas2InjCur_EOM_idxBas2InjCur(data) Rte_Read_TQTREAT_R_EOM_idxBas2InjCur_EOM_idxBas2InjCur(data)

#define Rte_IsUpdated_R_EOM_idxBas2InjCur_EOM_idxBas2InjCur() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3955.isUpdated)

#define Rte_Read_R_VSCtl_stVSLim_VSCtl_stVSLim(data) Rte_Read_TQTREAT_R_VSCtl_stVSLim_VSCtl_stVSLim(data)

#define Rte_IsUpdated_R_VSCtl_stVSLim_VSCtl_stVSLim() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3964.isUpdated)

#define Rte_Read_R_VSCtl_stTqPTMaxCtl_VSCtl_stTqPTMaxCtl(data) Rte_Read_TQTREAT_R_VSCtl_stTqPTMaxCtl_VSCtl_stTqPTMaxCtl(data)

#define Rte_IsUpdated_R_VSCtl_stTqPTMaxCtl_VSCtl_stTqPTMaxCtl() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3962.isUpdated)

#define Rte_Read_R_Ext_stVSCtlRegCf_Ext_stVSCtlRegCf(data) Rte_Read_TQTREAT_R_Ext_stVSCtlRegCf_Ext_stVSCtlRegCf(data)

#define Rte_IsUpdated_R_Ext_stVSCtlRegCf_Ext_stVSCtlRegCf() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3960.isUpdated)

#define Rte_Read_R_EOM_idxBas1InjCur_EOM_idxBas1InjCur(data) Rte_Read_TQTREAT_R_EOM_idxBas1InjCur_EOM_idxBas1InjCur(data)

#define Rte_IsUpdated_R_EOM_idxBas1InjCur_EOM_idxBas1InjCur() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3954.isUpdated)

#define Rte_Read_R_VSCtl_stVSReg_VSCtl_stVSReg(data) Rte_Read_TQTREAT_R_VSCtl_stVSReg_VSCtl_stVSReg(data)

#define Rte_IsUpdated_R_VSCtl_stVSReg_VSCtl_stVSReg() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3966.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE)
#define Rte_Write_P_CoBrk_bAcvBrk_CoBrk_bAcvBrk(data) Rte_Write_TQTREAT_P_CoBrk_bAcvBrk_CoBrk_bAcvBrk(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE)
#define Rte_Read_R_Ext_bSecBrkPedPrssMes_Ext_bSecBrkPedPrssMes(data) Rte_Read_TQTREAT_R_Ext_bSecBrkPedPrssMes_Ext_bSecBrkPedPrssMes(data)

#define Rte_IsUpdated_R_Ext_bSecBrkPedPrssMes_Ext_bSecBrkPedPrssMes() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3973.isUpdated)

#define Rte_Read_R_Brk_bBrkAuto_Brk_bBrkAuto(data) Rte_Read_TQTREAT_R_Brk_bBrkAuto_Brk_bBrkAuto(data)

#define Rte_IsUpdated_R_Brk_bBrkAuto_Brk_bBrkAuto() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3971.isUpdated)

#define Rte_Read_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss(data) Rte_Read_TQTREAT_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss(data)

#define Rte_IsUpdated_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3972.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE) || !defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)
#define Rte_Read_R_Ext_nEngClc_Ext_nEngClc(data) Rte_Read_TQTREAT_R_Ext_nEngClc_Ext_nEngClc(data)

#define Rte_IsUpdated_R_Ext_nEngClc_Ext_nEngClc() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3957.isUpdated)

#define Rte_Read_R_TqSys_EveSync_VarElem_TqSys_EveSync_VarElem(data) Rte_Read_TQTREAT_R_TqSys_EveSync_VarElem_TqSys_EveSync_VarElem(data)

#define Rte_IsUpdated_R_TqSys_EveSync_VarElem_TqSys_EveSync_VarElem() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3974.isUpdated)

#define Rte_Read_R_Ext_noCylEng_Ext_noCylEng(data) Rte_Read_TQTREAT_R_Ext_noCylEng_Ext_noCylEng(data)

#define Rte_IsUpdated_R_Ext_noCylEng_Ext_noCylEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3958.isUpdated)

#endif

#endif

/*------------------[port handle API mapping]--------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*------------------[application errors]-------------------------------------*/

/*------------------[init values]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#define Rte_InitValue_P_Eng_nCkFil_Eng_nCkFil 0U
#define Rte_InitValue_P_TreatTenms_nCkRaw_TreatTenms_nCkRaw 0U
#define Rte_InitValue_P_TreatTenms_nCkGrd_TreatTenms_nCkGrd 0
#define Rte_InitValue_P_TreatTenms_nCkTDCDelta_TreatTenms_nCkTDCDelta 0
#define Rte_InitValue_P_TreatTenms_nCkGrdFil_TreatTenms_nCkGrdFil 0
#define Rte_InitValue_P_TreatTDC_nCkFil_TreatTDC_nCkFil 0U
#define Rte_InitValue_P_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta 0
#define Rte_InitValue_P_TreatTDC_nCkGrd_TreatTDC_nCkGrd 0
#define Rte_InitValue_P_TreatTDC_nCkGrdFil_TreatTDC_nCkGrdFil 0
#define Rte_InitValue_P_EOM_tiEngModStp_EOM_tiEngModStp 0U
#define Rte_InitValue_P_Ext_nEng1_Ext_nEng1 0U
#define Rte_InitValue_P_Ext_nEng2_Ext_nEng2 0U
#define Rte_InitValue_P_EOM_tiEngCrankStrt_EOM_tiEngCrankStrt 0U
#define Rte_InitValue_P_EOM_tiEngRun_EOM_tiEngRun 0U
#define Rte_InitValue_P_EOM_tiEngRunStrt_EOM_tiEngRunStrt 0U
#define Rte_InitValue_P_Ext_nEngAvr_Ext_nEngAvr 0U
#define Rte_InitValue_P_Ext_nEngClc0_Ext_nEngClc0 0U
#define Rte_InitValue_P_Ext_nEngClc1_Ext_nEngClc1 0U
#define Rte_InitValue_P_TqSys_bAcvVehSpdCtlLim_TqSys_bAcvVehSpdCtlLim 0U
#define Rte_InitValue_P_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg 0U
#define Rte_InitValue_P_TqSys_bTypFu_TqSys_bTypFu 0U
#define Rte_InitValue_P_TqSys_idxTqAccu_TqSys_idxTqAccu 1U
#define Rte_InitValue_P_TqSys_stTypPwtCf_TqSys_stTypPwtCf 0U
#define Rte_InitValue_P_CoBrk_bAcvBrk_CoBrk_bAcvBrk 0U
#define Rte_InitValue_R_Ext_nEngAvr_Ext_nEngAvr 0U
#define Rte_InitValue_R_TqDem_facGainFilTrv_nCk_TqDem_facGainFilTrv_nCk 1024U
#define Rte_InitValue_R_Ext_tiTDC_Ext_tiTDC 100U
#define Rte_InitValue_R_CoPTSt_stEng_CoPTSt_stEng 1U
#define Rte_InitValue_R_EOM_facItpolCur_EOM_facItpolCur 0U
#define Rte_InitValue_R_EOM_idxBas1InjCur_EOM_idxBas1InjCur 1U
#define Rte_InitValue_R_EOM_idxBas2InjCur_EOM_idxBas2InjCur 1U
#define Rte_InitValue_R_Ext_nEng_Ext_nEng 0U
#define Rte_InitValue_R_Ext_nEngClc_Ext_nEngClc 0U
#define Rte_InitValue_R_Ext_noCylEng_Ext_noCylEng 1U
#define Rte_InitValue_R_Ext_stFuTypCf_Ext_stFuTypCf 0U
#define Rte_InitValue_R_Ext_stVSCtlRegCf_Ext_stVSCtlRegCf 1U
#define Rte_InitValue_R_Ext_tCoMes_Ext_tCoMes 20
#define Rte_InitValue_R_VSCtl_stTqPTMaxCtl_VSCtl_stTqPTMaxCtl 0U
#define Rte_InitValue_R_VSCtl_stTqPTMinCtl_VSCtl_stTqPTMinCtl 0U
#define Rte_InitValue_R_VSCtl_stVSLim_VSCtl_stVSLim 0U
#define Rte_InitValue_R_VSCtl_stVSMax_VSCtl_stVSMax 0U
#define Rte_InitValue_R_VSCtl_stVSReg_VSCtl_stVSReg 0U
#define Rte_InitValue_R_TreatTDC_nCkFil_TreatTDC_nCkFil 0U
#define Rte_InitValue_R_TreatTDC_nCkGrd_TreatTDC_nCkGrd 0
#define Rte_InitValue_R_TreatTDC_nCkGrdFil_TreatTDC_nCkGrdFil 0
#define Rte_InitValue_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta 0
#define Rte_InitValue_R_Brk_bBrkAuto_Brk_bBrkAuto 0U
#define Rte_InitValue_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss 0U
#define Rte_InitValue_R_Ext_bSecBrkPedPrssMes_Ext_bSecBrkPedPrssMes 0U
#define Rte_InitValue_R_TqSys_EveSync_VarElem_TqSys_EveSync_VarElem 0U
#define Rte_InitValue_R_TqSys_EveSync_TqTreatElem_TqSys_EveSync_TqTreatElem 0U

#endif

/*==================[type definitions]=======================================*/

/*------------------[instance handle type]-----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_TQTREAT, RTE_CONST, RTE_CONST) Rte_Instance;
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

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_008_DRE(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_002_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_005_MSE(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_007_MSE(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_004_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_010_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_003_MSE(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_009_MSE(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_001_MSE(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqTreat_006_DRE(void);

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by Rte]--------------*/

#define RTE_START_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TreatTDC_nCkGrd_TreatTDC_nCkGrd (DT_TreatTDC_nCkGrd data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TreatTDC_nCkFil_TreatTDC_nCkFil (DT_TreatTDC_nCkFil data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta (DT_TreatTDC_nCkTDCDelta data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TreatTDC_nCkGrdFil_TreatTDC_nCkGrdFil (DT_TreatTDC_nCkGrdFil data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_tiTDC_Ext_tiTDC (P2VAR(DT_Ext_tiTDC, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_TqDem_facGainFilTrv_nCk_TqDem_facGainFilTrv_nCk (P2VAR(DT_TqDem_facGainFilTrv_nCk, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_TqSys_EveSync_TqTreatElem_TqSys_EveSync_TqTreatElem (P2VAR(DT_TqSys_EveSync_TqTreatElem, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_nEng_Ext_nEng (P2VAR(DT_Ext_nEng, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TreatTenms_nCkRaw_TreatTenms_nCkRaw (DT_TreatTenms_nCkRaw data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_Eng_nCkFil_Eng_nCkFil (DT_Eng_nCkFil data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TreatTenms_nCkGrd_TreatTenms_nCkGrd (DT_TreatTenms_nCkGrd data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TreatTenms_nCkGrdFil_TreatTenms_nCkGrdFil (DT_TreatTenms_nCkGrdFil data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_TreatTDC_nCkFil_TreatTDC_nCkFil (P2VAR(DT_TreatTDC_nCkFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_TreatTDC_nCkGrd_TreatTDC_nCkGrd (P2VAR(DT_TreatTDC_nCkGrd, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_TreatTDC_nCkGrdFil_TreatTDC_nCkGrdFil (P2VAR(DT_TreatTDC_nCkGrdFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_nEngAvr_Ext_nEngAvr (P2VAR(DT_Ext_nEngAvr, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta (P2VAR(DT_TreatTDC_nCkTDCDelta, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_Ext_nEngClc0_Ext_nEngClc0 (DT_Ext_nEngClc0 data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_Ext_nEngAvr_Ext_nEngAvr (DT_Ext_nEngAvr data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_Ext_nEng2_Ext_nEng2 (DT_Ext_nEng2 data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_Ext_nEngClc1_Ext_nEngClc1 (DT_Ext_nEngClc1 data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_Ext_nEng1_Ext_nEng1 (DT_Ext_nEng1 data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_EOM_tiEngRun_EOM_tiEngRun (DT_EOM_tiEngRun data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_EOM_tiEngRunStrt_EOM_tiEngRunStrt (DT_EOM_tiEngRunStrt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TqSys_stTypPwtCf_TqSys_stTypPwtCf (DT_TqSys_stTypPwtCf data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TqSys_idxTqAccu_TqSys_idxTqAccu (DT_TqSys_idxTqAccu data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TqSys_bTypFu_TqSys_bTypFu (DT_TqSys_bTypFu data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TqSys_bAcvVehSpdCtlLim_TqSys_bAcvVehSpdCtlLim (DT_TqSys_bAcvVehSpdCtlLim data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg (DT_TqSys_bAcvVehSpdCtlReg data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_VSCtl_stTqPTMinCtl_VSCtl_stTqPTMinCtl (P2VAR(DT_VSCtl_stTqPTMinCtl, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_VSCtl_stVSMax_VSCtl_stVSMax (P2VAR(DT_VSCtl_stVSMax, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_CoPTSt_stEng_CoPTSt_stEng (P2VAR(DT_CoPTSt_stEng, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_EOM_facItpolCur_EOM_facItpolCur (P2VAR(DT_EOM_facItpolCur, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_stFuTypCf_Ext_stFuTypCf (P2VAR(DT_Ext_stFuTypCf, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_tCoMes_Ext_tCoMes (P2VAR(DT_Ext_tCoMes, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_EOM_idxBas2InjCur_EOM_idxBas2InjCur (P2VAR(DT_EOM_idxBas2InjCur, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_VSCtl_stVSLim_VSCtl_stVSLim (P2VAR(DT_VSCtl_stVSLim, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_VSCtl_stTqPTMaxCtl_VSCtl_stTqPTMaxCtl (P2VAR(DT_VSCtl_stTqPTMaxCtl, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_stVSCtlRegCf_Ext_stVSCtlRegCf (P2VAR(DT_Ext_stVSCtlRegCf, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_EOM_idxBas1InjCur_EOM_idxBas1InjCur (P2VAR(DT_EOM_idxBas1InjCur, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_VSCtl_stVSReg_VSCtl_stVSReg (P2VAR(DT_VSCtl_stVSReg, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQTREAT_P_CoBrk_bAcvBrk_CoBrk_bAcvBrk (DT_CoBrk_bAcvBrk data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_006_DRE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_bSecBrkPedPrssMes_Ext_bSecBrkPedPrssMes (P2VAR(DT_Ext_bSecBrkPedPrssMes, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Brk_bBrkAuto_Brk_bBrkAuto (P2VAR(DT_Brk_bBrkAuto, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss (P2VAR(DT_Ext_bBrkPedPrss, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqTreat_008_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_005_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_007_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_010_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_003_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_009_MSE)) || (!defined(RTE_RUNNABLEAPI_RE_TqTreat_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_nEngClc_Ext_nEngClc (P2VAR(DT_Ext_nEngClc, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_TqSys_EveSync_VarElem_TqSys_EveSync_VarElem (P2VAR(DT_TqSys_EveSync_VarElem, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQTREAT_R_Ext_noCylEng_Ext_noCylEng (P2VAR(DT_Ext_noCylEng, AUTOMATIC, RTE_APPL_DATA) data);

#endif

#define RTE_STOP_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by other Appl]--------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

#if (!defined RTE_CORE) /* if included by software component */

#endif /* (!defined RTE_CORE) */

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*------------------[instance handle declaration]----------------------------*/
#define RTE_START_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

extern CONSTP2CONST(Rte_CDS_TQTREAT, RTE_CONST, RTE_CONST) Rte_Inst_TQTREAT;

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
#endif /* !defined(RTE_TQTREAT_H) */
/*==================[end of file]============================================*/

