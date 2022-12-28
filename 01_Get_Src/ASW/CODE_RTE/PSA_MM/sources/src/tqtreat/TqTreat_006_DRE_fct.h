/**************************************************************************************************\
 ***
 *** Simulink model       : CSMT_CGMT06_2409_v5_0_EveSync
 *** TargetLink subsystem : CSMT_CGMT06_2409_v5_0_EveSync/F00_CalculVarElementaire
 *** Codefile             : TqTreat_006_DRE_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2010-08-04 10:59:52
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
 *** TargetLink version      : 2.2.1 from 21-Jun-2007
 *** Code generator version  : Build Id 2.2.1.9 from 2007-06-21 12:36:51
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TQTREAT_006_DRE_FCT_H_
#define _TQTREAT_006_DRE_FCT_H_

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

#define TQTREAT_START_SEC_GLOBAL_16BIT
#include "TqTreat_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_16BIT: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_IF_GLOBAL_16BIT UInt16 Ext_nEng1_out /*
   Unit       : RPM
   Description: Valeur pr�c�dente de Ext_nEng
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 Ext_nEng2_out /*
   Unit       : RPM
   Description: Valeur pr�c�dente de Ext_nEng
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 Ext_nEngAvr_out /*
   Unit       : RPM
   Description: R�gime moteur moyenn� sur 4 PMH / Mean engine speed on 4 TDC
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 Ext_nEngClc0_out /*
   Unit       : RPM
   Description: R�gime recentr� recalcul� entre 2 synchro moteur
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 Ext_nEngClc1_out /*
   Unit       : RPM
   Description: R�gime recentr� recalcul� entre 2 synchro moteur retard� d'une tache
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TqTreat_006_Ext_nEngClc_in /*
   Unit       : RPM
   Description: r�gime recentr�, valeur de remplacement : Ext_nEng,
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_IF_GLOBAL_16BIT UInt16 TqTreat_006_Ext_nEng_in /*
   Unit       : RPM
   Description: R�gime moteur mesur� sur une phase moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;

#define TQTREAT_STOP_SEC_GLOBAL_16BIT
#include "TqTreat_MemMap.h"

#define TQTREAT_START_SEC_GLOBAL_8BIT
#include "TqTreat_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 TqTreat_006_Ext_noCylEng_in /*
   Description: -
   LSB: 2^0 OFF:  0 MIN/MAX:  1 .. 12 */;

#define TQTREAT_STOP_SEC_GLOBAL_8BIT
#include "TqTreat_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void TqTreat_005_MSE_ini(Void);
extern Void TqTreat_006_DRE_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other modules)
\******************************************************************************/
extern Void TqTreat_005_FctVarInit(Void);


#endif/*_TQTREAT_006_DRE_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
