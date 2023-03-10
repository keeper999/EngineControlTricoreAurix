/***************************************************************************
;**
;** FILE NAME      : ANGSCHED.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef ANGSCHED_H
#define ANGSCHED_H

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "ANGSCHED_CFG.h"
#include "ANGSCHED_TYPES.h"
/*-------------------------------------------------------------------------
    Defines
-------------------------------------------------------------------------*/

#define ANGSCHED_u8ALARM_1                0
#define ANGSCHED_u8ALARM_2                1

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


#pragma section
/*-------------------------------------------------------------------------
    Variables
-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
    Porteurs de bits
-------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------
    Prototypes
-------------------------------------------------------------------------*/

void ANGSCHED_vidDisable(uint8 u8AngschedAlarm);
void ANGSCHED_vidEnable(uint8 u8AngschedAlarm);
void ANGSCHED_vidInit(void);


#endif /* ANGSCHED_H */

/*-------------------------------- end of file -------------------------------*/
