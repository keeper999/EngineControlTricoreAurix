#if !defined(RTE_INTHMDLT_H)
#define RTE_INTHMDLT_H

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
  * This file contains Rte component declarations for component type INTHMDLT
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
#include <Rte_INTHMDLT_Type.h> /* RTE application types header file */
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
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE)
#define Rte_IrvWrite_RE_InThMdlT_005_TEV_InThM_tWallInCylHead_irv(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_INTHMDLT_InThM_tWallInCylHead_irv = (data))

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)
#define Rte_Read_R_Ext_tCoMes_Ext_tCoMes(data) Rte_Read_INTHMDLT_R_Ext_tCoMes_Ext_tCoMes(data)

#define Rte_IsUpdated_R_Ext_tCoMes_Ext_tCoMes() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3234.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)
#define Rte_Read_R_Eng_stEru_Eng_stEru(data) Rte_Read_INTHMDLT_R_Eng_stEru_Eng_stEru(data)

#define Rte_IsUpdated_R_Eng_stEru_Eng_stEru() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3236.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)
#define Rte_Read_R_UsThrM_tThrMes_UsThrM_tThrMes(data) Rte_Read_INTHMDLT_R_UsThrM_tThrMes_UsThrM_tThrMes(data)

#define Rte_IsUpdated_R_UsThrM_tThrMes_UsThrM_tThrMes() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3242.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE)
#define Rte_Read_R_InThM_tEGRInMnf_InThM_tEGRInMnf(data) Rte_Read_INTHMDLT_R_InThM_tEGRInMnf_InThM_tEGRInMnf(data)

#define Rte_IsUpdated_R_InThM_tEGRInMnf_InThM_tEGRInMnf() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3244.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE)
#define Rte_Read_R_EngM_mfTotExCor_EngM_mfTotExCor(data) Rte_Read_INTHMDLT_R_EngM_mfTotExCor_EngM_mfTotExCor(data)

#define Rte_IsUpdated_R_EngM_mfTotExCor_EngM_mfTotExCor() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3239.isUpdated)

#define Rte_Read_R_InThM_tWallInMnf_InThM_tWallInMnf(data) Rte_Read_INTHMDLT_R_InThM_tWallInMnf_InThM_tWallInMnf(data)

#define Rte_IsUpdated_R_InThM_tWallInMnf_InThM_tWallInMnf() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3246.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE)
#define Rte_Read_R_InThM_tMixtInMnf_InThM_tMixtInMnf(data) Rte_Read_INTHMDLT_R_InThM_tMixtInMnf_InThM_tMixtInMnf(data)

#define Rte_IsUpdated_R_InThM_tMixtInMnf_InThM_tMixtInMnf() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3243.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)
#define Rte_Read_R_UsThrM_tDsThrCorMes_UsThrM_tDsThrCorMes(data) Rte_Read_INTHMDLT_R_UsThrM_tDsThrCorMes_UsThrM_tDsThrCorMes(data)

#define Rte_IsUpdated_R_UsThrM_tDsThrCorMes_UsThrM_tDsThrCorMes() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3238.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE)
#define Rte_IrvRead_RE_InThMdlT_008_TEV_InThM_tEGRUsEGRVlv_irv() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_INTHMDLT_InThM_tEGRUsEGRVlv_irv)

#define Rte_IrvWrite_RE_InThMdlT_008_TEV_InThM_tEGRUsEGRVlv_irv(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_INTHMDLT_InThM_tEGRUsEGRVlv_irv = (data))

#define Rte_Read_R_EngM_rTotLdExCor_EngM_rTotLdExCor(data) Rte_Read_INTHMDLT_R_EngM_rTotLdExCor_EngM_rTotLdExCor(data)

