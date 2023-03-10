/***************************************************************************
;**
;** FILE NAME      : MEM_L.H
;**
;** FILE AUTHOR    : ynicaise (VEES)
;**
;**************************************************************************/

#ifndef MEM_L_H
#define MEM_L_H

#include "MATHSRV_Portability.h"
#include "RTE_TYPE.h"
#include "STD_Types.h"
#include "GD_A.h"
#include "MEM_Macro.h"
#include "NVMSRV.h"
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

extern const uint8  MEM_u8Inhib;

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

void MEM_vidF01_DTCRec(void);
void MEM_vidF01_FrzData(uint16 u16IdxDft);
void MEM_vidF01_Init(void);
void MEM_vidF02_StoreDataFrf(uint16 u16IdxDft);
void MEM_vidF04_RstnoRnkFrf(uint16 u16IdxDft);
void MEM_vidF04_StoreFrfObd(uint16 u16IdxDft);
void MEM_vidF06_RstDftMng(void);
void MEM_vidF07_RstDftObdMng(void);
void MEM_vidF08_StoreData(void);


#endif /* MEM_L_H */

/*-------------------------------- end of file -------------------------------*/
