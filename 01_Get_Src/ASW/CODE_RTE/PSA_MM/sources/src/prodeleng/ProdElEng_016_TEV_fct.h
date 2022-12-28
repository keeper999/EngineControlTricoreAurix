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
 ***  %name: ProdElEng_016_TEV_fct.h %
 *** 
 ***  %version: 4.2 %
 *** 
 ***  %date_modified: Wed May  2 09:43:09 2012 %
 *** 
 *** 
 ***  %derived_by: u349799 %
 ***  %release: ProdElEng/4.0 %
 ***  %full_filespec: ProdElEng_016_TEV_fct.h-4.2:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : ProdElEng_07_1021_TL
 *** TargetLink subsystem : ProdElEng_07_1021_TL/ProdElEng_016
 *** Codefile             : prodeleng_016_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2012-04-30 16:17:57
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
 *** Style definition file               : C:\dSPACE_TL_3.0.1\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE_TL_3.0.1\Matlab\Tl\XML\CodeGen\Stylesheets\TL_C
 ***                                       SourceCodeSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _PRODELENG_016_TEV_FCT_H_
#define _PRODELENG_016_TEV_FCT_H_

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

struct tag_SBFS_CoAntiStallUh_016_tp {
   unsigned int C0162_INIT : 1;
   unsigned int C0163_ACTIVATION : 1;
   unsigned int C0164_ATTENTE : 1;
   unsigned int C0165_AntiStall_Acv : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#define PRODELENG_START_SEC_GLOBAL_8BIT
#include "ProdElEng_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 ProdElEng_016_CoPTSt_stEng_in /* 
   Unit       : -
   Description: Etat moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  1 .. 15 */;

#define PRODELENG_STOP_SEC_GLOBAL_8BIT
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_GLOBAL_BOOLEAN
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_016_ACCmd_bInhAntiStall_in /* 
   Description: Condition d'inhibition du compresseur de climatisation pour anti-calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean ProdElEng_016_FRM_bInhTqLimUHAntiStall_in /* 
   Description: FRM d'inhibition de l'anti-calage par UH
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_ProdElEng_016_TEV_TqLimUH_bAcvAntiStall_in /* 
   Description: Vrai si anti-calage BVM est actif
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_ProdElEng_016_TEV_TqLimUH_bESPUnBlsAltReq_in /* 
   Description: Vrai si la synth�se des requ�tes ESP pour UH demande un d�lestage AltR
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define PRODELENG_STOP_SEC_GLOBAL_BOOLEAN
#include "ProdElEng_MemMap.h"

#define PRODELENG_START_SEC_GLOBAL_BOOLEAN
#include "ProdElEng_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN_IRV: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern Boolean TqLimUH_bAntiStall /* 
   Description: Flag � vrai si une demande d'assistance � l'anti-calage moteur par l'UH est faite
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern Boolean TqLimUH_bAntiStallGrdUnlim /* 
   Description: Flag de demande de non limitation du gradient de couple AltR en cas d'anti-calage de
   mand�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define PRODELENG_STOP_SEC_GLOBAL_BOOLEAN
#include "ProdElEng_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void ProdElEng_015_MSE_ini(Void);
extern Void ProdElEng_016_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void ProdElEng_016_FctVarInit(Void);


#endif/*_PRODELENG_016_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
