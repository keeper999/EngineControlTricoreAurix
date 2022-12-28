/**************************************************************************************************\
 *** 
 *** Simulink model       : CSMT_CGMT06_2409_v5_0_10ms
 *** TargetLink subsystem : CSMT_CGMT06_2409_v5_0_10ms/F00_CalculVarElementaire
 *** Codefile             : tqtreat_004_lut.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-07-19 10:16:22
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
 *** S0041                    CSMT_CGMT06_2409_v5_0_10ms/F00_CalculVarElementaire
 *** S0042                    F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0
 *** S0043                    F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms
 *** S0044                    F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps
 *** S0045                    F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_02_ConfGMP
 *** S0046                    F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_03_Precision_Couple
 *** S0047                    F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_04_Flag_activation_xVV
 *** S0048                    F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig
 *** S0049                    F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig1
 *** S00410                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig2
 *** S00411                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig3
 *** S00412                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig/Counter_Part
 *** S00413                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig/DetectSat2
 *** S00414                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig/DetectSat3
 *** S00415                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig/rising_edge
 *** S00416                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig1/Counter_Part
 *** S00417                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig1/DetectSat2
 *** S00418                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig1/DetectSat3
 *** S00419                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig1/rising_edge
 *** S00420                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig2/Counter_Part
 *** S00421                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig2/DetectSat2
 *** S00422                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig2/DetectSat3
 *** S00423                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig2/rising_edge
 *** S00424                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig3/Counter_Part
 *** S00425                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig3/DetectSat2
 *** S00426                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig3/DetectSat3
 *** S00427                   F00_CalculVarElementaire/F01_CSMT_CGMT06_2409_v5_0/F03_Calc_Element_10
 ***                          ms/F03_01_Calcul_Temps/CntTrig3/rising_edge
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TQTREAT_004_LUT_C_
#define _TQTREAT_004_LUT_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "TqTreat_004_lut.h"
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


/**************************************************************************************************\
 ***  FUNCTION:
 ***      Tab1DS0I2T0_004
 *** 
 ***  DESCRIPTION:
 ***      Generated function for look-up tables.
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***      const MAP_Tab1DS0I2T0_004 *map                 data structure
 ***      UInt8              x                   table input
 ***
 ***  RETURNS:
 ***      UInt8
 ***
 ***  SETTINGS:
 ***      Search algorithm...................: linear search, start low
 ***      Look-up method.....................: Interpolation - Use end values
 ***      Distances fit into given bitlengths: no
 ***      Behavior at boundaries.............: no
 ***      Starting point.....................: - (non-equidistant implementation)
 ***      Scaling unit.......................: - (non-equidistant implementation)
 ***
\**************************************************************************************************/

#define TQTREAT_START_SEC_CODE
#include "TqTreat_MemMap.h"
UInt8 Tab1DS0I2T0_004(const MAP_Tab1DS0I2T0_004 * map, UInt8 x)
{
   /* SLLocal: Default storage class for local variables | Width: 8 */
   UInt8 Aux_U8;
   UInt8 Aux_U8_a;

   /* SLLutLocalConst: Default storage class for local variables | Width: 32 */
   const UInt8 * x_table /* Scaling may differ through function reuse. */;
   const UInt8 * z_table /* Scaling may differ through function reuse. */;

   x_table = map->x_table;
   z_table = map->z_table;
   if (x <= *(x_table)) 
   {
      /* Saturation. */
      return z_table[0];
   }
   if (x >= x_table[(UInt8) (map->Nx - 1)]) 
   {
      return z_table[(UInt8) (map->Nx - 1)];
   }

   /* Linear search, start low. */
   (x_table)++;
   while (x > *((x_table)++)) 
   {
      (z_table)++;
   }
   x_table -= 2 /* 2. */;

   /* Interpolation. */
   Aux_U8 = (UInt8) (x - x_table[0]);
   Aux_U8_a = (UInt8) (x_table[1] - x);
   return ((UInt8) (((UInt16) (((UInt16) (((UInt16) Aux_U8) * ((UInt16) z_table[1]))) + ((UInt16)
    (((UInt16) Aux_U8_a) * ((UInt16) z_table[0]))))) / ((UInt8) (Aux_U8 + Aux_U8_a))));
}

#define TQTREAT_STOP_SEC_CODE
#include "TqTreat_MemMap.h"

/**************************************************************************************************\
 ***  FUNCTION:
 ***      Tab1DS0I2T4_004
 *** 
 ***  DESCRIPTION:
 ***      Generated function for look-up tables.
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***      const MAP_Tab1DS0I2T4_004 *map                 data structure
 ***      SInt16             x                   table input
 ***
 ***  RETURNS:
 ***      UInt8
 ***
 ***  SETTINGS:
 ***      Search algorithm...................: linear search, start low
 ***      Look-up method.....................: Interpolation - Use end values
 ***      Distances fit into given bitlengths: no
 ***      Behavior at boundaries.............: no
 ***      Starting point.....................: - (non-equidistant implementation)
 ***      Scaling unit.......................: - (non-equidistant implementation)
 ***
\**************************************************************************************************/

#define TQTREAT_START_SEC_CODE
#include "TqTreat_MemMap.h"
UInt8 Tab1DS0I2T4_004(const MAP_Tab1DS0I2T4_004 * map, SInt16 x)
{
   /* SLLocal: Default storage class for local variables | Width: 16 */
   UInt16 Aux_U16;
   UInt16 Aux_U16_a;

   /* SLLocal: Default storage class for local variables | Width: 8 */
   UInt8 Aux_U8;
   UInt8 Aux_U8_a;

   /* SLLutLocalConst: Default storage class for local variables | Width: 32 */
   const SInt16 * x_table /* Scaling may differ through function reuse. */;
   const UInt8 * z_table /* Scaling may differ through function reuse. */;

   x_table = map->x_table;
   z_table = map->z_table;
   if (x <= *(x_table)) 
   {
      /* Saturation. */
      return z_table[0];
   }
   if (x >= x_table[(UInt8) (map->Nx - 1)]) 
   {
      return z_table[(UInt8) (map->Nx - 1)];
   }

   /* Linear search, start low. */
   (x_table)++;
   while (x > *((x_table)++)) 
   {
      (z_table)++;
   }
   x_table -= 2 /* 2. */;
   Aux_U8 = *((z_table)++);
   Aux_U8_a = *(z_table);

   /* Interpolation. */
   Aux_U16 = (UInt16) (((UInt16) x) - ((UInt16) x_table[0]));
   Aux_U16_a = (UInt16) (((UInt16) x_table[1]) - ((UInt16) x_table[0]));
   if (Aux_U8 <= Aux_U8_a) 
   {
      /* Positive slope. */
      Aux_U8 += ((UInt8) ((((UInt32) (UInt8) (Aux_U8_a - Aux_U8)) * ((UInt32) Aux_U16)) / 
       Aux_U16_a));
   }
   else 
   {
      /* Negative slope. */
      Aux_U8 -= ((UInt8) ((((UInt32) (UInt8) (Aux_U8 - Aux_U8_a)) * ((UInt32) Aux_U16)) / 
       Aux_U16_a));
   }
   return Aux_U8;
}

#define TQTREAT_STOP_SEC_CODE
#include "TqTreat_MemMap.h"

/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

#endif/*_TQTREAT_004_LUT_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