#define Rte_IsUpdated_R_EngM_rTotLdExCor_EngM_rTotLdExCor() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3240.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)
#define Rte_Write_P_InThM_tSqrtEgUsEGRVlv_InThM_tSqrtEgUsEGRVlv(data) Rte_Write_INTHMDLT_P_InThM_tSqrtEgUsEGRVlv_InThM_tSqrtEgUsEGRVlv(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE)
#define Rte_Read_R_Ext_nEng_Ext_nEng(data) Rte_Read_INTHMDLT_R_Ext_nEng_Ext_nEng(data)

#define Rte_IsUpdated_R_Ext_nEng_Ext_nEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3235.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE)
#define Rte_Read_R_InM_mfEGREstimEGRVlv_InM_mfEGREstimEGRVlv(data) Rte_Read_INTHMDLT_R_InM_mfEGREstimEGRVlv_InM_mfEGREstimEGRVlv(data)

#define Rte_IsUpdated_R_InM_mfEGREstimEGRVlv_InM_mfEGREstimEGRVlv() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3241.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE)
#define Rte_IrvRead_RE_InThMdlT_007_TEV_InThM_tWallInCylHead_irv() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_INTHMDLT_InThM_tWallInCylHead_irv)

#define Rte_Write_P_InThM_nEngCor_InThM_nEngCor(data) Rte_Write_INTHMDLT_P_InThM_nEngCor_InThM_nEngCor(data)

#define Rte_Read_R_InM_pDsThrCor_InM_pDsThrCor(data) Rte_Read_INTHMDLT_R_InM_pDsThrCor_InM_pDsThrCor(data)

#define Rte_IsUpdated_R_InM_pDsThrCor_InM_pDsThrCor() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3245.isUpdated)

#define Rte_Read_R_EGRVlv_bClnEGRFoul_EGRVlv_bClnEGRFoul(data) Rte_Read_INTHMDLT_R_EGRVlv_bClnEGRFoul_EGRVlv_bClnEGRFoul(data)

#define Rte_IsUpdated_R_EGRVlv_bClnEGRFoul_EGRVlv_bClnEGRFoul() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3237.isUpdated)

#define Rte_Read_R_InThM_facHeatExcWallInMnf_InThM_facHeatExcWallInMnf(data) Rte_Read_INTHMDLT_R_InThM_facHeatExcWallInMnf_InThM_facHeatExcWallInMnf(data)

#define Rte_IsUpdated_R_InThM_facHeatExcWallInMnf_InThM_facHeatExcWallInMnf() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3247.isUpdated)

#define Rte_Call_R_FRM_bInhInThM_GetFunctionPermission(Permission) (RE_FRM_bInhInThM_GetFunctionPermission(Permission), RTE_E_OK)

#define Rte_Call_R_FRM_bInhInThMEngSpdCor_GetFunctionPermission(Permission) (RE_FRM_bInhInThMEngSpdCor_GetFunctionPermission(Permission), RTE_E_OK)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)
#define Rte_Write_P_InThM_facHeatExcWallInMnf_InThM_facHeatExcWallInMnf(data) Rte_Write_INTHMDLT_P_InThM_facHeatExcWallInMnf_InThM_facHeatExcWallInMnf(data)

#define Rte_Write_P_InThM_tInMnfEstim_InThM_tInMnfEstim(data) Rte_Write_INTHMDLT_P_InThM_tInMnfEstim_InThM_tInMnfEstim(data)

#define Rte_Write_P_InThM_tAirUsInVlvEstim_InThM_tAirUsInVlvEstim(data) Rte_Write_INTHMDLT_P_InThM_tAirUsInVlvEstim_InThM_tAirUsInVlvEstim(data)

#define Rte_Write_P_InThM_tMixtInMnf_InThM_tMixtInMnf(data) Rte_Write_INTHMDLT_P_InThM_tMixtInMnf_InThM_tMixtInMnf(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE)
#define Rte_IrvRead_RE_InThMdlT_002_TEV_InThM_tEGRUsEGRVlv_irv() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_INTHMDLT_InThM_tEGRUsEGRVlv_irv)

