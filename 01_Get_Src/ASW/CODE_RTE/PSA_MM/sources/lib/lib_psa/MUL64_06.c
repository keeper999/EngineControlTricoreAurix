/*******************************************************************************
* CE DOCUMENT EST LA PROPRIETE DES SOCIETES AUTOMOBILES PEUGEOT
* AUTOMOBILES CITROEN ET NE PEUT ETRE REPRODUIT OU COMMUNIQUE SANS
* L'AUTORISATION DU G.I.E PSA PEUGEOT CITROEN OU DE LA SOCIETE GENERALE
* D'ACHATS (SOGEDAC) AGISSANT COMME LEUR MANDATAIRE
********************************************************************************
* Fichier     : mul64_06.c
* Version     : 1.1
* ID_synergy  : 
* Description : 
* Auteur      : CLO
* Creation    : 03-07-2008
*******************************************************************************/
/**
 * @file       mul64_06.c
 * @brief      64-bit multiplication
 *
 * @since      2005-07-21
 * @author     D. Andoleit
 *
 * Copyright (c) 2005 by dSPACE GmbH, Paderborn, Germany
 * All Rights Reserved
 *
 */

/*
 * $Workfile: MUL64_06.c $
 * $Revision: 1.1 $
 * $Date: 2005/07/28 11:51:58GMT+01:00 $
 */


#include "dsfxp.h"


#define PSA_START_SEC_CODE_LIB
#include "PSA_MemMap.h"

/******************************************************************************
*
* FUNCTION:
*   void
*   F__U64MULU64U32(UInt32 f1_h, UInt32 f1_l, UInt32 f2, UInt32 *r_h, UInt32 *r_l)
*
* DESCRIPTION:
*   Multiplies f1 by f2 with 64bit result.
*
* PARAMETERS:
*   typ      name    meaning
*   UInt32   f1_h    1. factor (high-part)
*   UInt32   f1_l    1. factor (low-part)
*   UInt32   f2      2. factor
*   UInt32   *r_h    64bit - result (high-part)
*   UInt32   *r_l    64bit - result (low-part)
*
* NOTE:
* f1                                                 * f2 =
* (f1_h*2^32                 + f1_l)                 * f2 =
* ((f1_hH*2^16 + f1_hL)*2^32 + f1_lH*2^16 + f1_lL)   * (f2H*2^16 + f2L) =
* (f1_hH*2^48 + f1_hL*2^32   + f1_lH*2^16 + f1_lL)   * (f2H*2^16 + f2L) =
*
* f1_hH*f2H*2^64 + f1_hL*f2H*2^48 + f1_lH*f2H*2^32 + f1_lL*f2H*2^16 +
* f1_hH*f2L*2^48 + f1_hL*f2L*2^32 + f1_lH*f2L*2^16 + f1_lL*f2L
*
* shifted by  64    48    32    16    0 Bits
* |-----|-----|-----|-----|-----|-----|
* |  f1_hH*f2H|     |     |     |     |
*       |  f1_hL*f2H|     |     |     |
*             |  f1_lH*f2H|     |     |
*                   |  f1_lL*f2H|     |
*       |  f1_hH*f2L|     |     |     |
*             |  f1_hL*f2L|     |     |
*                   |  f1_lH*f2L|     |
*                         |  f1_lL*f2L|
* |-----|-----|-----|-----|-----|-----|
*             |<   r_h   >|<   r_l   >|
*
******************************************************************************/
void F__U64MULU64U32(UInt32 f1_h, UInt32 f1_l, UInt32 f2, UInt32 *r_h, UInt32 *r_l)
{
	
    C__U64MULU64U32(f1_h, f1_l, f2, *r_h, *r_l)

}/*END F__I64MULI64U32()*/

#define PSA_STOP_SEC_CODE_LIB
#include "PSA_MemMap.h"
