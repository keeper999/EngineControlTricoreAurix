#if !defined(RTE_FRUNTIME2_H)
#define RTE_FRUNTIME2_H

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
  * This file contains Rte component declarations for component type FRunTime2
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
#include <Rte_FRunTime2_Type.h> /* RTE application types header file */
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

#endif

/*------------------[port handle API mapping]--------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*------------------[application errors]-------------------------------------*/

#define RTE_E_IF_CS_FRunTime_1MS_U32_E_NOT_OK 1U
#define RTE_E_IF_CS_FRunTime_100MS_U32_E_NOT_OK 1U
#define RTE_E_IF_CS_FRunTime_1S_U32_E_NOT_OK 1U
#define RTE_E_IF_CS_FRunTime_1MIN_U32_E_NOT_OK 1U
#define RTE_E_IF_CS_FRunTime_100US_U32_E_NOT_OK 1U

/*------------------[init values]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*==================[type definitions]=======================================*/

/*------------------[instance handle type]-----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_FRunTime2, RTE_CONST, RTE_CONST) Rte_Instance;
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

extern FUNC(Std_ReturnType, RTE_APPL_CODE) FRunTime_GetTimer_1ms_U32(P2VAR(UInt32, AUTOMATIC, RTE_APPL_DATA) CurrentTime1msPtr);

extern FUNC(Std_ReturnType, RTE_APPL_CODE) FRunTime_GetTimer_100ms_U32(P2VAR(UInt32, AUTOMATIC, RTE_APPL_DATA) CurrentTime100msPtr);

extern FUNC(Std_ReturnType, RTE_APPL_CODE) FRunTime_GetTimer_1s_U32(P2VAR(UInt32, AUTOMATIC, RTE_APPL_DATA) CurrentTime1sPtr);

extern FUNC(Std_ReturnType, RTE_APPL_CODE) FRunTime_GetTimer_1min_U32(P2VAR(UInt32, AUTOMATIC, RTE_APPL_DATA) CurrentTime1minPtr);

extern FUNC(Std_ReturnType, RTE_APPL_CODE) FRunTime_GetTimer_100us_U32(P2VAR(UInt32, AUTOMATIC, RTE_APPL_DATA) CurrentTime100usPtr);

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by Rte]--------------*/

#define RTE_START_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"

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

extern CONSTP2CONST(Rte_CDS_FRunTime2, RTE_CONST, RTE_CONST) Rte_Inst_FRunTime2;

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
#endif /* !defined(RTE_FRUNTIME2_H) */
/*==================[end of file]============================================*/