#define Rte_IrvRead_RE_InThMdlT_002_TEV_InThM_tWallInCylHead_irv() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_INTHMDLT_InThM_tWallInCylHead_irv)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV) || !defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)
#define Rte_IrvWrite_RE_InThMdlT_001_MSE_InThM_tWallInCylHead_irv(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_INTHMDLT_InThM_tWallInCylHead_irv = (data))

#define Rte_IrvWrite_RE_InThMdlT_001_MSE_InThM_tEGRUsEGRVlv_irv(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_INTHMDLT_InThM_tEGRUsEGRVlv_irv = (data))

#define Rte_Write_P_InThM_tEGRInMnf_InThM_tEGRInMnf(data) Rte_Write_INTHMDLT_P_InThM_tEGRInMnf_InThM_tEGRInMnf(data)

#define Rte_Write_P_InThM_tWallInMnf_InThM_tWallInMnf(data) Rte_Write_INTHMDLT_P_InThM_tWallInMnf_InThM_tWallInMnf(data)

#endif

#endif

/*------------------[port handle API mapping]--------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*------------------[application errors]-------------------------------------*/

/*------------------[init values]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#define Rte_InitValue_P_InThM_tEGRInMnf_InThM_tEGRInMnf 0U
#define Rte_InitValue_P_InThM_tSqrtEgUsEGRVlv_InThM_tSqrtEgUsEGRVlv 0U
#define Rte_InitValue_P_InThM_facHeatExcWallInMnf_InThM_facHeatExcWallInMnf 0U
#define Rte_InitValue_P_InThM_tInMnfEstim_InThM_tInMnfEstim 0U
#define Rte_InitValue_P_InThM_tMixtInMnf_InThM_tMixtInMnf 0U
#define Rte_InitValue_P_InThM_tAirUsInVlvEstim_InThM_tAirUsInVlvEstim 0U
#define Rte_InitValue_P_InThM_tWallInMnf_InThM_tWallInMnf 0U
#define Rte_InitValue_P_InThM_nEngCor_InThM_nEngCor 0U
#define Rte_InitValue_R_Ext_tCoMes_Ext_tCoMes 20
#define Rte_InitValue_R_Ext_nEng_Ext_nEng 0U
#define Rte_InitValue_R_Eng_stEru_Eng_stEru 1U
#define Rte_InitValue_R_EGRVlv_bClnEGRFoul_EGRVlv_bClnEGRFoul 0U
#define Rte_InitValue_R_UsThrM_tDsThrCorMes_UsThrM_tDsThrCorMes 0U
#define Rte_InitValue_R_EngM_mfTotExCor_EngM_mfTotExCor 0U
#define Rte_InitValue_R_EngM_rTotLdExCor_EngM_rTotLdExCor 0U
#define Rte_InitValue_R_InM_mfEGREstimEGRVlv_InM_mfEGREstimEGRVlv 0U
#define Rte_InitValue_R_UsThrM_tThrMes_UsThrM_tThrMes 0U
#define Rte_InitValue_R_InThM_tMixtInMnf_InThM_tMixtInMnf 0U
#define Rte_InitValue_R_InThM_tEGRInMnf_InThM_tEGRInMnf 0U
#define Rte_InitValue_R_InM_pDsThrCor_InM_pDsThrCor 0U
#define Rte_InitValue_R_InThM_tWallInMnf_InThM_tWallInMnf 0U
#define Rte_InitValue_R_InThM_facHeatExcWallInMnf_InThM_facHeatExcWallInMnf 0U

#endif

/*==================[type definitions]=======================================*/

/*------------------[instance handle type]-----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_INTHMDLT, RTE_CONST, RTE_CONST) Rte_Instance;
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

extern FUNC(void, RTE_APPL_CODE) RE_InThMdlT_005_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_InThMdlT_004_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_InThMdlT_006_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_InThMdlT_008_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_InThMdlT_007_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_InThMdlT_002_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_InThMdlT_001_MSE(void);

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by Rte]--------------*/

