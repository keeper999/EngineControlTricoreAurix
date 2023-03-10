/***************************************************************************
;**
;** FILE NAME      : TQRESCORD_L.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef TQRESCORD_L_H
#define TQRESCORD_L_H

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
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

extern const uint8  TQRESCORD_u8Inhib;

#pragma section
/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

#define MEMSEC_START_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
extern uint16 TqRes_tqAirCmp;
extern uint16 TqRes_tqCanPurgRes;
extern uint16 TqRes_tqMaxResNotSat_MP;
#define MEMSEC_STOP_SEC_VAR_UNSPECIFIED_CPU1
#include "MemMap.h"
/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/

void TQRESCORD_vidCoord_degradations(void);
void TQRESCORD_vidCoord_reserves(void);
void TQRESCORD_vidInitOutput(void);


#endif /* TQRESCORD_L_H */

/*-------------------------------- end of file -------------------------------*/
