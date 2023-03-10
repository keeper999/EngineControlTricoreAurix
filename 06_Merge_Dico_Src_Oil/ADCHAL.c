/***************************************************************************
;**
;** FILE NAME      : ADCHAL.C75
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "ADCHAL_Cfg.h"
#include "ADCHAL_Typ_Cfg.h"
#include "STD_Types.h"
#include "ADCHAL.H"
#include "ADCHAL_L.H"
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
const uint16  ADCHAL_ku16HeatingMosOffsDWN = 0;
const uint16  ADCHAL_ku16HeatingMosOffsUPS = 0;
const uint16  ADCHAL_ku16ShuntResistorDWN = 0;
const uint16  ADCHAL_ku16ShuntResistorUPS = 0;
#pragma section

/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU2
#include "MemMap.h"
sint8 ADCHAL_s8BatTrimGain;
sint8 ADCHAL_s8BatTrimOffset;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU2
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/

