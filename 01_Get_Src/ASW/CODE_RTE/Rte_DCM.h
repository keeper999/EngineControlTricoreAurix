#if !defined(RTE_DCM_H)
#define RTE_DCM_H

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
  * This file contains Rte component declarations for component type DCM
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:32 CET 2014. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <Rte_Intern_Application_Core1.h>
#include <Rte_Main.h>         /* RTE main header file */
#include <Rte_DCM_Type.h> /* RTE application types header file */
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
#if !defined(RTE_RUNNABLEAPI_Dcm_GetActiveProtocol) || !defined(RTE_RUNNABLEAPI_Dcm_TriggerOnEvent) || !defined(RTE_RUNNABLEAPI_Dcm_GetSesCtrlType) || !defined(RTE_RUNNABLEAPI_Dcm_GetSecurityLevel) || !defined(RTE_RUNNABLEAPI_Dcm_ResetToDefaultSession)
#define Rte_Call_SecurityAccess_DcmDspSecurity02_GetSeed DCM_MANU_GetSeed_SecLevel_2

#define Rte_Call_SecurityAccess_DcmDspSecurity02_CompareKey DCM_MANU_CompareKey_SecLevel_2

#define Rte_Call_DTRServices_OBDMID01_TID01_GetDTRValue DCM_MANU_GetDTRValue_OBDMID01_TID01

#define Rte_Call_DTRServices_OBDMID01_TID02_GetDTRValue DCM_MANU_GetDTRValue_OBDMID01_TID02

#define Rte_Call_DTRServices_OBDMID01_TID03_GetDTRValue DCM_MANU_GetDTRValue_OBDMID01_TID03

#define Rte_Call_DTRServices_OBDMID01_TID04_GetDTRValue DCM_MANU_GetDTRValue_OBDMID01_TID04

#define Rte_Call_DTRServices_OBDMID01_TID07_GetDTRValue DCM_MANU_GetDTRValue_OBDMID01_TID07

#define Rte_Call_DTRServices_OBDMID01_TID08_GetDTRValue DCM_MANU_GetDTRValue_OBDMID01_TID08

#define Rte_Call_DTRServices_OBDMID01_TID0A_GetDTRValue DCM_MANU_GetDTRValue_OBDMID01_TID0A

#define Rte_Call_DTRServices_OBDMID01_TIDA0_GetDTRValue DCM_MANU_GetDTRValue_OBDMID01_TIDA0

#define Rte_Call_DTRServices_OBDMID01_TIDA1_GetDTRValue DCM_MANU_GetDTRValue_OBDMID01_TIDA1

#define Rte_Call_DTRServices_OBDMID02_TID01_GetDTRValue DCM_MANU_GetDTRValue_OBDMID02_TID01

#define Rte_Call_DTRServices_OBDMID02_TID02_GetDTRValue DCM_MANU_GetDTRValue_OBDMID02_TID02

#define Rte_Call_DTRServices_OBDMID02_TID03_GetDTRValue DCM_MANU_GetDTRValue_OBDMID02_TID03

#define Rte_Call_DTRServices_OBDMID02_TID04_GetDTRValue DCM_MANU_GetDTRValue_OBDMID02_TID04

#define Rte_Call_DTRServices_OBDMID02_TID07_GetDTRValue DCM_MANU_GetDTRValue_OBDMID02_TID07

#define Rte_Call_DTRServices_OBDMID02_TID08_GetDTRValue DCM_MANU_GetDTRValue_OBDMID02_TID08

#define Rte_Call_DTRServices_OBDMID02_TIDC0_GetDTRValue DCM_MANU_GetDTRValue_OBDMID02_TIDC0

#define Rte_Call_DTRServices_OBDMID02_TIDC1_GetDTRValue DCM_MANU_GetDTRValue_OBDMID02_TIDC1

#define Rte_Call_DTRServices_OBDMID02_TIDC2_GetDTRValue DCM_MANU_GetDTRValue_OBDMID02_TIDC2

#define Rte_Call_DTRServices_OBDMID21_TID81_GetDTRValue DCM_MANU_GetDTRValue_OBDMID21_TID81

#define Rte_Call_DTRServices_OBDMID41_TIDD0_GetDTRValue DCM_MANU_GetDTRValue_OBDMID41_TIDD0

#define Rte_Call_DTRServices_OBDMID42_TIDDA_GetDTRValue DCM_MANU_GetDTRValue_OBDMID42_TIDDA

