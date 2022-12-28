/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : CRC_MEMMAP.H                                          */
/*                                                                            */
/* !Scope           : Public                                                  */
/*                                                                            */
/* !Target          :                                                         */
/*                                                                            */
/* !Vendor          : Valeo                                                   */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2009 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::                                                                $*/
/* $Revision::            $$Author::                  $$Date::               $*/
/******************************************************************************/
/* 11/10/14, 10:16:21: generated by Genecode  v2.6.0.0                        */
/* From Source Template : MSN_MEMMAP_H.TPL                                    */
/******************************************************************************/



/******************************************************************************/
/*          MEMMAP selected mode:  SAFE                                       */
/******************************************************************************/
#define MEMMAP_ERROR

/* The following if is used only due to automatic generation */
#if !defined MEMMAP_ERROR

/* Project section mappings */
/* !Comment: CRC Section allocation */
#elif defined   CRC_START_SEC_CODE
   #undef  CRC_START_SEC_CODE
   #define START_SEC_CODE_SECTION
#elif defined   CRC_STOP_SEC_CODE
   #undef  CRC_STOP_SEC_CODE
   #define STOP_SEC_CODE_SECTION

#elif defined   CRC_START_SEC_CONST_16BIT
   #undef  CRC_START_SEC_CONST_16BIT
   #define START_SEC_CONST_16BIT_SECTION
#elif defined   CRC_STOP_SEC_CONST_16BIT
   #undef  CRC_STOP_SEC_CONST_16BIT
   #define STOP_SEC_CONST_16BIT_SECTION

#elif defined   CRC_START_SEC_CONST_32BIT
   #undef  CRC_START_SEC_CONST_32BIT
   #define START_SEC_CONST_32BIT_SECTION
#elif defined   CRC_STOP_SEC_CONST_32BIT
   #undef  CRC_STOP_SEC_CONST_32BIT
   #define STOP_SEC_CONST_32BIT_SECTION

#elif defined   CRC_START_SEC_CONST_8BIT
   #undef  CRC_START_SEC_CONST_8BIT
   #define START_SEC_CONST_8BIT_SECTION
#elif defined   CRC_STOP_SEC_CONST_8BIT
   #undef  CRC_STOP_SEC_CONST_8BIT
   #define STOP_SEC_CONST_8BIT_SECTION


#endif

/* ECU specific section mappings */
#ifndef MEMMAP_START_DONE

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Start Section treatment */
   #elif defined   START_SEC_CODE_SECTION
	  

      #pragma section ".text" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CONST_16BIT Start Section treatment */
   #elif defined   START_SEC_CONST_16BIT_SECTION
	  

      #pragma section ".const" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CONST_32BIT Start Section treatment */
   #elif defined   START_SEC_CONST_32BIT_SECTION
	  

      #pragma section ".const" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CONST_8BIT Start Section treatment */
   #elif defined   START_SEC_CONST_8BIT_SECTION
	  

      #pragma section ".const" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE


   #endif

#else   /* if MEMMAP_START_DONE is not defined */

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Stop Section treatment */
   #elif defined   STOP_SEC_CODE_SECTION && defined  START_SEC_CODE_SECTION
	  

      #pragma section

      #undef START_SEC_CODE_SECTION
      #undef STOP_SEC_CODE_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CONST_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_CONST_16BIT_SECTION && defined  START_SEC_CONST_16BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_16BIT_SECTION
      #undef STOP_SEC_CONST_16BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CONST_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_CONST_32BIT_SECTION && defined  START_SEC_CONST_32BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_32BIT_SECTION
      #undef STOP_SEC_CONST_32BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CONST_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_CONST_8BIT_SECTION && defined  START_SEC_CONST_8BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_8BIT_SECTION
      #undef STOP_SEC_CONST_8BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into CRC_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/

