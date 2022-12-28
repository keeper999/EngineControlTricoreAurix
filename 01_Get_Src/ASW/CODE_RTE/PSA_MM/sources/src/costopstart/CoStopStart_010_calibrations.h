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
 ***  %name: CoStopStart_010_calibrations.h %
 *** 
 ***  %version: 11.3 %
 *** 
 ***  %date_modified: Wed Jan 25 11:47:54 2012 %
 *** 
 *** 
 ***  %derived_by: e375697 %
 ***  %release: CoStopStart/11.0 %
 ***  %full_filespec: CoStopStart_010_calibrations.h-11.3:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : TL_01460_10_03526
 *** TargetLink subsystem : TL_01460_10_03526/CoStopStart_010
 *** Codefile             : costopstart_010_calibrations.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2012-01-25 11:40:53
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
 *** Extended variable sharing           : enabled
 *** Style definition file               : C:\dSPACE301\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE301\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSource
 ***                                       CodeSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _COSTOPSTART_010_CALIBRATIONS_H_
#define _COSTOPSTART_010_CALIBRATIONS_H_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "tl_defines.h"
#include "tl_basetypes.h"
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

#define COSTOPSTART_START_SEC_CALIB_8BIT
#include "CoStopStart_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoRStrt_spdRstrtTypATAuth_C /* 
   Unit       : km/h
   Description: Vitesse maximale pour autoriser le Smooth ReStart
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 30 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoRStrt_stAcvFastRstrtClas_C /* 
   Description: Classe de red�marrage pour la reconfiguration type 2.2
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoRStrt_stAcvRstrtClas_C /* 
   Description: Classe de la demande de redem induite par reconfiguration
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoRStrt_stRstrtReqClas_C /* 
   Description: Classe de la demande de redem Conducteur binaire
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoRStrt_tiVldRstrtReqAvl_C /* 
   Unit       : s
   Description: Temps de validation pour que la demande de red�marrage pr�sente ne soit pas intempes
   tive
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_CALIB_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_CALIB_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoRStrt_bAcvRstrtTypAT_C /* 
   Description: Activation du Smooth ReStart
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_CALIB_BOOLEAN
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_CARTO_16BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_16BIT: Mergeable Carto 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_MERGEABLE_CARTO_16BIT SInt16 CoRStrt_tOilGBxTiWaitRstrt_A[5] /* 
   Unit       : �C
   Description: Point d'appui en X (temp� d'huile BVA) du temps d'attente redem en Smooth ReStart
   LSB: 2^0 OFF:  0 MIN/MAX:  -50 .. 200 */;

#define COSTOPSTART_STOP_SEC_CARTO_16BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_CARTO_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_8BIT: Mergeable Carto 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CARTO_8BIT UInt8 CoRStrt_tiWaitRstrtTypAT_T[5] /* 
   Unit       : s
   Description: Valeur du temps d'attente redem en Smooth ReStart
   LSB: 0.05 OFF:  0 MIN/MAX:  0 .. 2 */;

#define COSTOPSTART_STOP_SEC_CARTO_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_INTERNAL_VAR_16BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_16BIT: Display 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 CoRStrt_spdVeh /* 
   Unit       : km/h
   Description: Vitesse V�hicule
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;

#define COSTOPSTART_STOP_SEC_INTERNAL_VAR_16BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_INTERNAL_VAR_8BIT
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_8BIT: Display 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 CoRStrt_stAcvRstrtClas /* 
   Description: Niveau de red�marrage si reconfiguration
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 CoRStrt_stAcvRstrtClas_MP /* 
   Description: Niveau de red�marrage si reconfiguration type 2.1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 CoRStrt_stClasDrvRstrt /* 
   Description: Classe de la demande de redem Conducteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 CoRStrt_stFastRstrtClas_MP /* 
   Description: Niveau de red�marrage si reconfiguration type 2.2
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;

#define COSTOPSTART_STOP_SEC_INTERNAL_VAR_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_INTERNAL_VAR_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoRStrt_bAcvFastRstrtCoPtUH /*
   Description: Demande de redem rapide par FRM */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoRStrt_bAcvRstrtCoPtUH /*
   Description: Demande de redem par FRM */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoRStrt_bInhSpdVehCoPtUH /*
   Description: Demande de non utilisation de la vitesse */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoRStrt_bRstrtAuthClas3_MP /*
   Description: Autorisation et demande de red�marrage de classe 3 */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoRStrt_bRstrtReqRaw /*
   Description: Demande de redem sans retard */;

#define COSTOPSTART_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "CoStopStart_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#endif/*_COSTOPSTART_010_CALIBRATIONS_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