#define Rte_Call_DTRServices_OBDMIDA2_TID0B_GetDTRValue DCM_MANU_GetDTRValue_OBDMIDA2_TID0B

#define Rte_Call_DTRServices_OBDMIDA2_TID0C_GetDTRValue DCM_MANU_GetDTRValue_OBDMIDA2_TID0C

#define Rte_Call_DTRServices_OBDMIDA3_TID0B_GetDTRValue DCM_MANU_GetDTRValue_OBDMIDA3_TID0B

#define Rte_Call_DTRServices_OBDMIDA3_TID0C_GetDTRValue DCM_MANU_GetDTRValue_OBDMIDA3_TID0C

#define Rte_Call_DTRServices_OBDMIDA4_TID0B_GetDTRValue DCM_MANU_GetDTRValue_OBDMIDA4_TID0B

#define Rte_Call_DTRServices_OBDMIDA4_TID0C_GetDTRValue DCM_MANU_GetDTRValue_OBDMIDA4_TID0C

#define Rte_Call_DTRServices_OBDMIDA5_TID0B_GetDTRValue DCM_MANU_GetDTRValue_OBDMIDA5_TID0B

#define Rte_Call_DTRServices_OBDMIDA5_TID0C_GetDTRValue DCM_MANU_GetDTRValue_OBDMIDA5_TID0C

#define Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol DCM_MANU_StartProtocol

#define Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StopProtocol DCM_MANU_StopProtocol

#define Rte_Call_ServiceRequestSupplierIndication_DcmDslServiceReqSupIndication_SupplierIndication DCM_MANU_SupplierIndication

#define Rte_Call_ServiceRequestManufacturerIndication_DcmDslServiceReqManIndication_ManufacturerIndication DCM_MANU_ManufacturerIndication

#define Rte_Call_ServiceRequestManufSupplIndication_DcmDslServiceReqManufSupplInd_ManufSupplIndication DCM_MANU_ManufSupplIndication

#endif

#endif

/*------------------[port handle API mapping]--------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*------------------[application errors]-------------------------------------*/

#define RTE_E_DCMServices_E_NOT_OK 1U
#define RTE_E_DCM_Roe_E_NOT_OK 1U
#define RTE_E_SecurityAccess_DcmDspSecurity02_E_OK 0U
#define RTE_E_SecurityAccess_DcmDspSecurity02_E_NOT_OK 1U
#define RTE_E_SecurityAccess_DcmDspSecurity02_E_PENDING 10U
#define RTE_E_SecurityAccess_DcmDspSecurity02_E_COMPARE_KEY_FAILED 11U
#define RTE_E_DTRServices_E_OK 0U
#define RTE_E_DTRServices_E_NOT_OK 1U
#define RTE_E_DTRServices_E_PENDING 10U
#define RTE_E_CallbackDCMRequestServices_E_OK 0U
#define RTE_E_CallbackDCMRequestServices_E_NOT_OK 1U
#define RTE_E_CallbackDCMRequestServices_E_PROTOCOL_NOT_ALLOWED 5U
#define RTE_E_CallbackDCMRequestServices_E_REQUEST_NOT_ACCEPTED 8U
#define RTE_E_CallbackDCMRequestServices_E_PENDING 10U
#define RTE_E_CallbackDCMRequestServices_E_FORCE_RCRRP 12U
#define RTE_E_ServiceRequestSupplierIndication_E_OK 0U
#define RTE_E_ServiceRequestSupplierIndication_E_NOT_OK 1U
#define RTE_E_ServiceRequestSupplierIndication_E_PROTOCOL_NOT_ALLOWED 5U
#define RTE_E_ServiceRequestSupplierIndication_E_REQUEST_NOT_ACCEPTED 8U
#define RTE_E_ServiceRequestSupplierIndication_E_PENDING 10U
#define RTE_E_ServiceRequestSupplierIndication_E_FORCE_RCRRP 12U
#define RTE_E_ServiceReqManufacturerIndication_E_OK 0U
#define RTE_E_ServiceReqManufacturerIndication_E_NOT_OK 1U
#define RTE_E_ServiceReqManufacturerIndication_E_PROTOCOL_NOT_ALLOWED 5U
#define RTE_E_ServiceReqManufacturerIndication_E_REQUEST_NOT_ACCEPTED 8U
#define RTE_E_ServiceReqManufacturerIndication_E_PENDING 10U
#define RTE_E_ServiceReqManufacturerIndication_E_FORCE_RCRRP 12U
#define RTE_E_ServiceReqManufSupplierIndication_E_OK 0U
#define RTE_E_ServiceReqManufSupplierIndication_E_NOT_OK 1U
#define RTE_E_ServiceReqManufSupplierIndication_E_PROTOCOL_NOT_ALLOWED 5U
#define RTE_E_ServiceReqManufSupplierIndication_E_REQUEST_NOT_ACCEPTED 8U
#define RTE_E_ServiceReqManufSupplierIndication_E_PENDING 10U
#define RTE_E_ServiceReqManufSupplierIndication_E_FORCE_RCRRP 12U

