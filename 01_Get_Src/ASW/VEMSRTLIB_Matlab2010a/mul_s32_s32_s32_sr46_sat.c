/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SRV                                                     */
/*                                                                            */
/* !Component       : VemsRtLib                                               */
/* !Description     : Shared utilities provided by TMW                        */
/*                                                                            */
/* !Module          : mul_s32_s32_s32_sr46_sat                                */
/*                                                                            */
/* !File            : mul_s32_s32_s32_sr46_sat.c                              */
/*                                                                            */
/* !Target          : All (optimized for "Generic->Unspecified (assume 32-bit Generic)")*/
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
/*   Tool             : RTW-EC 7.2  (R2008b)  04-Aug-2008                     */
/*   CodeGen toolbox  : version 003                                           */
/*   Code generated on: Fri Jan 15 16:03:37 2010                              */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/VEMSRTLIB/Matlab2010a/mul_s32_s32$*/
/* $Revision::   1.0                                                         $*/
/* $Author::   adelvare                               $$Date::   17 Oct 2012 $*/
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

SInt32 mul_s32_s32_s32_sr46_sat(SInt32 locala, SInt32 localb)
{
  SInt32 localresult;
  UInt32 localu32_chi;
  UInt32 localu32_clo;
  SInt32 localtmp;
  mul_wide_s32(locala, localb, &localu32_chi, &localu32_clo);
  localtmp = (SInt32)localu32_chi;
  localu32_clo = (UInt32)((localtmp >= 0) ? ((SInt32)(((UInt32)localtmp) >>
    14)) : (~((SInt32)(((UInt32)(~localtmp)) >> 14))));
  localu32_chi = (((SInt32)localu32_chi) >= 0) ? 0U : ((UInt32)((SInt32)(-1)));
  if ((((SInt32)localu32_chi) > 0) || ((localu32_chi == ((UInt32)0)) &&
       (localu32_clo >= 2147483648U))) {
    localresult = MAX_int32_T;
  } else if ((((SInt32)localu32_chi) < (-1)) || ((((SInt32)localu32_chi) ==
               (-1)) && (localu32_clo < 2147483648U))) {
    localresult = MIN_int32_T;
  } else {
    localresult = (SInt32)localu32_clo;
  }

  return localresult;
}

#define VemsRtLib_STOP_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

/*-------------------------------- end of file -------------------------------*/
