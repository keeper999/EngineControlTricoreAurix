/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC                                                     */
/*                                                                            */
/* !Component       : VemsRtLib                                               */
/* !Description     : shared utils                                            */
/*                                                                            */
/* !Module          : rt_ABS                                                  */
/*                                                                            */
/* !File            : rt_ABS.h                                                */
/*                                                                            */
/* !Target          : All (optimized for "32-bit Generic")                    */
/*                                                                            */
/* !Vendor          : Valeo                                                   */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2008 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/* Autocoding Information                                                     */
/*   Tool             : RTW-EC 7.5  (R2010a)  25-Jan-2010                     */
/*   CodeGen toolbox  : version 003                                           */
/*   Code generated on: Tue Mar 27 10:07:14 2012                              */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/VEMSRTLIB/Matlab2010a/rt_abs.h_v $*/
/* $Revision::   1.0                                                         $*/
/* $Author::   adelvare                               $$Date::   12 Apr 2012 $*/
/******************************************************************************/
#ifndef RTW_HEADER_rt_ABS_h_
#define RTW_HEADER_rt_ABS_h_

/******************************************************************************/
/* Check that Conditionnal Compilation options are defined                    */
/******************************************************************************/
/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/
/******************************************************************************/
/* TYPES                                                                      */
/******************************************************************************/

/******************************************************************************/
/* FUNCTION DECLARATION                                                       */
/******************************************************************************/

/* !Comment: Define data in section "SEC_VAR_UNSPECIFIED_LIB" */
#define VemsRtLib_START_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"
#define rt_ABS(a)                      ( ((a) >= 0) ? (a) : -(a) )
#define VemsRtLib_STOP_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

/******************************************************************************/
/* CALIBRATIONS DECLARATION                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTANTS DECLARATION                                                      */
/******************************************************************************/

/******************************************************************************/
/* DATA DECLARATION                                                           */
/******************************************************************************/
#endif                                 /* RTW_HEADER_rt_ABS_h_ */

/*-------------------------------- end of file -------------------------------*/
