#if !defined(RTE_PFILSLOW_H)
#define RTE_PFILSLOW_H

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
  * This file contains Rte component declarations for component type PFILSLOW
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
#include <Rte_PFILSLOW_Type.h> /* RTE application types header file */
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
#if !defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_EfcAirFil)
#define Rte_Write_P_CoCha_tqEfcAirReq_CoCha_tqEfcAirReq(data) Rte_Write_PFILSLOW_P_CoCha_tqEfcAirReq_CoCha_tqEfcAirReq(data)

#define Rte_Write_P_CoCha_tqIncCllIt_CoCha_tqIncCllIt(data) Rte_Write_PFILSLOW_P_CoCha_tqIncCllIt_CoCha_tqIncCllIt(data)

#define Rte_Write_P_CoCha_bAcvCllIt_CoCha_bAcvCllIt(data) Rte_Write_PFILSLOW_P_CoCha_bAcvCllIt_CoCha_bAcvCllIt(data)

#define Rte_Write_P_CoCha_tiTranCllIt_CoCha_tiTranCllIt(data) Rte_Write_PFILSLOW_P_CoCha_tiTranCllIt_CoCha_tiTranCllIt(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_EfcAirFil) || !defined(RTE_RUNNABLEAPI_RE_PFilSlow_008_MSE)
#define Rte_Read_R_CoPt_stProt_CoPt_stProt(data) Rte_Read_PFILSLOW_R_CoPt_stProt_CoPt_stProt(data)

#define Rte_IsUpdated_R_CoPt_stProt_CoPt_stProt() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3298.isUpdated)

#define Rte_Read_R_TqSys_tqCkEfcAirFil_TqSys_tqCkEfcAirFil(data) Rte_Read_PFILSLOW_R_TqSys_tqCkEfcAirFil_TqSys_tqCkEfcAirFil(data)

#define Rte_IsUpdated_R_TqSys_tqCkEfcAirFil_TqSys_tqCkEfcAirFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3311.isUpdated)

#define Rte_Read_R_CoCha_bTqReqMSR_CoCha_bTqReqMSR(data) Rte_Read_PFILSLOW_R_CoCha_bTqReqMSR_CoCha_bTqReqMSR(data)

#define Rte_IsUpdated_R_CoCha_bTqReqMSR_CoCha_bTqReqMSR() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3297.isUpdated)

#define Rte_Read_R_TqCha_tqAirTqDecReq_TqCha_tqAirTqDecReq(data) Rte_Read_PFILSLOW_R_TqCha_tqAirTqDecReq_TqCha_tqAirTqDecReq(data)

#define Rte_IsUpdated_R_TqCha_tqAirTqDecReq_TqCha_tqAirTqDecReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3302.isUpdated)

#define Rte_Read_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl(data) Rte_Read_PFILSLOW_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl(data)

#define Rte_IsUpdated_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3299.isUpdated)

#define Rte_Read_R_CoCha_bTqReqASR_CoCha_bTqReqASR(data) Rte_Read_PFILSLOW_R_CoCha_bTqReqASR_CoCha_bTqReqASR(data)

#define Rte_IsUpdated_R_CoCha_bTqReqASR_CoCha_bTqReqASR() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3296.isUpdated)

#define Rte_Read_R_TqCha_tqAirTqIncReq_TqCha_tqAirTqIncReq(data) Rte_Read_PFILSLOW_R_TqCha_tqAirTqIncReq_TqCha_tqAirTqIncReq(data)

#define Rte_IsUpdated_R_TqCha_tqAirTqIncReq_TqCha_tqAirTqIncReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3303.isUpdated)

#define Rte_Call_R_FRM_bInhESPReq_GetFunctionPermission(Permission) (RE_FRM_bInhESPReq_GetFunctionPermission(Permission), RTE_E_OK)

#endif
#define Rte_Call_R_PFilSlow_GetTimer_1ms_U32_GetTimer_1ms_U32 FRunTime_GetTimer_1ms_U32

#if !defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_CoChaTqSlow)
#define Rte_Write_P_TqSys_tqCkEfcAirFil_TqSys_tqCkEfcAirFil(data) Rte_Write_PFILSLOW_P_TqSys_tqCkEfcAirFil_TqSys_tqCkEfcAirFil(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_CoChaTqSlow) || !defined(RTE_RUNNABLEAPI_RE_PFilSlow_008_MSE)
#define Rte_Read_R_TqSys_nDif_nEngNTrb_TqSys_nDif_nEngNTrb(data) Rte_Read_PFILSLOW_R_TqSys_nDif_nEngNTrb_TqSys_nDif_nEngNTrb(data)

#define Rte_IsUpdated_R_TqSys_nDif_nEngNTrb_TqSys_nDif_nEngNTrb() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3305.isUpdated)

#define Rte_Read_R_Eng_nCkFil_Eng_nCkFil(data) Rte_Read_PFILSLOW_R_Eng_nCkFil_Eng_nCkFil(data)

