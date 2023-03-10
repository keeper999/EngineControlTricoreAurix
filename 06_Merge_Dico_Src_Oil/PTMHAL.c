/***************************************************************************
;**
;** FILE NAME      : PTMHAL.C75
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "PTMHAL_E.h"
#include "PTMHAL.H"
#include "PTMHAL_L.H"
/*-------------------------------------------------------------------------
    Defines
-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
    Typedef
-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
    Enums
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Calibrations
-------------------------------------------------------------------------*/

#pragma section ".calib" a
const uint8  PTMHAL_ku8AlarmNbPerCycle = 0;
const uint16  PTMHAL_ku16DurationsAlgo = 0;
#pragma section

/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU2
#include "MemMap.h"
boolean PTMHAL_bEnabled;
boolean PTMHAL_bFirstCalculEvtOccured;
uint8 PTMHAL_u8CycleIndex;
uint8 PTMHAL_u8NbDurationPacksValid;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU2
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/

