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
 ***  %name: TqEM_006_lut.h %
 *** 
 ***  %version: 12.0.build2 %
 *** 
 ***  %date_modified: Thu Jun 28 14:30:59 2012 %
 *** 
 *** 
 ***  %derived_by: u169773 %
 ***  %release: TqEM/12.0 %
 ***  %full_filespec: TqEM_006_lut.h-12.0.build2:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : RE_TqEM_006_TL
 *** TargetLink subsystem : RE_TqEM_006_TL/TqEM_006
 *** Codefile             : tqem_006_lut.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2012-06-28 11:40:10
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

#ifndef _TQEM_006_LUT_H_
#define _TQEM_006_LUT_H_

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

typedef struct MAP_TqEM_006_Tab1DS2I2T1_tag {
   UInt8 Nx;
   const UInt16 * x_table;
   const UInt8 * z_table;
} MAP_TqEM_006_Tab1DS2I2T1;
typedef struct MAP_TqEM_006_Tab1DS2I2T2084_tag {
   UInt8 Nx;
   const SInt16 * x_table;
   const SInt16 * z_table;
} MAP_TqEM_006_Tab1DS2I2T2084;
typedef struct MAP_TqEM_006_Tab1DS2I2T4_tag {
   UInt8 Nx;
   const SInt16 * x_table;
   const UInt8 * z_table;
} MAP_TqEM_006_Tab1DS2I2T4;
typedef struct MAP_TqEM_006_Tab1DS2I4T0_tag {
   UInt8 Nx;
   const UInt8 * x_table;
   const UInt8 * z_table;
} MAP_TqEM_006_Tab1DS2I4T0;
typedef struct MAP_TqEM_006_Tab2DS34I2T16652_tag {
   UInt8 Nx;
   UInt8 Ny;
   const SInt16 * x_table;
   const UInt16 * y_table;
   const SInt16 * z_table;
} MAP_TqEM_006_Tab2DS34I2T16652;
typedef struct MAP_TqEM_006_Tab2DS34I2T32_tag {
   UInt8 Nx;
   UInt8 Ny;
   const UInt8 * x_table;
   const SInt16 * y_table;
   const UInt8 * z_table;
} MAP_TqEM_006_Tab2DS34I2T32;
typedef struct MAP_TqEM_006_Tab2DS34I2T36_tag {
   UInt8 Nx;
   UInt8 Ny;
   const SInt16 * x_table;
   const SInt16 * y_table;
   const UInt8 * z_table;
} MAP_TqEM_006_Tab2DS34I2T36;
typedef struct MAP_TqEM_006_Tab2DS34I2T4172_tag {
   UInt8 Nx;
   UInt8 Ny;
   const SInt16 * x_table;
   const UInt16 * y_table;
   const UInt16 * z_table;
} MAP_TqEM_006_Tab2DS34I2T4172;
typedef struct MAP_TqEM_006_Tab2DS34I2T4193_tag {
   UInt8 Nx;
   UInt8 Ny;
   const UInt16 * x_table;
   const SInt16 * y_table;
   const UInt16 * z_table;
} MAP_TqEM_006_Tab2DS34I2T4193;
typedef struct MAP_TqEM_006_Tab2DS34I2T8_tag {
   UInt8 Nx;
   UInt8 Ny;
   const UInt8 * x_table;
   const UInt16 * y_table;
   const UInt8 * z_table;
} MAP_TqEM_006_Tab2DS34I2T8;
typedef struct MAP_TqEM_006_Tab2DS34I2T9_tag {
   UInt8 Nx;
   UInt8 Ny;
   const UInt16 * x_table;
   const UInt16 * y_table;
   const UInt8 * z_table;
} MAP_TqEM_006_Tab2DS34I2T9;
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
   UserGlobalLookup1D_006: Derived TL_CG default function class.
\******************************************************************************/
extern SInt16 TqEM_006_Tab1DS2I2T2084(const MAP_TqEM_006_Tab1DS2I2T2084 * map, SInt16 x, UInt8 *
    local_xLow);
extern SInt16 TqEM_006_Tab2DS34I2T16652(const MAP_TqEM_006_Tab2DS34I2T16652 * map, SInt16 x, UInt16
    y, UInt8 * local_xLow, UInt8 * local_yLow);
extern UInt16 TqEM_006_Tab2DS34I2T4172(const MAP_TqEM_006_Tab2DS34I2T4172 * map, SInt16 x, UInt16 y,
     UInt8 * local_xLow, UInt8 * local_yLow);
extern UInt16 TqEM_006_Tab2DS34I2T4193(const MAP_TqEM_006_Tab2DS34I2T4193 * map, UInt16 x, SInt16 y,
     UInt8 * local_xLow, UInt8 * local_yLow);

/******************************************************************************\
   UserGlobalLookup1D_006: Derived TL_CG default function class.
\******************************************************************************/
extern UInt8 TqEM_006_Tab1DS2I2T1(const MAP_TqEM_006_Tab1DS2I2T1 * map, UInt16 x, UInt8 *
    local_xLow);
extern UInt8 TqEM_006_Tab1DS2I2T4(const MAP_TqEM_006_Tab1DS2I2T4 * map, SInt16 x, UInt8 *
    local_xLow);
extern UInt8 TqEM_006_Tab1DS2I4T0(const MAP_TqEM_006_Tab1DS2I4T0 * map, UInt8 x, UInt8 *
    local_xLow);
extern UInt8 TqEM_006_Tab2DS34I2T32(const MAP_TqEM_006_Tab2DS34I2T32 * map, UInt8 x, SInt16 y, UInt8
     * local_xLow, UInt8 * local_yLow);
extern UInt8 TqEM_006_Tab2DS34I2T36(const MAP_TqEM_006_Tab2DS34I2T36 * map, SInt16 x, SInt16 y,
    UInt8 * local_xLow, UInt8 * local_yLow);
extern UInt8 TqEM_006_Tab2DS34I2T8(const MAP_TqEM_006_Tab2DS34I2T8 * map, UInt8 x, UInt16 y, UInt8 *
     local_xLow, UInt8 * local_yLow);
extern UInt8 TqEM_006_Tab2DS34I2T9(const MAP_TqEM_006_Tab2DS34I2T9 * map, UInt16 x, UInt16 y, UInt8
    * local_xLow, UInt8 * local_yLow);


#endif/*_TQEM_006_LUT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