#define Rte_IsUpdated_R_Eng_nCkFil_Eng_nCkFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3301.isUpdated)

#define Rte_Read_R_TqSys_noGearDece_TqSys_noGearDece(data) Rte_Read_PFILSLOW_R_TqSys_noGearDece_TqSys_noGearDece(data)

#define Rte_IsUpdated_R_TqSys_noGearDece_TqSys_noGearDece() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3308.isUpdated)

#define Rte_Read_R_TqSys_noGearCordDrivFil_TqSys_noGearCordDrivFil(data) Rte_Read_PFILSLOW_R_TqSys_noGearCordDrivFil_TqSys_noGearCordDrivFil(data)

#define Rte_IsUpdated_R_TqSys_noGearCordDrivFil_TqSys_noGearCordDrivFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3307.isUpdated)

#define Rte_Read_R_TqSys_tqThdPha3It_TqSys_tqThdPha3It(data) Rte_Read_PFILSLOW_R_TqSys_tqThdPha3It_TqSys_tqThdPha3It(data)

#define Rte_IsUpdated_R_TqSys_tqThdPha3It_TqSys_tqThdPha3It() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3313.isUpdated)

#define Rte_Read_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM(data) Rte_Read_PFILSLOW_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM(data)

#define Rte_IsUpdated_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3304.isUpdated)

#define Rte_Read_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil(data) Rte_Read_PFILSLOW_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil(data)

#define Rte_IsUpdated_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3312.isUpdated)

#define Rte_Read_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng(data) Rte_Read_PFILSLOW_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng(data)

#define Rte_IsUpdated_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3300.isUpdated)

#define Rte_Read_R_TqSys_stDrivFilCfPha_TqSys_stDrivFilCfPha(data) Rte_Read_PFILSLOW_R_TqSys_stDrivFilCfPha_TqSys_stDrivFilCfPha(data)

#define Rte_IsUpdated_R_TqSys_stDrivFilCfPha_TqSys_stDrivFilCfPha() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3309.isUpdated)

#define Rte_Read_R_TqSys_nEngDeceIni_TqSys_nEngDeceIni(data) Rte_Read_PFILSLOW_R_TqSys_nEngDeceIni_TqSys_nEngDeceIni(data)

#define Rte_IsUpdated_R_TqSys_nEngDeceIni_TqSys_nEngDeceIni() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3306.isUpdated)

#define Rte_Read_R_TqSys_tqCkDeceIniIt_TqSys_tqCkDeceIniIt(data) Rte_Read_PFILSLOW_R_TqSys_tqCkDeceIniIt_TqSys_tqCkDeceIniIt(data)

#define Rte_IsUpdated_R_TqSys_tqCkDeceIniIt_TqSys_tqCkDeceIniIt() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3310.isUpdated)

#endif

#endif

/*------------------[port handle API mapping]--------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*------------------[application errors]-------------------------------------*/

#define RTE_E_IF_CS_FRunTime_1MS_U32_E_NOT_OK 1U

/*------------------[init values]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#define Rte_InitValue_P_CoCha_bAcvCllIt_CoCha_bAcvCllIt 0U
#define Rte_InitValue_P_CoCha_tiTranCllIt_CoCha_tiTranCllIt 0U
#define Rte_InitValue_P_CoCha_tqEfcAirReq_CoCha_tqEfcAirReq 0
#define Rte_InitValue_P_CoCha_tqIncCllIt_CoCha_tqIncCllIt 0
#define Rte_InitValue_P_TqSys_tqCkEfcAirFil_TqSys_tqCkEfcAirFil 0
#define Rte_InitValue_R_CoCha_bTqReqASR_CoCha_bTqReqASR 0U
#define Rte_InitValue_R_CoCha_bTqReqMSR_CoCha_bTqReqMSR 0U
#define Rte_InitValue_R_CoPt_stProt_CoPt_stProt 0U
#define Rte_InitValue_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl 32000
#define Rte_InitValue_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng 0U
#define Rte_InitValue_R_Eng_nCkFil_Eng_nCkFil 0U
#define Rte_InitValue_R_TqCha_tqAirTqDecReq_TqCha_tqAirTqDecReq 0
#define Rte_InitValue_R_TqCha_tqAirTqIncReq_TqCha_tqAirTqIncReq 0
#define Rte_InitValue_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM 0
#define Rte_InitValue_R_TqSys_nDif_nEngNTrb_TqSys_nDif_nEngNTrb 0
#define Rte_InitValue_R_TqSys_nEngDeceIni_TqSys_nEngDeceIni 0U
#define Rte_InitValue_R_TqSys_noGearCordDrivFil_TqSys_noGearCordDrivFil 0U
#define Rte_InitValue_R_TqSys_noGearDece_TqSys_noGearDece 0U
#define Rte_InitValue_R_TqSys_stDrivFilCfPha_TqSys_stDrivFilCfPha 0U
#define Rte_InitValue_R_TqSys_tqCkDeceIniIt_TqSys_tqCkDeceIniIt 0
#define Rte_InitValue_R_TqSys_tqCkEfcAirFil_TqSys_tqCkEfcAirFil 0
#define Rte_InitValue_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil 0
#define Rte_InitValue_R_TqSys_tqThdPha3It_TqSys_tqThdPha3It 0

#endif

/*==================[type definitions]=======================================*/

