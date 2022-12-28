/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC                                                     */
/*                                                                            */
/* !Component       : VemsRtLib                                               */
/* !Description     : shared utils                                            */
/*                                                                            */
/* !Module          : look2_1fcv2bcvbcvbfbba7xfbbnx                           */
/*                                                                            */
/* !File            : look2_1fcv2bcvbcvbfbba7xfbbnx.c                         */
/*                                                                            */
/* !Target          : All (optimized for "Generic->32-bit x86 compatible")    */
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
/*   Code generated on: Tue Sep 18 10:15:42 2012                              */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/VEMSRTLIB/Matlab2010a/look2_1fcv2$*/
/* $Revision::   1.0                                                         $*/
/* $Author::   adelvare                               $$Date::   18 Sep 2012 $*/
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

Float32 look2_1fcv2bcvbcvbfbba7xfbbnx(UInt16 localu0, UInt16 localu1, const
  UInt16 localbp0[], const UInt16 localbp1[], const UInt32 localtable[],
  const UInt32 localmaxIndex[], UInt32 localstride)
{
  Float32 localy;
  UInt32 localmaxIndex0;
  UInt32 localmaxIndex1;
  Float32 localfrac;
  UInt32 localbpIndices[2];
  Float32 localfractions[2];
  UInt16 localbpLeftVar;
  UInt32 localbpIdx;
  UInt32 localiLeft;

  /* Lookup 2-D
     Canonical function name: look2_iu16u16lftu32n10If_binlcns
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'nearest'
   */
  localmaxIndex0 = localmaxIndex[0U];
  localmaxIndex1 = localmaxIndex[1U];

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Process out of range input: 'Clip to range'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
   */
  if (localu0 <= localbp0[0U]) {
    localiLeft = 0U;
    localfrac = 0.0F;
  } else if (localu0 < localbp0[localmaxIndex0]) {
    /* Binary Search */
    localbpIdx = ((localmaxIndex0 + 1U) >> 1U);
    localiLeft = 0U;
    while ((localmaxIndex0 - localiLeft) > 1U) {
      if (localu0 < localbp0[localbpIdx]) {
        localmaxIndex0 = localbpIdx;
      } else {
        localiLeft = localbpIdx;
      }

      localbpIdx = ((localmaxIndex0 + localiLeft) >> 1U);
    }

    localbpLeftVar = localbp0[localiLeft];
    localfrac = ((Float32)((UInt16)(((UInt32)localu0) - ((UInt32)
      localbpLeftVar)))) / ((Float32)((UInt16)(((UInt32)localbp0[localiLeft
      + 1U]) - ((UInt32)localbpLeftVar))));
  } else {
    localiLeft = localmaxIndex0 - 1U;
    localfrac = 1.0F;
  }

  localfractions[0U] = localfrac;
  localbpIndices[0U] = localiLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Process out of range input: 'Clip to range'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
   */
  if (localu1 <= localbp1[0U]) {
    localiLeft = 0U;
    localfrac = 0.0F;
  } else if (localu1 < localbp1[localmaxIndex1]) {
    /* Binary Search */
    localbpIdx = ((localmaxIndex1 + 1U) >> 1U);
    localiLeft = 0U;
    while ((localmaxIndex1 - localiLeft) > 1U) {
      if (localu1 < localbp1[localbpIdx]) {
        localmaxIndex1 = localbpIdx;
      } else {
        localiLeft = localbpIdx;
      }

      localbpIdx = ((localmaxIndex1 + localiLeft) >> 1U);
    }

    localbpLeftVar = localbp1[localiLeft];
    localfrac = ((Float32)((UInt16)(((UInt32)localu1) - ((UInt32)
      localbpLeftVar)))) / ((Float32)((UInt16)(((UInt32)localbp1[localiLeft
      + 1U]) - ((UInt32)localbpLeftVar))));
  } else {
    localiLeft = localmaxIndex1 - 1U;
    localfrac = 1.0F;
  }

  localfractions[1U] = localfrac;
  localbpIndices[1U] = localiLeft;

  /* Interpolation 2-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'nearest'
     Overflow mode: 'saturate'
   */
  localbpIdx = (localbpIndices[1] * localstride) + localbpIndices[0];
  localmaxIndex0 = localtable[localbpIdx];
  localfrac = (((((Float32)localtable[localbpIdx + 1U]) * 1.000000047E-003F) -
                (((Float32)localmaxIndex0) * 1.000000047E-003F)) *
               localfractions[0]) + (((Float32)localmaxIndex0) *
    1.000000047E-003F);
  localbpIdx = localbpIdx + localstride;
  localmaxIndex0 = localtable[localbpIdx];
  localy = ((((((((Float32)localtable[localbpIdx + 1U]) * 1.000000047E-003F) -
                (((Float32)localmaxIndex0) * 1.000000047E-003F)) *
               localfractions[0]) + (((Float32)localmaxIndex0) *
    1.000000047E-003F)) - localfrac) * localfractions[1]) + localfrac;
  return localy;
}

#define VemsRtLib_STOP_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

/*-------------------------------- end of file -------------------------------*/
