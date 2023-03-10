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
 ***  %name: TraBVx_018_lut.h %
 *** 
 ***  %version: 12.0.build1 %
 *** 
 ***  %date_modified: Thu Sep 29 14:57:31 2011 %
 *** 
 *** 
 ***  %derived_by: e360852 %
 ***  %release: TqStruct/12.0 %
 ***  %full_filespec: TraBVx_018_lut.h-12.0.build1:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : RE_018
 *** TargetLink subsystem : RE_018/F00_Coord_regulation_Regime_BV
 *** Codefile             : trabvx_018_lut.h
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
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TRABVX_018_LUT_H_
#define _TRABVX_018_LUT_H_

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

typedef struct MAP_TraBVx_018_Tab1DS0I4T3_tag {
   UInt8 Nx;
   const SInt8 * x_table;
   const UInt8 * z_table;
} MAP_TraBVx_018_Tab1DS0I4T3;
typedef struct MAP_TraBVx_018_Tab2DS34I2T4193_tag {
   UInt8 Nx;
   UInt8 Ny;
   const UInt16 * x_table;
   const SInt16 * y_table;
   const UInt16 * z_table;
} MAP_TraBVx_018_Tab2DS34I2T4193;
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
   UserGlobalLookup2D_018: Derived TL_CG default function class.
\******************************************************************************/
extern UInt16 TraBVx_018_Tab2DS34I2T4193(const MAP_TraBVx_018_Tab2DS34I2T4193 * map, UInt16 x,
    SInt16 y, UInt8 * local_xLow, UInt8 * local_yLow);

/******************************************************************************\
   UserGlobalLookup2D_018: Derived TL_CG default function class.
\******************************************************************************/
extern UInt8 TraBVx_018_Tab1DS0I4T3(const MAP_TraBVx_018_Tab1DS0I4T3 * map, SInt8 x);


#endif/*_TRABVX_018_LUT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
