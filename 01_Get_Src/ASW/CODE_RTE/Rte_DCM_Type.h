#if !defined(RTE_DCM_TYPE_H)
#define RTE_DCM_TYPE_H

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
  * This file contains the application-specific types for component type DCM
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

#include <Rte_Type.h>         /* RTE types header file */

/*==================[macros]=================================================*/

/*------------------[enumeration constants]----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#ifndef DCM_DEFAULT_SESSION
#define DCM_DEFAULT_SESSION 1U
#endif /* DCM_DEFAULT_SESSION */

#ifndef DCM_PROGRAMMING_SESSION
#define DCM_PROGRAMMING_SESSION 2U
#endif /* DCM_PROGRAMMING_SESSION */

#ifndef DCM_EXTENDED_DIAGNOSTIC_SESSION
#define DCM_EXTENDED_DIAGNOSTIC_SESSION 3U
#endif /* DCM_EXTENDED_DIAGNOSTIC_SESSION */

#ifndef DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION
#define DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION 4U
#endif /* DCM_SAFETY_SYSTEM_DIAGNOSTIC_SESSION */

#ifndef DCM_ALL_SESSION_LEVEL
#define DCM_ALL_SESSION_LEVEL 255U
#endif /* DCM_ALL_SESSION_LEVEL */

#ifndef DCM_PSA_DIAGNOSTIC_SESSION
#define DCM_PSA_DIAGNOSTIC_SESSION 64U
#endif /* DCM_PSA_DIAGNOSTIC_SESSION */

#ifndef DCM_SUPPLIER_DIAGNOSTIC_SESSION
#define DCM_SUPPLIER_DIAGNOSTIC_SESSION 96U
#endif /* DCM_SUPPLIER_DIAGNOSTIC_SESSION */

#ifndef DCM_VALEO_DIAGNOSTIC_SESSION
#define DCM_VALEO_DIAGNOSTIC_SESSION 96U
#endif /* DCM_VALEO_DIAGNOSTIC_SESSION */

#ifndef DCM_INITIAL
#define DCM_INITIAL 0U
#endif /* DCM_INITIAL */

#ifndef DCM_PENDING
#define DCM_PENDING 1U
#endif /* DCM_PENDING */

#ifndef DCM_CANCEL
#define DCM_CANCEL 2U
#endif /* DCM_CANCEL */

#ifndef DCM_FORCE_RCRRP_OK
#define DCM_FORCE_RCRRP_OK 3U
#endif /* DCM_FORCE_RCRRP_OK */

#ifndef DCM_E_INCORRECTLENGTH
#define DCM_E_INCORRECTLENGTH 19U
#endif /* DCM_E_INCORRECTLENGTH */

#ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#define DCM_E_BRAKESWITCH_NOTCLOSED 143U
#endif /* DCM_E_BRAKESWITCH_NOTCLOSED */

#ifndef DCM_E_BUSYREPEATREQUEST
#define DCM_E_BUSYREPEATREQUEST 33U
#endif /* DCM_E_BUSYREPEATREQUEST */

#ifndef DCM_E_CONDITIONSNOTCORRECT
#define DCM_E_CONDITIONSNOTCORRECT 34U
#endif /* DCM_E_CONDITIONSNOTCORRECT */

#ifndef DCM_E_ENGINEISNOTRUNNING
#define DCM_E_ENGINEISNOTRUNNING 132U
#endif /* DCM_E_ENGINEISNOTRUNNING */

#ifndef DCM_E_ENGINEISRUNNING
#define DCM_E_ENGINEISRUNNING 131U
#endif /* DCM_E_ENGINEISRUNNING */

#ifndef DCM_E_ENGINERUNTIMETOOLOW
#define DCM_E_ENGINERUNTIMETOOLOW 133U
#endif /* DCM_E_ENGINERUNTIMETOOLOW */

#ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#define DCM_E_GENERALPROGRAMMINGFAILURE 114U
#endif /* DCM_E_GENERALPROGRAMMINGFAILURE */

#ifndef DCM_E_GENERALREJECT
#define DCM_E_GENERALREJECT 16U
#endif /* DCM_E_GENERALREJECT */

