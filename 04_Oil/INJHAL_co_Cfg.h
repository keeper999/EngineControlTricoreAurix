/******************************************************************************/
/* !Layer           : HAL                                                     */
/* !Component       : INJHAL                                                  */
/* !Description     : Injection Hardware Abstraction Layer                    */
/*                                                                            */
/* !File            : INJHAL_CO_CFG.h                                         */
/* !Description     : INJHAL conditional compilation configurations           */
/*                                                                            */
/* !Reference       :                                                         */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT VALEO all rights reserved                                        */
/******************************************************************************/
/** 11/10/14, 10:16:18: generated by Genecode v2.6.0.0                        */
/******************************************************************************/

#ifndef INJHAL_CO_CFG_H
#define INJHAL_CO_CFG_H

#include "Std_Types.h"

/******************************************************************************/
/* DEFINES                                                                    */
/******************************************************************************/
/* !MComment : Defines for enabling or disabling strategies                   */
#define INJHAL_coENABLED                1u
#define INJHAL_coDISABLED               0u

/* !Comment : Defines for enabling or disabling strategies by conditional     */
/*            compilation                                                     */
#define INJHAL_coGDI_MODE_INJ_SUPPORTED    INJHAL_coENABLED
#define INJHAL_coSEQ_PRE_INJ_SUPPORTED     INJHAL_coDISABLED
#define INJHAL_coTEST_MODE_INJ_SUPPORTED   INJHAL_coDISABLED


#endif /* INJHAL_CO_CFG_H */

/*-------------------------------- end of file -------------------------------*/
