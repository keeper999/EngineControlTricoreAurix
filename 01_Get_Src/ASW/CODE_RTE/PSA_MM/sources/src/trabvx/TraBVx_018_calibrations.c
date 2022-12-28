/**************************************************************************************************\
 *** 
 ***                            P. C. A.
 *** 
 ***                     Peugeot Citroen Automobile
 *** 
 ***         This file is the property of PCA. All rights are reserved
 ***         by PCA and this file must not be copied or disclosed
 ***        (in whole or in part) without prior written consent of PCA.
 *** 
 *** *******************************************************************************
 *** 
 ***  %name: TraBVx_018_calibrations.c %
 *** 
 ***  %version: 12.0.build1 %
 *** 
 ***  %date_modified: Thu Sep 29 11:15:22 2011 %
 *** 
 *** 
 ***  %derived_by: e360852 %
 ***  %release: TqStruct/12.0 %
 ***  %full_filespec: TraBVx_018_calibrations.c-12.0.build1:csrc:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : RE_018
 *** TargetLink subsystem : RE_018/F00_Coord_regulation_Regime_BV
 *** Codefile             : trabvx_018_calibrations.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-09-29 11:12:49
 ***
 *** CODE GENERATOR OPTIONS:
 *** Compiler                            : <unknown>
 *** Target                              : Generic
 *** ANSI-C compatible code              : yes
 *** Optimization level                  : 2
 *** Constant style                      : decimal
 *** Clean code option                   : enabled
 *** Logging mode                        : Do not log anything
 *** Linker sections                     : enabled
 *** Assembler statements                : disabled
 *** Variable name length                : 31 chars
 *** Use global bitfields                : disabled
 *** Stateflow: use of bitfields         : enabled
 *** State activity encoding limit       : 5
 *** Omit zero inits in restart function : disabled
 *** Share fcns between TL subsystems    : enabled
 *** Generate 64bit functions            : enabled
 *** Inlining Threshold                  : 6
 *** Line break limit                    : 100
 *** Target optimized boolean data type  : enabled
 *** Keep saturation elements            : disabled
 *** Extended variable sharing           : disabled
 *** Style definition file               : C:\dSPACE\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceCod
 ***                                       eSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** S0181                    RE_018/F00_Coord_regulation_Regime_BV
 *** S0182                    F00_Coord_regulation_Regime_BV/F01_01460_10_01244
 *** S0183                    F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F02_Calcul_Temps_fil
 ***                          trage
 *** S0184                    F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime
 *** S0185                    F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F04_Calcul_Couple_Tu
 ***                          rbo
 *** S0186                    F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran
 *** S0187                    F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW
 *** S0188                    F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW_Sel
 *** S0189                    F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/CalculTr
 *** S01810                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/DetectSat
 *** S01811                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/Subsystem
 *** S01812                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/TmrRst
 *** S01813                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/UnitDly_ExtIni
 *** S01814                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/UnitDly_ExtIni1
 *** S01815                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/CalculTr/DetectSat
 *** S01816                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/CalculTr/Subsystem1
 *** S01817                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/CalculTr/UnitDly_ExtIni1
 *** S01818                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/Subsystem/SecureDivi
 *** S01819                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/Subsystem/UnitDly_ExtIni1
 *** S01820                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/Subsystem/SecureDivi/DetectSat
 *** S01821                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 *** ulation_Regime/ContMltpSwRmpTran/MSW/Subsystem/SecureDivi/SecureDivi_P
 ***                          art
 *** S01822                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/TmrRst/DetectSat
 *** S01823                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/TmrRst/DetectSat1
 *** S01824                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/TmrRst/UnitDly_ExtIni
 *** S01825                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW/TmrRst/rising_edge
 *** S01826                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW_Sel/DetectSat
 *** S01827                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW_Sel/UnitDly_ExtIni
 *** S01828                   F00_Coord_regulation_Regime_BV/F01_01460_10_01244/F03_Coordination_Reg
 ***                          ulation_Regime/ContMltpSwRmpTran/MSW_Sel/UnitDly_ExtIni1
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TRABVX_018_CALIBRATIONS_C_
#define _TRABVX_018_CALIBRATIONS_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "TraBVx_018_calibrations.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#define TRABVX_START_SEC_CALIB_BOOLEAN
#include "TraBVx_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoPt_bAcvTqAirLimSIP_C = 0 /* 
   Description: Mode de calcul du couple pour le pilotage turbo diesel en passage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoPt_bAcvTqAirSIPTar_C = 0 /* 
   Description: Mode de calcul du couple pour le pilotage turbo diesel en passage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define TRABVX_STOP_SEC_CALIB_BOOLEAN
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_CARTO_16BIT
#include "TraBVx_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_16BIT: Mergeable Carto 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_MERGEABLE_CARTO_16BIT UInt16 CoPt_nEngTiTranX_A[10] = 
{
   /*[0..9]*/ 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000
   /* 500., 1000., 1500., 2000., 2500., 3000., 3500., 4000., 4500., 5000. */
} /* 
   Unit       : RPM
   Description: Breakpoint en r�gime
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 8000 */;
AR_MERGEABLE_CARTO_16BIT UInt16 CoPt_tiTran_tqNRegGBx_M[10][9] = 
{
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   },
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   },
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   },
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   },
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   },
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   },
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   },
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   },
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   },
   {
      /*[0..8]*/ 50, 25, 15, 5, 0, 5, 15, 25, 50
      /* 0.5, 0.25, 0.15, 0.05, 0., 0.05, 0.15, 0.25, 0.5 */
   }
} /* 
   Unit       : s
   Description: Temps de transition en fin de r�gulation de r�gime
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;
AR_MERGEABLE_CARTO_16BIT SInt16 CoPt_tqDeltaTiTranY_A[9] = 
{
   /*[0..8]*/ -3200, -1600, -800, -160, 0, 160, 800, 1600, 3200
   /* -200., -100., -50., -10., 0., 10., 50., 100., 200. */
} /* 
   Unit       : N.m
   Description: Breakpoint en �cart de couple
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define TRABVX_STOP_SEC_CARTO_16BIT
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_CARTO_8BIT
#include "TraBVx_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_8BIT: Mergeable Carto 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CARTO_8BIT UInt8 CoPt_facTranTqNRegGBx_T[10] = 
{
   /*[0..9]*/ 32, 32, 32, 32, 32, 32, 32, 32, 32, 32
   /* 1., 1., 1., 1., 1., 1., 1., 1., 1., 1. */
} /* 
   Unit       : -
   Description: Breakpoint en pond�ration du temps de transition
   LSB: 2^-5 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CARTO_8BIT SInt8 CoPt_noGearTranTqNRegGBx_A[10] = 
{
   /*[0..9]*/ -1, 0, 1, 2, 3, 4, 5, 6, 7, 8
   /* -1., 0., 1., 2., 3., 4., 5., 6., 7., 8. */
} /* 
   Description: Breakpoint en rapport de boite
   LSB: 2^0 OFF:  0 MIN/MAX:  -1 .. 8 */;

#define TRABVX_STOP_SEC_CARTO_8BIT
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_INTERNAL_VAR_16BIT
#include "TraBVx_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_16BIT: Display 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_INTERNAL_VAR_DISP_16BIT UInt16 CoPt_tiDeacNReg /* 
   Unit       : s
   Description: Temps de filtrage en fin de r�gulation de r�gime
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 5 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 CoPt_tqIdcCordCutDyn /* 
   Unit       : N.m
   Description: Couple indique coordonn� avec les demandes de coupure dynamique
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 CoPt_tqNRegFil /* 
   Unit       : N.m
   Description: Couple de r�gulation de r�gime filtr�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define TRABVX_STOP_SEC_INTERNAL_VAR_16BIT
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_INTERNAL_VAR_BOOLEAN
#include "TraBVx_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoPt_bDeacCllNReg_irv_MP /*
   Description: Autorisation de d�bouclage de la structure couple en fin de relance en r�gime */;

#define TRABVX_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "TraBVx_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INLINE FUNCTIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

#endif/*_TRABVX_018_CALIBRATIONS_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
