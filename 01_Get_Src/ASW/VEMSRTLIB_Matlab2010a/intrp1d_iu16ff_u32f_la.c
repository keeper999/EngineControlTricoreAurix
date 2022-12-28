/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SRV                                                     */
/*                                                                            */
/* !Component       : VemsRtLib                                               */
/* !Description     : Shared utilities provided by TMW                        */
/*                                                                            */
/* !Module          : intrp1d_iu16ff_u32f_la                                  */
/*                                                                            */
/* !File            : intrp1d_iu16ff_u32f_la.c                                */
/*                                                                            */
/* !Target          : All (optimized for "Generic->Custom")                   */
/*                                                                            */
/* !Vendor          : Valeo                                                   */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2008 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/* Autocoding Information                                                     */
/*   Tool             : RTW-EC 7.5  (R2010a)  25-Jan-2010                     */
/*   CodeGen toolbox  : version 003                                           */
/*   Code generated on: Tue Jul 31 10:29:41 2012                              */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/VEMSRTLIB/Matlab2010a/intrp1d_iu1$*/
/* $Revision::   1.0                                                         $*/
/* $Author::   adelvare                               $$Date::   01 Aug 2012 $*/
/******************************************************************************/
/* !CompReq : FLOAT                                                           */
/******************************************************************************/
#include "rtwtypes.h"
#include "rtw_shared_utils.h"

/******************************************************************************/
/* Check that Conditionnal Compilation options are defined                    */
/******************************************************************************/
/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/

/******************************************************************************/
/* DATA DEFINITION                                                            */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS DEFINITION                                                       */
/******************************************************************************/
#define VemsRtLib_START_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

Float32 intrp1d_iu16ff_u32f_la(UInt32 localbpIndex, Float32 localfrac, const
  UInt16 localtable[], UInt32 localmaxIndex)
{
  Float32 localy;
  UInt16 localyL_0d0;

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'wrapping'
   */
  if (localbpIndex == localmaxIndex) {
    localy = (Float32)localtable[localbpIndex];
  } else {
    localyL_0d0 = localtable[localbpIndex];
    localy = ((((Float32)localtable[localbpIndex + 1U]) - ((Float32)
                localyL_0d0)) * localfrac) + ((Float32)localyL_0d0);
  }

  return localy;
}

#define VemsRtLib_STOP_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

/*-------------------------------- end of file -------------------------------*/
