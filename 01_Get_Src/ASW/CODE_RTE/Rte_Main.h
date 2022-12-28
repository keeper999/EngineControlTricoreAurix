#if !defined(RTE_MAIN_H)
#define RTE_MAIN_H

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
  * This file contains Rte configuration information
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:24 CET 2014. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/
#include <Rte_Type.h>       /* RTE types header file */
/*==================[macros]=================================================*/

/*==================[type definitions]=======================================*/

/*------------------[calprm group types]-------------------------------------*/

/*==================[external function declarations]=========================*/
#define RTE_START_SEC_CODE
#include "MemMap.h"

/** \brief Rte_Start lifecycle API function  */
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Start(void);

/** \brief Rte_Stop lifecycle API function  */
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Stop(void);

/** \brief Rte_PartitionTerminated lifecycle API function  */
extern FUNC(void, RTE_CODE) Rte_PartitionTerminated_Application_Core1 (void);

/** \brief Rte_PartitionTerminated lifecycle API function  */
extern FUNC(void, RTE_CODE) Rte_PartitionTerminated_Application_Core2 (void);

/** \brief Rte_PartitionTerminated lifecycle API function  */
extern FUNC(void, RTE_CODE) Rte_PartitionTerminated_Application_Core0 (void);

#define RTE_STOP_SEC_CODE
#include "MemMap.h"

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/
/*------------------[calibration buffers]------------------------------------*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/
/** @} doxygen end group definition */
#endif /* !defined(RTE_MAIN_H) */
/*==================[end of file]============================================*/

