/***************************************************************************
;**
;** FILE NAME      : INDICOBD.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef INDICOBD_H
#define INDICOBD_H

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "GD_A.h"
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

extern const boolean  GMIL_bCfgExtDistMilOn_C;

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

void GD_EveCrTR_IndicOBD(void);
void GD_EveCrTSt_IndicOBD(void);
void GD_EveRst_IndicOBD(void);
void GD_EveRstDft_IndicOBD(void);
void GD_EveRstDftObd_IndicOBD(void);
void GD_SdlSlow_IndicOBD(void);
void INDICOBD_RstDftCal(void);
void INDICOBD_vidMngEveStObdClear(uint16 u16IdxDft);
void INDICOBD_vidMngEveStObdRec(uint16 u16IdxDft);


#endif /* INDICOBD_H */

/*-------------------------------- end of file -------------------------------*/
