/**************************************************************************************************\
 *** 
 *** Simulink model       : CSMT_CGMT06_2097_v8_0
 *** TargetLink subsystem : CSMT_CGMT06_2097_v8_0/F0_Coordination_rapport_BV
 *** Codefile             : f0_coordination_rapport_bv_lut.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2010-08-25 14:02:49
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
 *** TargetLink version      : 3.0.1_RC3 from 13-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _F0_COORDINATION_RAPPORT_BV_LUT_H_
#define _F0_COORDINATION_RAPPORT_BV_LUT_H_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "tl_basetypes.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/

typedef struct MAP_Tab2DS0I2T4169_2097_tag {
   UInt8 Nx;
   UInt8 Ny;
   const UInt16 * x_table;
   const UInt16 * y_table;
   const UInt16 * z_table;
} MAP_Tab2DS0I2T4169_2097;
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

/******************************************************************************\
   UserGlobalLookup2D_2097: Derived TL_CG default function class.
\******************************************************************************/
extern UInt16 Tab2DS0I2T4169_2097(const MAP_Tab2DS0I2T4169_2097 * map, UInt16 x, UInt16 y);


#endif/*_F0_COORDINATION_RAPPORT_BV_LUT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
