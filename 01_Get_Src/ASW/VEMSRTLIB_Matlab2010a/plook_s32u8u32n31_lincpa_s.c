/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC                                                     */
/*                                                                            */
/* !Component       : VemsRtLib                                               */
/* !Description     : shared utils                                            */
/*                                                                            */
/* !Module          : plook_s32u8u32n31_lincpa_s                              */
/*                                                                            */
/* !File            : plook_s32u8u32n31_lincpa_s.c                            */
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
/*   Code generated on: Sun Jan 29 09:48:48 2012                              */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/VEMSRTLIB/Matlab2010a/plook_s32u8$*/
/* $Revision::   1.0                                                         $*/
/* $Author::   fgravez                                $$Date::   06 Feb 2012 $*/
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
/* !Comment: Define code in section "SEC_CODE_LIB" */
#define VemsRtLib_START_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

SInt32 plook_s32u8u32n31_lincpa_s(UInt8 localu, const UInt8 localbp[],
  UInt32 localmaxIndex, UInt32 *localfraction, SInt32 *localprevIndex)
{
  SInt32 localbpIndex;
  UInt32 localstartIndex;
  UInt8 localbpLeftVar;

  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Process out of range input: 'Clip to range'
     Use previous index: 'on'
     Use last breakpoint for index at or above upper limit: 'on'
     Rounding mode: 'simplest'
   */
  if (localu <= localbp[0U]) {
    localbpIndex = 0;
    *localfraction = 0U;
  } else if (localu < localbp[localmaxIndex]) {
    localstartIndex = (UInt32)(*localprevIndex);
    localbpIndex = linsearch_s32u8(localu, localbp, localstartIndex);
    localbpLeftVar = localbp[(UInt32)localbpIndex];
    *localfraction = div_repeat_u32(((UInt32)((UInt8)(((UInt32)localu) -
                                       ((UInt32)localbpLeftVar)))) << 24U,
      (UInt32)((UInt8)(((UInt32)localbp[((UInt32)localbpIndex) + 1U]) -
                                      ((UInt32)localbpLeftVar))), 7U);
  } else {
    localbpIndex = (SInt32)localmaxIndex;
    *localfraction = 0U;
  }

  *localprevIndex = localbpIndex;
  return localbpIndex;
}

#define VemsRtLib_STOP_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

/*-------------------------------- end of file -------------------------------*/