#define RTE_START_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE))
#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_Ext_tCoMes_Ext_tCoMes (P2VAR(DT_Ext_tCoMes, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_Eng_stEru_Eng_stEru (P2VAR(DT_Eng_stEru, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_UsThrM_tThrMes_UsThrM_tThrMes (P2VAR(DT_UsThrM_tThrMes, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_InThM_tEGRInMnf_InThM_tEGRInMnf (P2VAR(DT_InThM_tEGRInMnf, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_EngM_mfTotExCor_EngM_mfTotExCor (P2VAR(DT_EngM_mfTotExCor, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_InThM_tWallInMnf_InThM_tWallInMnf (P2VAR(DT_InThM_tWallInMnf, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_InThM_tMixtInMnf_InThM_tMixtInMnf (P2VAR(DT_InThM_tMixtInMnf, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_UsThrM_tDsThrCorMes_UsThrM_tDsThrCorMes (P2VAR(DT_UsThrM_tDsThrCorMes, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_EngM_rTotLdExCor_EngM_rTotLdExCor (P2VAR(DT_EngM_rTotLdExCor, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_INTHMDLT_P_InThM_tSqrtEgUsEGRVlv_InThM_tSqrtEgUsEGRVlv (DT_InThM_tSqrtEgUsEGRVlv data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_Ext_nEng_Ext_nEng (P2VAR(DT_Ext_nEng, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_InM_mfEGREstimEGRVlv_InM_mfEGREstimEGRVlv (P2VAR(DT_InM_mfEGREstimEGRVlv, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_INTHMDLT_P_InThM_nEngCor_InThM_nEngCor (DT_InThM_nEngCor data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_InM_pDsThrCor_InM_pDsThrCor (P2VAR(DT_InM_pDsThrCor, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_EGRVlv_bClnEGRFoul_EGRVlv_bClnEGRFoul (P2VAR(DT_EGRVlv_bClnEGRFoul, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_INTHMDLT_R_InThM_facHeatExcWallInMnf_InThM_facHeatExcWallInMnf (P2VAR(DT_InThM_facHeatExcWallInMnf, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_INTHMDLT_P_InThM_facHeatExcWallInMnf_InThM_facHeatExcWallInMnf (DT_InThM_facHeatExcWallInMnf data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_INTHMDLT_P_InThM_tInMnfEstim_InThM_tInMnfEstim (DT_InThM_tInMnfEstim data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_INTHMDLT_P_InThM_tAirUsInVlvEstim_InThM_tAirUsInVlvEstim (DT_InThM_tAirUsInVlvEstim data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_INTHMDLT_P_InThM_tMixtInMnf_InThM_tMixtInMnf (DT_InThM_tMixtInMnf data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_001_MSE))
#endif
#if (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_005_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_006_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_008_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_007_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_InThMdlT_002_TEV))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_INTHMDLT_P_InThM_tEGRInMnf_InThM_tEGRInMnf (DT_InThM_tEGRInMnf data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_INTHMDLT_P_InThM_tWallInMnf_InThM_tWallInMnf (DT_InThM_tWallInMnf data);

#endif

#define RTE_STOP_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by other Appl]--------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

#if (!defined RTE_CORE) /* if included by software component */

extern FUNC(void, RTE_APPL_CODE) RE_FRM_bInhInThM_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);
extern FUNC(void, RTE_APPL_CODE) RE_FRM_bInhInThMEngSpdCor_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);

#endif /* (!defined RTE_CORE) */

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*------------------[instance handle declaration]----------------------------*/
#define RTE_START_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

extern CONSTP2CONST(Rte_CDS_INTHMDLT, RTE_CONST, RTE_CONST) Rte_Inst_INTHMDLT;

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
#endif /* !defined(RTE_INTHMDLT_H) */
/*==================[end of file]============================================*/

