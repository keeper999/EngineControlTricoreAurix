/***************************** <AUTO_FILE_HEADER> *****************************/
/*                                                                            */
/* !Layer           : SWC                                                     */
/*                                                                            */
/* !Component       : VemsRtLib                                               */
/* !Description     : shared utils                                            */
/*                                                                            */
/* !Module          : mul_s32_s32_u32_sr8                                     */
/*                                                                            */
/* !File            : mul_s32_s32_u32_sr8.c                                   */
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
/*   Code generated on: Tue Feb 15 12:10:28 2011                              */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::   P:/ACT_EMS/LOG/REF/SWC_VEMS/VEMSRTLIB/Matlab2010a/mul_s32_s32$*/
/* $Revision::   1.0                                                         $*/
/* $Author::   ADELVARE                               $$Date::   15 Feb 2011 $*/
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

SInt32 mul_s32_s32_u32_sr8(SInt32 locala, UInt32 localb)
{
  SInt32 localresult;
  UInt32 localu32_chi;
  UInt32 localu32_clo;
  mul_wide_su32(locala, localb, &localu32_chi, &localu32_clo);
  localu32_clo = (UInt32)((localu32_chi << 24) | (localu32_clo >> 8));
  localresult = (SInt32)localu32_clo;
  return localresult;
}

#define VemsRtLib_STOP_SEC_CODE_LIB
#include "VemsRtLib_MemMap.h"

/*-------------------------------- end of file -------------------------------*/
