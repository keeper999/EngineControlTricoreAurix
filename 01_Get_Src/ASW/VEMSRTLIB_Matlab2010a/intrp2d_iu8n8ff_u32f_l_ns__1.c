/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SRV                                                     */
/*                                                                            */
/* !Component       : VemsRtLib                                               */
/* !Description     : Shared utilities provided by TMW                        */
/*                                                                            */
/* !Module          : intrp2d_iu8n8ff_u32f_l_ns__1                               */
/*                                                                            */
/* !File            : intrp2d_iu8n8ff_u32f_l_ns__1.c                             */
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
/*   Code generated on: Wed Apr 09 14:13:23 2014                              */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/VEMSRTLIB/Matlab2010a/intrp2d_iu8$*/
/* $Revision::   1.0                                                         $*/
/* $Author::   adelvare                               $$Date::   10 Apr 2014 $*/
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

Float32 intrp2d_iu8n8ff_u32f_l_ns__1(const UInt32 localbpIndex[], const Float32
  localfrac[], const UInt8 localtable[], UInt32 localstride)
{
  Float32 localy;
  Float32 localyL_1d;
  UInt32 localoffset_1d;
  UInt8 localyL_0d0;

  /* Interpolation 2-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'nearest'
     Overflow mode: 'saturate'
   */
  localoffset_1d = (localbpIndex[1] * localstride) + localbpIndex[0];
  localyL_0d0 = localtable[localoffset_1d];
  localyL_1d = (((((Float32)localtable[localoffset_1d + 1U]) *
                  4.879999906E-003F) - (((Float32)localyL_0d0) *
    4.879999906E-003F)) * localfrac[0]) + (((Float32)localyL_0d0) *
    4.879999906E-003F);
  localoffset_1d = localoffset_1d + localstride;
  localyL_0d0 = localtable[localoffset_1d];
  localy = ((((((((Float32)localtable[localoffset_1d + 1U]) * 4.879999906E-003F)
                - (((Float32)localyL_0d0) * 4.879999906E-003F)) * localfrac[0])
              + (((Float32)localyL_0d0) * 4.879999906E-003F)) - localyL_1d) *
            localfrac[1]) + localyL_1d;
  return localy;
}

#define VemsRtLib_STOP_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

/*-------------------------------- end of file -------------------------------*/
