/***************************************************************************
;**
;** FILE NAME      : STATUSOFDTC_L.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef STATUSOFDTC_L_H
#define STATUSOFDTC_L_H

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "GD_A.h"
#include "STATUSOFDTC_Macro.h"
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

extern const uint8  StatusOfDTC_u8Inhib;

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

void SODTC_CDThd(uint16 u16DftIdx);
void SODTC_DftClr(uint16 u16DftIdx);
void SODTC_EveRst_StatusOfDTC(void);
void SODTC_EveRstDft_StatusOfDTC(void);
void SODTC_EveRstDftObd_StatusOfDTC(void);
void SODTC_GlbDCStrt(void);
void SODTC_StGDU(uint16 u16DftIdx);
void SODTC_StGOBD(uint16 u16DftIdx);


#endif /* STATUSOFDTC_L_H */

/*-------------------------------- end of file -------------------------------*/
