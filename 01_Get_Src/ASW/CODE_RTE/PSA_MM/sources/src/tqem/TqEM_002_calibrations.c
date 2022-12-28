/*******************************************************************************
*                           P. C. A.
*
*                    Peugeot Citroen Automobile
*
*        This file is the property of PCA. All rights are reserved
*        by PCA and this file must not be copied or disclosed
*       (in whole or in part) without prior written consent of PCA.
*
********************************************************************************
*
* %name: TqEM_002_calibrations.c %
*
* %version: 10.3.build2 %
*
* %date_modified: Fri Jan 13 11:19:23 2012 %
*
*
* %derived_by: e360487 %
* %release: TqEM/10.0 %
* %full_filespec: TqEM_002_calibrations.c-10.3.build2:csrc:1 %
*
*******************************************************************************/
/**************************************************************************************************\
 *** 
 *** Simulink model       : RE_TqEM_002_TL
 *** TargetLink subsystem : RE_TqEM_002_TL/TqEM_002
 *** Codefile             : tqem_002_calibrations.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-06-20 11:36:38
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
 *** S0021                    RE_TqEM_002_TL/TqEM_002
 *** S0022                    TqEM_002/Subsystem
 *** S0023                    TqEM_002/Subsystem/F01_Determiner_frequence_calcul_couple_easy_move
 *** S0024                    TqEM_002/Subsystem/F01_Determiner_frequence_calcul_couple_easy_move/Ne
 ***                          gHys
 *** S0025                    TqEM_002/Subsystem/F01_Determiner_frequence_calcul_couple_easy_move/Ne
 ***                          gHys/BasculeRS
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TQEM_002_CALIBRATIONS_C_
#define _TQEM_002_CALIBRATIONS_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "TqEM_002_calibrations.h"
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

#define TQEM_START_SEC_CALIB_16BIT
#include "TqEM_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_16BIT: Mergeable Calib 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_nEngHiThdTrigSel_C = 3200 /* 
   Unit       : RPM
   Description: Seuil de r�gime moteur au-dessus duquel le trigger utilis� est synchronise � plusieu
   rs PMH
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_nEngLoThdTrigSel_C = 2800 /* 
   Unit       : RPM
   Description: Seuil de r�gime moteur en-dessous duquel le trigger utilis� est synchronise au PMH
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;

#define TQEM_STOP_SEC_CALIB_16BIT
#include "TqEM_MemMap.h"

#define TQEM_START_SEC_INTERNAL_VAR_16BIT
#include "TqEM_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_16BIT: Display 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_tqCkEngRealEM /* 
   Unit       : N.m
   Description: Estimation du couple moteur effectif r�el coordonn� essence / diesel
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define TQEM_STOP_SEC_INTERNAL_VAR_16BIT
#include "TqEM_MemMap.h"

#define TQEM_START_SEC_INTERNAL_VAR_8BIT
#include "TqEM_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_8BIT: Display 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_INTERNAL_VAR_DISP_8BIT UInt8 TqEM_tiEveSync /* 
   Unit       : s
   Description: Temps entre 2 �v�nements synchrones
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.1 */;

#define TQEM_STOP_SEC_INTERNAL_VAR_8BIT
#include "TqEM_MemMap.h"

#define TQEM_START_SEC_INTERNAL_VAR_BOOLEAN
#include "TqEM_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_EveSync /*
   Description: Trigger des fonctions synchrones tous les PMH ou plusieurs PMH */;

#define TQEM_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "TqEM_MemMap.h"

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

#endif/*_TQEM_002_CALIBRATIONS_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