/*------------------[init values]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*==================[type definitions]=======================================*/

/*------------------[instance handle type]-----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_DCM, RTE_CONST, RTE_CONST) Rte_Instance;
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

extern FUNC(void, RTE_APPL_CODE) Dcm_MainFunction(void);

extern FUNC(Std_ReturnType, RTE_APPL_CODE) Dcm_GetActiveProtocol(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_APPL_DATA) ActiveProtocol);

extern FUNC(Std_ReturnType, RTE_APPL_CODE) Dcm_TriggerOnEvent(UInt8 RoeEventId);

extern FUNC(Std_ReturnType, RTE_APPL_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_APPL_DATA) SesCtrl);

extern FUNC(Std_ReturnType, RTE_APPL_CODE) Dcm_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_APPL_DATA) SecLevel);

extern FUNC(Std_ReturnType, RTE_APPL_CODE) Dcm_ResetToDefaultSession(void);

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by Rte]--------------*/

#define RTE_START_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"
#if (!defined(RTE_RUNNABLEAPI_Dcm_GetActiveProtocol))  || (!defined(RTE_RUNNABLEAPI_Dcm_TriggerOnEvent)) || (!defined(RTE_RUNNABLEAPI_Dcm_GetSesCtrlType)) || (!defined(RTE_RUNNABLEAPI_Dcm_GetSecurityLevel)) || (!defined(RTE_RUNNABLEAPI_Dcm_ResetToDefaultSession))
#endif

#define RTE_STOP_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by other Appl]--------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

#if (!defined RTE_CORE) /* if included by software component */

extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetSeed_SecLevel_2 (P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_APPL_DATA) ErrorCode);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_CompareKey_SecLevel_2 (P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) Key, Dcm_OpStatusType OpStatus);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID01_TID01 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID01_TID02 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID01_TID03 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID01_TID04 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID01_TID07 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID01_TID08 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID01_TID0A (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID01_TIDA0 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID01_TIDA1 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID02_TID01 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID02_TID02 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID02_TID03 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID02_TID04 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID02_TID07 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID02_TID08 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID02_TIDC0 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID02_TIDC1 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID02_TIDC2 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID21_TID81 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID41_TIDD0 (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMID42_TIDDA (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMIDA2_TID0B (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMIDA2_TID0C (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMIDA3_TID0B (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMIDA3_TID0C (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMIDA4_TID0B (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMIDA4_TID0C (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMIDA5_TID0B (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_GetDTRValue_OBDMIDA5_TID0C (Dcm_OpStatusType OpStatus, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Testval, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Minlimit, P2VAR(UInt16, AUTOMATIC, RTE_APPL_DATA) Maxlimit, P2VAR(Dcm_DTRStatusType, AUTOMATIC, RTE_APPL_DATA) Status);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_StartProtocol (UInt8 ProtocolID);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_StopProtocol (UInt8 ProtocolID);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_SupplierIndication (UInt8 SID, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) RequestData, UInt16 DataSize, UInt8 ReqType, UInt8 DcmRxPduId, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) ErrorCode);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_ManufacturerIndication (UInt8 SID, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) RequestData, UInt16 DataSize, UInt8 ReqType, UInt8 DcmRxPduId, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) ErrorCode);
extern FUNC(Std_ReturnType, RTE_APPL_CODE) DCM_MANU_ManufSupplIndication (UInt8 SID, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) RequestData, UInt16 DataSize, UInt8 ReqType, UInt8 DcmRxPduId, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) ErrorCode);

#endif /* (!defined RTE_CORE) */

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*------------------[instance handle declaration]----------------------------*/
#define RTE_START_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

extern CONSTP2CONST(Rte_CDS_DCM, RTE_CONST, RTE_CONST) Rte_Inst_DCM;

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
#endif /* !defined(RTE_DCM_H) */
/*==================[end of file]============================================*/
