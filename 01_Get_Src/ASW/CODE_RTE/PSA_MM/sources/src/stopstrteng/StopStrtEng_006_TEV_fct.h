/**************************************************************************************************\
 *** 
 *** Simulink model       : CSMT_CGMT07_1417_5_0
 *** TargetLink subsystem : CSMT_CGMT07_1417_5_0/StopStrtEng_006
 *** Codefile             : stopstrteng_006_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-05-18 12:15:33
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
 *** Share fcns between TL subsystems    : disabled
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
 *** TargetLink version      : 3.0.1_RC3 from 13-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _STOPSTRTENG_006_TEV_FCT_H_
#define _STOPSTRTENG_006_TEV_FCT_H_

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

struct tag_SBFS_F02_06_01_CHART_ETAT_AUTORISATION_006_tp {
   unsigned int Aux_C0061_sflag0 : 3;
   unsigned int C0061_F02_06_0__AUTORISATION_ns : 3;
   unsigned int C0061_glflag : 2;
   unsigned int C00611_AuthAll : 1;
   unsigned int C00612_InhAll : 1;
   unsigned int C00614_AuthAll : 1;
   unsigned int C00615_InhAll : 1;
   unsigned int C0063_Wait : 1;
   unsigned int C0064_AuthAll : 1;
   unsigned int C0065_InhAll : 1;
   unsigned int C0068_AuthAll : 1;
   unsigned int C0069_InhAll : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#define STOPSTRTENG_START_SEC_GLOBAL_16BIT
#include "StopStrtEng_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_16BIT: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_IF_GLOBAL_16BIT UInt16 StopStrtEng_006_Ext_nEng_in /* 
   Unit       : RPM
   Description: R�gime moteur valeur brut PMH. toujours pr�sent. voir CSMT_CGMT_08_0941
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
extern AR_IF_GLOBAL_16BIT UInt16 StopStrtEng_006_Ext_pAirExtMes_in /* 
   Unit       : mbar
   Description: Pression atmosph�rique estim�e
   LSB: 2^0 OFF:  0 MIN/MAX:  500 .. 1500 */;
extern AR_IF_GLOBAL_16BIT SInt16 StopStrtEng_006_Ext_tCoMes_in /* 
   Unit       : �C
   Description: Temp�rature d eau / coolant temperature. toujours pr�sent. voir CSMT_CGMT_08_0941
   LSB: 2^0 OFF:  0 MIN/MAX:  -40 .. 214 */;

#define STOPSTRTENG_STOP_SEC_GLOBAL_16BIT
#include "StopStrtEng_MemMap.h"

#define STOPSTRTENG_START_SEC_GLOBAL_8BIT
#include "StopStrtEng_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 StaCtl_stStaAuth_out /* 
   Description: Etat de l'autorisation de d�marrage vu du GMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEng_006_CoPTSt_stDrvTra_in /* 
   Description: Information sur l'�tat de la cha�ne de traction
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEng_006_Ext_posnGBxLev_in /* 
   Description: Position levier s�lection BV
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 13 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEng_006_Ext_stGBxCf_in /* 
   Description: D�finit le type de boite de vitesse / Defines the gearbox type - 0:BVM 1:BVA 2:BVMP
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_IF_GLOBAL_8BIT UInt8 StopStrtEng_006_Ext_stStrtCf_in /* 
   Description: Type de d�marrage : comprend le type de cl� et si le d�marrage est impulsionnel ou m
   aintenu
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;

#define STOPSTRTENG_STOP_SEC_GLOBAL_8BIT
#include "StopStrtEng_MemMap.h"

#define STOPSTRTENG_START_SEC_GLOBAL_BOOLEAN
#include "StopStrtEng_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_StopStrtEng_006_TEV_StaCtl_bEngStrtAuth_in /* 
   Description: Autorisation de d�marrer
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_StopStrtEng_006_TEV_StaCtl_bPrepStrtAuth_in /* 
   Description: Autorisation de lancer le d�marrage car la pr�paration est termin�e Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StaCtl_bStaAuth_out /* 
   Description: Autorisation filaire de d�marrage : repr�sente l'activation du d�marreur en AEE2004 
   et l'autorisation d'activation du d�marreur en AEE2010
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StaCtl_bStaRawAuth_out /* 
   Description: Autorisation de d�marrage brute (sans l'autorisation de d�marrage)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StaCtl_bStaStopReq_out /* 
   Description: Indique la fin de la s�quence d'activation du d�marreur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEng_006_ECU_bWkuMain_in /* 
   Description: Etat de r�veil principal ou principal degrade du CMM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEng_006_Ext_bBrkPedPrss_in /* 
   Description: Appui p�dale de frein / Brake switch. toujours pr�sent. voir CSMT_CGMT_08_0941
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean StopStrtEng_006_Ext_bTypStrt_in /* 
   Description: Etat de la demande de d�marrage BSI
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define STOPSTRTENG_STOP_SEC_GLOBAL_BOOLEAN
#include "StopStrtEng_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void StopStrtEng_005_MSE_ini(Void);
extern Void StopStrtEng_006_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void StopStrtEng_006_FctVarInit(Void);


#endif/*_STOPSTRTENG_006_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
