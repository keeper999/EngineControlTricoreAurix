/*******************************************************************************
* CE DOCUMENT EST LA PROPRIETE DES SOCIETES AUTOMOBILES PEUGEOT
* AUTOMOBILES CITROEN ET NE PEUT ETRE REPRODUIT OU COMMUNIQUE SANS
* L'AUTORISATION DU G.I.E PSA PEUGEOT CITROEN OU DE LA SOCIETE GENERALE
* D'ACHATS (SOGEDAC) AGISSANT COMME LEUR MANDATAIRE
********************************************************************************
* Fichier     : mul64_04.c
* Version     : 1.1
* ID_synergy  : 
* Description : 
* Auteur      : CLO
* Creation    : 03-07-2008
*******************************************************************************/
/**
 * @file       mul64_04.c
 * @brief      64-bit multiplication
 *
 * @since      1999-04-16
 * @author     D. Andoleit
 *
 * Copyright (c) 2003 by dSPACE GmbH, Paderborn, Germany
 * All Rights Reserved
 *
 */

/*
 * $Workfile: MUL64_04.c $
 * $Revision: 1.2 $
 * $Date: 2005/07/28 11:59:09GMT+01:00 $
 */


#include "dsfxp.h"


#define PSA_START_SEC_CODE_LIB
#include "PSA_MemMap.h"

/******************************************************************************
*
* FUNCTION:
*   void F__I64MULI32U32(Int32 f1, UInt32 f2, Int32 *r_h, UInt32 *r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   Int32    f1      1. factor
*   UInt32   f2      2. factor
*   Int32    *r_h    64bit - result (high-part)
*   UInt32   *r_l    64bit - result (low-part)
*
* NOTE:
* f1                          * f2 =
* (f1H*2^16 + f1L)            * (f2H*2^16 + f2L) =
* f1H*f2H*2^32 + f1H*f2L*2^16 + f1L*f2H*2^16 + f1L*f2L
*
* shifted by  64    48    32    16    0 Bits
* |-----|-----|-----|-----|-----|-----|
*             |    f1H*f2H|     |     |
*                   |    f1H*f2L|     |
*                   |    f1L*f2H|     |
*                         |    f1L*f2L|
* |-----|-----|-----|-----|-----|-----|
*             |<   r_h   >|<   r_l   >|
*
*   Converts negative numbers with Booth-algorithm.
*
******************************************************************************/
#ifdef PSA_F__I64MULI32U32_64BITS_SC
void F__I64MULI32U32(Int32 f1, UInt32 f2, Int32 *r_h, UInt32 *r_l)
{
	PSA_UInt64 result = (PSA_UInt64) f1 * (PSA_UInt64) f2;
	*r_h = (Int32)((UInt32) (result>>32));
	*r_l = (UInt32) result;
}/*END F__I64MULI32U32()*/
#else
void F__I64MULI32U32(Int32 f1, UInt32 f2, Int32 *r_h, UInt32 *r_l)
{

    C__I64MULI32U32(f1, f2, *r_h, *r_l)

}/*END F__I64MULI32U32()*/
#endif
#define PSA_STOP_SEC_CODE_LIB
#include "PSA_MemMap.h"
