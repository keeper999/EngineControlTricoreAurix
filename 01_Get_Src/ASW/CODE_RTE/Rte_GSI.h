#if !defined(RTE_GSI_H)
#define RTE_GSI_H

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
  * This file contains Rte component declarations for component type GSI
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
#include <Rte_GSI_Type.h> /* RTE application types header file */
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
#define Rte_Write_P_GSI3_noTarGear_GSI3_noTarGear(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_977.value = (data), RTE_E_OK)

#define Rte_Write_P_GSI3_stGSIEna_GSI3_stGSIEna(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_606.value = (data), RTE_E_OK)

#define Rte_Write_P_GSI3_stGearShiftReq_GSI3_stGearShiftReq(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1066.value = (data), RTE_E_OK)

#define Rte_Write_P_GSI3_noEgdGearCordFilIt_GSI3_noEgdGearCordFilIt(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_353.value = (data), RTE_E_OK)

#if !defined(RTE_RUNNABLEAPI_RE_GSI_001_MSE)
#define Rte_Read_R_Cha_stTqReq_Cha_stTqReq(data) Rte_Read_GSI_R_Cha_stTqReq_Cha_stTqReq(data)

#define Rte_IsUpdated_R_Cha_stTqReq_Cha_stTqReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3127.isUpdated)

#define Rte_Read_R_CoPt_posnLev_CoPt_posnLev(data) Rte_Read_GSI_R_CoPt_posnLev_CoPt_posnLev(data)

#define Rte_IsUpdated_R_CoPt_posnLev_CoPt_posnLev() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3130.isUpdated)

#define Rte_Read_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt(data) Rte_Read_GSI_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt(data)

#define Rte_IsUpdated_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3129.isUpdated)

#define Rte_Read_R_Ext_tCoMes_Ext_tCoMes(data) Rte_Read_GSI_R_Ext_tCoMes_Ext_tCoMes(data)

#define Rte_IsUpdated_R_Ext_tCoMes_Ext_tCoMes() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3140.isUpdated)

#define Rte_Read_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal(data) Rte_Read_GSI_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal(data)

#define Rte_IsUpdated_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3134.isUpdated)

#define Rte_Read_R_Ext_stGBxCf_Ext_stGBxCf(data) Rte_Read_GSI_R_Ext_stGBxCf_Ext_stGBxCf(data)

#define Rte_IsUpdated_R_Ext_stGBxCf_Ext_stGBxCf() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3138.isUpdated)

#define Rte_Read_R_Ext_nEng_Ext_nEng(data) Rte_Read_GSI_R_Ext_nEng_Ext_nEng(data)

#define Rte_IsUpdated_R_Ext_nEng_Ext_nEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3137.isUpdated)

#define Rte_Read_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg(data) Rte_Read_GSI_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg(data)

#define Rte_IsUpdated_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3143.isUpdated)

#define Rte_Read_R_CoPTSt_stEng_CoPTSt_stEng(data) Rte_Read_GSI_R_CoPTSt_stEng_CoPTSt_stEng(data)

#define Rte_IsUpdated_R_CoPTSt_stEng_CoPTSt_stEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3135.isUpdated)

#define Rte_Read_R_Cha_bABSReg_Cha_bABSReg(data) Rte_Read_GSI_R_Cha_bABSReg_Cha_bABSReg(data)

#define Rte_IsUpdated_R_Cha_bABSReg_Cha_bABSReg() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3126.isUpdated)

#define Rte_Read_R_CoPt_bRvsCord_CoPt_bRvsCord(data) Rte_Read_GSI_R_CoPt_bRvsCord_CoPt_bRvsCord(data)

#define Rte_IsUpdated_R_CoPt_bRvsCord_CoPt_bRvsCord() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3128.isUpdated)

#define Rte_Read_R_AccP_rAccP_AccP_rAccP(data) Rte_Read_GSI_R_AccP_rAccP_AccP_rAccP(data)

#define Rte_IsUpdated_R_AccP_rAccP_AccP_rAccP() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3125.isUpdated)

#define Rte_Read_R_TqSys_bAcvVehSpdCtlLim_TqSys_bAcvVehSpdCtlLim(data) Rte_Read_GSI_R_TqSys_bAcvVehSpdCtlLim_TqSys_bAcvVehSpdCtlLim(data)

#define Rte_IsUpdated_R_TqSys_bAcvVehSpdCtlLim_TqSys_bAcvVehSpdCtlLim() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3142.isUpdated)