/*------------------[instance handle type]-----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_PFILSLOW, RTE_CONST, RTE_CONST) Rte_Instance;
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

extern FUNC(void, RTE_APPL_CODE) RE_TqSys_Sdl10ms_CoChaTqSlow(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqSys_Sdl10ms_EfcAirFil(void);

extern FUNC(void, RTE_APPL_CODE) RE_PFilSlow_008_MSE(void);

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by Rte]--------------*/

#define RTE_START_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"
#if (!defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_EfcAirFil))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILSLOW_P_CoCha_tqEfcAirReq_CoCha_tqEfcAirReq (DT_CoCha_tqEfcAirReq data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILSLOW_P_CoCha_tqIncCllIt_CoCha_tqIncCllIt (DT_CoCha_tqIncCllIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILSLOW_P_CoCha_bAcvCllIt_CoCha_bAcvCllIt (DT_CoCha_bAcvCllIt data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILSLOW_P_CoCha_tiTranCllIt_CoCha_tiTranCllIt (DT_CoCha_tiTranCllIt data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_EfcAirFil))  || (!defined(RTE_RUNNABLEAPI_RE_PFilSlow_008_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_CoPt_stProt_CoPt_stProt (P2VAR(DT_CoPt_stProt, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqSys_tqCkEfcAirFil_TqSys_tqCkEfcAirFil (P2VAR(DT_TqSys_tqCkEfcAirFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_CoCha_bTqReqMSR_CoCha_bTqReqMSR (P2VAR(DT_CoCha_bTqReqMSR, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqCha_tqAirTqDecReq_TqCha_tqAirTqDecReq (P2VAR(DT_TqCha_tqAirTqDecReq, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_CoPt_tqEfcMaxProtDftl_CoPt_tqEfcMaxProtDftl (P2VAR(DT_CoPt_tqEfcMaxProtDftl, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_CoCha_bTqReqASR_CoCha_bTqReqASR (P2VAR(DT_CoCha_bTqReqASR, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqCha_tqAirTqIncReq_TqCha_tqAirTqIncReq (P2VAR(DT_TqCha_tqAirTqIncReq, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_CoChaTqSlow))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PFILSLOW_P_TqSys_tqCkEfcAirFil_TqSys_tqCkEfcAirFil (DT_TqSys_tqCkEfcAirFil data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqSys_Sdl10ms_CoChaTqSlow))  || (!defined(RTE_RUNNABLEAPI_RE_PFilSlow_008_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqSys_nDif_nEngNTrb_TqSys_nDif_nEngNTrb (P2VAR(DT_TqSys_nDif_nEngNTrb, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_Eng_nCkFil_Eng_nCkFil (P2VAR(DT_Eng_nCkFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqSys_noGearDece_TqSys_noGearDece (P2VAR(DT_TqSys_noGearDece, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqSys_noGearCordDrivFil_TqSys_noGearCordDrivFil (P2VAR(DT_TqSys_noGearCordDrivFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqSys_tqThdPha3It_TqSys_tqThdPha3It (P2VAR(DT_TqSys_tqThdPha3It, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqLimEM_tqLimEM_TqLimEM_tqLimEM (P2VAR(DT_TqLimEM_tqLimEM, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqSys_tqCkEfcFil_TqSys_tqCkEfcFil (P2VAR(DT_TqSys_tqCkEfcFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_CoVSCtl_rAccPEng_CoVSCtl_rAccPEng (P2VAR(DT_CoVSCtl_rAccPEng, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqSys_stDrivFilCfPha_TqSys_stDrivFilCfPha (P2VAR(DT_TqSys_stDrivFilCfPha, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqSys_nEngDeceIni_TqSys_nEngDeceIni (P2VAR(DT_TqSys_nEngDeceIni, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PFILSLOW_R_TqSys_tqCkDeceIniIt_TqSys_tqCkDeceIniIt (P2VAR(DT_TqSys_tqCkDeceIniIt, AUTOMATIC, RTE_APPL_DATA) data);

#endif

#define RTE_STOP_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by other Appl]--------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

#if (!defined RTE_CORE) /* if included by software component */

extern FUNC(void, RTE_APPL_CODE) RE_FRM_bInhESPReq_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) FRunTime_GetTimer_1ms_U32 (P2VAR(UInt32, AUTOMATIC, RTE_APPL_DATA) CurrentTime1msPtr);

#endif /* (!defined RTE_CORE) */

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*------------------[instance handle declaration]----------------------------*/
#define RTE_START_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

extern CONSTP2CONST(Rte_CDS_PFILSLOW, RTE_CONST, RTE_CONST) Rte_Inst_PFILSLOW;

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
#endif /* !defined(RTE_PFILSLOW_H) */
/*==================[end of file]============================================*/
