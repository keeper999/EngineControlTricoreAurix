/**********************************************************************************************************************/
/* !Layer           : SRVL                                                                                            */
/* !Component       : RTMCLD                                                                                          */
/* !Description     : Real time measurement of CPU load                                                               */
/*                                                                                                                    */
/* !File            : RTMCLD_DEF.h                                                                                    */
/* !Description     : Real time measurement of CPU load                                                               */
/*                                                                                                                    */
/* !Reference       : PTS_DOC_5385380                                                                                 */
/*                                                                                                                    */
/* Coding language  : C                                                                                               */
/*                                                                                                                    */
/* COPYRIGHT VALEO all rights reserved                                                                                */
/**********************************************************************************************************************/
/* Dimension Informations
 * %PCMS_HEADER_SUBSTITUTION_START:%
 * The PID has this format: <Product ID>:<Item ID>.<Variant>-<Item Type>;<Revision>
 * %PID: LIBEMB:A1063.A-SRC;1 %
 * %PCMS_HEADER_SUBSTITUTION_END:%
 **********************************************************************************************************************/

#ifndef RTMCLD_DEF_H
#define RTMCLD_DEF_H


#include "STD_TYPES.h"
#include "RTMCLD_CFG.h"
#include "RTMCLD_Co.h"

#ifndef RTMCLD_coENABLE
   #error the macro-constant RTMCLD_coENABLE shall be defined
#endif

#ifndef RTMCLD_coLOOP_MEASURE
   #error the macro-constant RTMCLD_coENABLE shall be defined
#endif


#if (RTMCLD_coLOOP_MEASURE == RTMCLD_coENABLE)

   #define RTMCLD_START_SEC_VAR_NOINIT_8BIT
   #include "RTMCLD_MemMap.h"
extern uint8 RTMCLD_u8TestDone;
   #define RTMCLD_STOP_SEC_VAR_NOINIT_8BIT
   #include "RTMCLD_MemMap.h"

   #define RTMCLD_START_SEC_VAR_NOINIT_32BIT
   #include "RTMCLD_MemMap.h"
extern uint32 RTMCLD_u32MeasuredValue;
   #define RTMCLD_STOP_SEC_VAR_NOINIT_32BIT
   #include "RTMCLD_MemMap.h"

#endif /* RTMCLD_coLOOP_MEASURE == RTMCLD_coENABLE */


#define RTMCLD_START_SEC_VAR_NOINIT_32BIT
#include "RTMCLD_MemMap.h"
extern uint32 RTMCLD_u32IdleClock;
#define RTMCLD_STOP_SEC_VAR_NOINIT_32BIT
#include "RTMCLD_MemMap.h"

#define RTMCLD_START_SEC_VAR_32BIT
#include "RTMCLD_MemMap.h"
extern uint32 RTMCLD_u32Load;
extern uint32 RTMCLD_u32PrevIdleClock;

#if (RTMCLD_coCONFIGURATION_TYPE != RTMCLD_coPREBUILD)
extern uint32 RTMCLD_u32MeasurementPeriodMs;
#endif
#define RTMCLD_STOP_SEC_VAR_32BIT
#include "RTMCLD_MemMap.h"

#define RTMCLD_START_SEC_VAR_16BIT
#include "RTMCLD_MemMap.h"
extern uint16  RTMCLD_u16MeasurementPeriodCounter;
#define RTMCLD_STOP_SEC_VAR_16BIT
#include "RTMCLD_MemMap.h"


#endif /* RTMCLD_DEF_H */

/*------------------------------------------------------- end of file ------------------------------------------------*/
