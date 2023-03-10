/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : LIN_17_ASCLIN_MEMMAP.H                                          */
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
/* 11/10/14, 10:16:22: generated by Genecode  v2.6.0.0                        */
/* From Source Template : MSN_MEMMAP_H.TPL                                    */
/******************************************************************************/



/******************************************************************************/
/*          MEMMAP selected mode:  SAFE                                       */
/******************************************************************************/
#define MEMMAP_ERROR

/* The following if is used only due to automatic generation */
#if !defined MEMMAP_ERROR

/* Project section mappings */
/* !Comment: LIN_17_ASCLIN Section allocation */
#elif defined   LIN_17_ASCLIN_START_SEC_CODE
   #undef  LIN_17_ASCLIN_START_SEC_CODE
   #define START_SEC_CODE_SECTION
#elif defined   LIN_17_ASCLIN_STOP_SEC_CODE
   #undef  LIN_17_ASCLIN_STOP_SEC_CODE
   #define STOP_SEC_CODE_SECTION

#elif defined   LIN_17_ASCLIN_START_SEC_CONST_32BIT
   #undef  LIN_17_ASCLIN_START_SEC_CONST_32BIT
   #define START_SEC_CONST_32BIT_SECTION
#elif defined   LIN_17_ASCLIN_STOP_SEC_CONST_32BIT
   #undef  LIN_17_ASCLIN_STOP_SEC_CONST_32BIT
   #define STOP_SEC_CONST_32BIT_SECTION

#elif defined   LIN_17_ASCLIN_START_SEC_POSTBUILDCFG
   #undef  LIN_17_ASCLIN_START_SEC_POSTBUILDCFG
   #define START_SEC_POSTBUILDCFG_SECTION
#elif defined   LIN_17_ASCLIN_STOP_SEC_POSTBUILDCFG
   #undef  LIN_17_ASCLIN_STOP_SEC_POSTBUILDCFG
   #define STOP_SEC_POSTBUILDCFG_SECTION

#elif defined   LIN_17_ASCLIN_START_SEC_VAR_16BIT
   #undef  LIN_17_ASCLIN_START_SEC_VAR_16BIT
   #define START_SEC_VAR_CLEARED_16BIT_CPU1_SECTION
#elif defined   LIN_17_ASCLIN_STOP_SEC_VAR_16BIT
   #undef  LIN_17_ASCLIN_STOP_SEC_VAR_16BIT
   #define STOP_SEC_VAR_CLEARED_16BIT_CPU1_SECTION

#elif defined   LIN_17_ASCLIN_START_SEC_VAR_32BIT
   #undef  LIN_17_ASCLIN_START_SEC_VAR_32BIT
   #define START_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
#elif defined   LIN_17_ASCLIN_STOP_SEC_VAR_32BIT
   #undef  LIN_17_ASCLIN_STOP_SEC_VAR_32BIT
   #define STOP_SEC_VAR_CLEARED_32BIT_CPU1_SECTION

#elif defined   LIN_17_ASCLIN_START_SEC_VAR_8BIT
   #undef  LIN_17_ASCLIN_START_SEC_VAR_8BIT
   #define START_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
#elif defined   LIN_17_ASCLIN_STOP_SEC_VAR_8BIT
   #undef  LIN_17_ASCLIN_STOP_SEC_VAR_8BIT
   #define STOP_SEC_VAR_CLEARED_8BIT_CPU1_SECTION

#elif defined   LIN_17_ASCLIN_START_SEC_VAR_UNSPECIFIED
   #undef  LIN_17_ASCLIN_START_SEC_VAR_UNSPECIFIED
   #define START_SEC_VAR_CLEARED_UNSPECIFIED_CPU1_SECTION
#elif defined   LIN_17_ASCLIN_STOP_SEC_VAR_UNSPECIFIED
   #undef  LIN_17_ASCLIN_STOP_SEC_VAR_UNSPECIFIED
   #define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPU1_SECTION


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

/* !Comment: SEC_CONST_32BIT Start Section treatment */
   #elif defined   START_SEC_CONST_32BIT_SECTION
	  

      #pragma section ".const" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_POSTBUILDCFG Start Section treatment */
   #elif defined   START_SEC_POSTBUILDCFG_SECTION
	  
      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_16BIT Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_16BIT_CPU1_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_32BIT Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_8BIT Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_UNSPECIFIED Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_UNSPECIFIED_CPU1_SECTION
	  

      #pragma section ".bss_cpu1" aw

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

/* !Comment: SEC_CONST_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_CONST_32BIT_SECTION && defined  START_SEC_CONST_32BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_32BIT_SECTION
      #undef STOP_SEC_CONST_32BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_POSTBUILDCFG Stop Section treatment */
   #elif defined   STOP_SEC_POSTBUILDCFG_SECTION && defined  START_SEC_POSTBUILDCFG_SECTION
	  
      #undef START_SEC_POSTBUILDCFG_SECTION
      #undef STOP_SEC_POSTBUILDCFG_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_16BIT_CPU1_SECTION && defined  START_SEC_VAR_CLEARED_16BIT_CPU1_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_16BIT_CPU1_SECTION
      #undef STOP_SEC_VAR_CLEARED_16BIT_CPU1_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_32BIT_CPU1_SECTION && defined  START_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
      #undef STOP_SEC_VAR_CLEARED_32BIT_CPU1_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_8BIT_CPU1_SECTION && defined  START_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
      #undef STOP_SEC_VAR_CLEARED_8BIT_CPU1_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPU1_SECTION && defined  START_SEC_VAR_CLEARED_UNSPECIFIED_CPU1_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_UNSPECIFIED_CPU1_SECTION
      #undef STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPU1_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into LIN_17_ASCLIN_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/

