/******************************************************************************/
/*!file                                                                       */
/* \par                                                                       */
/* !Layer           : Service Layer                                           */
/*                                                                            */
/* !Component       : ComM                                                    */
/* !Description     : Communication Manager                                   */
/*                                                                            */
/* !Module          : ComM                                                    */
/* !Description     : Communication Manager                                   */
/*                                                                            */
/* !File            : ComM_BusSm.h                                            */
/*                                                                            */
/* !Scope           : Public                                                  */
/*                                                                            */
/* !Target          : All                                                     */
/*                                                                            */
/* !Vendor          : Valeo                                                   */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2011 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
/******************************************************************************/
/* PVCS                                                                       */
/******************************************************************************/
/* !Deviation: [0288] Violates MISRA Rule 5: "Only those characters and escape
    sequences which are defined in the ISO C standard shall be used."
    PVCS needs this, and this is within a commented area so no harm shall be
    done.
 */
/* PRQA S 0288 ++*/
/*
$Header::
*/
/* PRQA S 0288 --*/
/******************************************************************************/
/* PVCS                                                                       */
/******************************************************************************/
/* !Deviation : Inhibit MISRA rule [0288]: Dollar sign is needed by configu-  */
/*              ration management tool (PVCS)                                 */
/* PRQA S 0288 ++                                                             */
/* $Archive::   Y:/Prod_01/B791130I0/archives/B791130I0/02_Modules/04-ComM/02$*/
/* $Revision::   1.7      $$Author::   AELSOHBY       $$Date::   Apr 02 2014 $*/
/* PRQA S 0288 --                                                             */
/******************************************************************************/
/******************************************************************************/
/* !VnrOff : Names imposed by AUTOSAR Specification                           */
/******************************************************************************/

#ifndef COMM_BUSSM_H
#define COMM_BUSSM_H

#include "ComM_Types.h"
#define COMM_START_SEC_CODE
/* PRQA S 0838 ++*/
#include "MemMap.h"
/* PRQA S 0838 --*/

/* !Deviation : Inhibit MISRA rule [0850]: Macro expects empty arguments      */
/*              either using AUTOSAR AUTOMATIC definition or by configurable  */
/*              memory classes                                                */
/* PRQA S 0850 ++                                                             */

/******************************************************************************/
/*! \Description Callback function to indicate a changed Communication mode of
                 a channel, from Bus State Managers.
    \param[in]   Channel The Channel for which the Communication Mode is
                      indicated.                                              \n
                 \Range 0..(ComM_u16NO_OF_CHANNELS-1)                         \n
                 \Unit NetworkHandleType
    \param[out]  ComMode Pointer to the variable in which the Communication Mode
                         is stored.                                           \n
                 \Unit ComM_ModeType*
*******************************************************************************/

extern FUNC(void, COMM_CODE) ComM_BusSM_ModeIndication(
                         NetworkHandleType Channel,
                         P2VAR(ComM_ModeType,AUTOMATIC,COMM_APPL_DATA) ComMode);

/* PRQA S 0850 --                                                             */
#define COMM_STOP_SEC_CODE
/* PRQA S 0838 ++*/
#include "MemMap.h"
/* PRQA S 0838 --*/

#endif /* COMM_BUSSM_H */