#ifndef DCM_E_REQUESTOUTOFRANGE
#define DCM_E_REQUESTOUTOFRANGE 49U
#endif /* DCM_E_REQUESTOUTOFRANGE */

#ifndef DCM_E_REQUESTSEQUENCEERROR
#define DCM_E_REQUESTSEQUENCEERROR 36U
#endif /* DCM_E_REQUESTSEQUENCEERROR */

#ifndef DCM_E_RPMTOOHIGH
#define DCM_E_RPMTOOHIGH 129U
#endif /* DCM_E_RPMTOOHIGH */

#ifndef DCM_E_RPMTOOLOW
#define DCM_E_RPMTOOLOW 130U
#endif /* DCM_E_RPMTOOLOW */

#ifndef DCM_E_SECURITYACCESSDENIED
#define DCM_E_SECURITYACCESSDENIED 51U
#endif /* DCM_E_SECURITYACCESSDENIED */

#ifndef DCM_E_SHIFTERLEVERNOTINPARK
#define DCM_E_SHIFTERLEVERNOTINPARK 144U
#endif /* DCM_E_SHIFTERLEVERNOTINPARK */

#ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION 126U
#endif /* DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION */

#ifndef DCM_E_TEMPERATURETOOHIGH
#define DCM_E_TEMPERATURETOOHIGH 134U
#endif /* DCM_E_TEMPERATURETOOHIGH */

#ifndef DCM_E_TEMPERATURETOOLOW
#define DCM_E_TEMPERATURETOOLOW 135U
#endif /* DCM_E_TEMPERATURETOOLOW */

#ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#define DCM_E_THROTTLE_PEDALTOOHIGH 138U
#endif /* DCM_E_THROTTLE_PEDALTOOHIGH */

#ifndef DCM_E_THROTTLE_PEDALTOOLOW
#define DCM_E_THROTTLE_PEDALTOOLOW 139U
#endif /* DCM_E_THROTTLE_PEDALTOOLOW */

#ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#define DCM_E_TORQUECONVERTERCLUTCHLOCKED 145U
#endif /* DCM_E_TORQUECONVERTERCLUTCHLOCKED */

#ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#define DCM_E_TRANSMISSIONRANGENOTINGEAR 141U
#endif /* DCM_E_TRANSMISSIONRANGENOTINGEAR */

#ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL 140U
#endif /* DCM_E_TRANSMISSIONRANGENOTINNEUTRAL */

#ifndef DCM_E_VEHICLESPEEDTOOHIGH
#define DCM_E_VEHICLESPEEDTOOHIGH 136U
#endif /* DCM_E_VEHICLESPEEDTOOHIGH */

#ifndef DCM_E_VEHICLESPEEDTOOLOW
#define DCM_E_VEHICLESPEEDTOOLOW 137U
#endif /* DCM_E_VEHICLESPEEDTOOLOW */

#ifndef DCM_E_VOLTAGETOOHIGH
#define DCM_E_VOLTAGETOOHIGH 146U
#endif /* DCM_E_VOLTAGETOOHIGH */

#ifndef DCM_E_VOLTAGETOOLOW
#define DCM_E_VOLTAGETOOLOW 147U
#endif /* DCM_E_VOLTAGETOOLOW */

#ifndef DCM_E_SECUTITYACCESSDENIED
#define DCM_E_SECUTITYACCESSDENIED 51U
#endif /* DCM_E_SECUTITYACCESSDENIED */

#ifndef DCM_DTRSTATUS_VISIBLE
#define DCM_DTRSTATUS_VISIBLE 0U
#endif /* DCM_DTRSTATUS_VISIBLE */

#ifndef DCM_DTRSTATUS_INVISIBLE
#define DCM_DTRSTATUS_INVISIBLE 1U
#endif /* DCM_DTRSTATUS_INVISIBLE */

#endif /* (!defined RTE_CORE) */

/*------------------[range definitions]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif /* (!defined RTE_CORE) */

/*------------------[mode declarations]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif /* (!defined RTE_CORE) */

/*==================[type definitions]=======================================*/

/*------------------[mode declaration group types]---------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif /* (!defined RTE_CORE) */

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
/** @} doxygen end group definition */
#endif /* !defined(RTE_DCM_TYPE_H) */
/*==================[end of file]============================================*/