#define Rte_Read_R_CoPt_stGSTyp_CoPt_stGSTyp(data) Rte_Read_GSI_R_CoPt_stGSTyp_CoPt_stGSTyp(data)

#define Rte_IsUpdated_R_CoPt_stGSTyp_CoPt_stGSTyp() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3133.isUpdated)

#define Rte_Read_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss(data) Rte_Read_GSI_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss(data)

#define Rte_IsUpdated_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3136.isUpdated)

#define Rte_Read_R_Veh_spdVeh_Veh_spdVeh(data) Rte_Read_GSI_R_Veh_spdVeh_Veh_spdVeh(data)

#define Rte_IsUpdated_R_Veh_spdVeh_Veh_spdVeh() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3144.isUpdated)

#define Rte_Read_R_CoPt_stDrvTra_CoPt_stDrvTra(data) Rte_Read_GSI_R_CoPt_stDrvTra_CoPt_stDrvTra(data)

#define Rte_IsUpdated_R_CoPt_stDrvTra_CoPt_stDrvTra() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3132.isUpdated)

#define Rte_Read_R_TqDem_tqCkEfc_TqDem_tqCkEfc(data) Rte_Read_GSI_R_TqDem_tqCkEfc_TqDem_tqCkEfc(data)

#define Rte_IsUpdated_R_TqDem_tqCkEfc_TqDem_tqCkEfc() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3141.isUpdated)

#define Rte_Read_R_CoVSCtl_rAccPTra_CoVSCtl_rAccPTra(data) Rte_Read_GSI_R_CoVSCtl_rAccPTra_CoVSCtl_rAccPTra(data)

#define Rte_IsUpdated_R_CoVSCtl_rAccPTra_CoVSCtl_rAccPTra() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3146.isUpdated)

#define Rte_Read_R_Ext_tAir_Ext_tAir(data) Rte_Read_GSI_R_Ext_tAir_Ext_tAir(data)

#define Rte_IsUpdated_R_Ext_tAir_Ext_tAir() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3139.isUpdated)

#define Rte_Read_R_AccP_bHdPtMon_AccP_bHdPtMon(data) Rte_Read_GSI_R_AccP_bHdPtMon_AccP_bHdPtMon(data)

#define Rte_IsUpdated_R_AccP_bHdPtMon_AccP_bHdPtMon() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3145.isUpdated)

#define Rte_Read_R_CoPt_stCpl_CoPt_stCpl(data) Rte_Read_GSI_R_CoPt_stCpl_CoPt_stCpl(data)

#define Rte_IsUpdated_R_CoPt_stCpl_CoPt_stCpl() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3131.isUpdated)

#define Rte_Call_R_FRM_bInhGSI3_GetFunctionPermission(Permission) (RE_FRM_bInhGSI3_GetFunctionPermission(Permission), RTE_E_OK)

#endif

#endif

/*------------------[port handle API mapping]--------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*------------------[application errors]-------------------------------------*/

/*------------------[init values]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#define Rte_InitValue_P_GSI3_noEgdGearCordFilIt_GSI3_noEgdGearCordFilIt 0U
#define Rte_InitValue_P_GSI3_noTarGear_GSI3_noTarGear 9U
#define Rte_InitValue_P_GSI3_stGearShiftReq_GSI3_stGearShiftReq 3U
#define Rte_InitValue_P_GSI3_stGSIEna_GSI3_stGSIEna 0U
#define Rte_InitValue_R_AccP_rAccP_AccP_rAccP 0U
#define Rte_InitValue_R_Cha_bABSReg_Cha_bABSReg 0U
#define Rte_InitValue_R_Cha_stTqReq_Cha_stTqReq 0U
#define Rte_InitValue_R_CoPt_bRvsCord_CoPt_bRvsCord 0U
#define Rte_InitValue_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt 0
#define Rte_InitValue_R_CoPt_posnLev_CoPt_posnLev 0U
#define Rte_InitValue_R_CoPt_stCpl_CoPt_stCpl 0U
#define Rte_InitValue_R_CoPt_stDrvTra_CoPt_stDrvTra 0U
#define Rte_InitValue_R_CoPt_stGSTyp_CoPt_stGSTyp 5U
#define Rte_InitValue_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal 0
#define Rte_InitValue_R_CoPTSt_stEng_CoPTSt_stEng 1U
#define Rte_InitValue_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss 0U
#define Rte_InitValue_R_Ext_nEng_Ext_nEng 0U
#define Rte_InitValue_R_Ext_stGBxCf_Ext_stGBxCf 0U
#define Rte_InitValue_R_Ext_tAir_Ext_tAir 20
#define Rte_InitValue_R_Ext_tCoMes_Ext_tCoMes 20
#define Rte_InitValue_R_TqDem_tqCkEfc_TqDem_tqCkEfc 0
#define Rte_InitValue_R_TqSys_bAcvVehSpdCtlLim_TqSys_bAcvVehSpdCtlLim 0U
#define Rte_InitValue_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg 0U
#define Rte_InitValue_R_Veh_spdVeh_Veh_spdVeh 0U
#define Rte_InitValue_R_AccP_bHdPtMon_AccP_bHdPtMon 0U
#define Rte_InitValue_R_CoVSCtl_rAccPTra_CoVSCtl_rAccPTra 0U

#endif

/*==================[type definitions]=======================================*/

/*------------------[instance handle type]-----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_GSI, RTE_CONST, RTE_CONST) Rte_Instance;
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

extern FUNC(void, RTE_APPL_CODE) RE_GSI_002_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_GSI_001_MSE(void);

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by Rte]--------------*/

#define RTE_START_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"
#if (!defined(RTE_RUNNABLEAPI_RE_GSI_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_Cha_stTqReq_Cha_stTqReq (P2VAR(DT_Cha_stTqReq, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_CoPt_posnLev_CoPt_posnLev (P2VAR(DT_CoPt_posnLev, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt (P2VAR(DT_CoPt_noEgdGearCordIt, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_Ext_tCoMes_Ext_tCoMes (P2VAR(DT_Ext_tCoMes, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal (P2VAR(DT_TqSys_tqCkEngReal, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_Ext_stGBxCf_Ext_stGBxCf (P2VAR(DT_Ext_stGBxCf, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_Ext_nEng_Ext_nEng (P2VAR(DT_Ext_nEng, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_TqSys_bAcvVehSpdCtlReg_TqSys_bAcvVehSpdCtlReg (P2VAR(DT_TqSys_bAcvVehSpdCtlReg, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_CoPTSt_stEng_CoPTSt_stEng (P2VAR(DT_CoPTSt_stEng, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_Cha_bABSReg_Cha_bABSReg (P2VAR(DT_Cha_bABSReg, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_CoPt_bRvsCord_CoPt_bRvsCord (P2VAR(DT_CoPt_bRvsCord, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_AccP_rAccP_AccP_rAccP (P2VAR(DT_AccP_rAccP, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_TqSys_bAcvVehSpdCtlLim_TqSys_bAcvVehSpdCtlLim (P2VAR(DT_TqSys_bAcvVehSpdCtlLim, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_CoPt_stGSTyp_CoPt_stGSTyp (P2VAR(DT_CoPt_stGSTyp, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_Ext_bBrkPedPrss_Ext_bBrkPedPrss (P2VAR(DT_Ext_bBrkPedPrss, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_Veh_spdVeh_Veh_spdVeh (P2VAR(DT_Veh_spdVeh, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_CoPt_stDrvTra_CoPt_stDrvTra (P2VAR(DT_CoPt_stDrvTra, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_TqDem_tqCkEfc_TqDem_tqCkEfc (P2VAR(DT_TqDem_tqCkEfc, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_CoVSCtl_rAccPTra_CoVSCtl_rAccPTra (P2VAR(DT_CoVSCtl_rAccPTra, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_Ext_tAir_Ext_tAir (P2VAR(DT_Ext_tAir, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_AccP_bHdPtMon_AccP_bHdPtMon (P2VAR(DT_AccP_bHdPtMon, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_GSI_R_CoPt_stCpl_CoPt_stCpl (P2VAR(DT_CoPt_stCpl, AUTOMATIC, RTE_APPL_DATA) data);

#endif

#define RTE_STOP_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by other Appl]--------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

#if (!defined RTE_CORE) /* if included by software component */

extern FUNC(void, RTE_APPL_CODE) RE_FRM_bInhGSI3_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);

#endif /* (!defined RTE_CORE) */

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*------------------[instance handle declaration]----------------------------*/
#define RTE_START_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

extern CONSTP2CONST(Rte_CDS_GSI, RTE_CONST, RTE_CONST) Rte_Inst_GSI;

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
#endif /* !defined(RTE_GSI_H) */
/*==================[end of file]============================================*/

