/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : SWFAIL_MEMMAP.H                                          */
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
/* !Comment: SWFAIL Section allocation */
#elif defined   SWFAIL_START_SEC_CODE
   #undef  SWFAIL_START_SEC_CODE
   #define START_SEC_CODE_SECTION
#elif defined   SWFAIL_STOP_SEC_CODE
   #undef  SWFAIL_STOP_SEC_CODE
   #define STOP_SEC_CODE_SECTION

#elif defined   SWFAIL_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
   #undef  SWFAIL_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
   #define START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
#elif defined   SWFAIL_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
   #undef  SWFAIL_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
   #define STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION

#elif defined   SWFAIL_START_SEC_VAR_POWER_ON_CLEARED_8BIT
   #undef  SWFAIL_START_SEC_VAR_POWER_ON_CLEARED_8BIT
   #define START_SEC_VAR_POWER_ON_CLEARED_8BIT_CPU2_SECTION
#elif defined   SWFAIL_STOP_SEC_VAR_POWER_ON_CLEARED_8BIT
   #undef  SWFAIL_STOP_SEC_VAR_POWER_ON_CLEARED_8BIT
   #define STOP_SEC_VAR_POWER_ON_CLEARED_8BIT_CPU2_SECTION

#elif defined   SWFAIL_START_SEC_VAR_POWER_ON_CLEARED_16BIT
   #undef  SWFAIL_START_SEC_VAR_POWER_ON_CLEARED_16BIT
   #define START_SEC_VAR_POWER_ON_CLEARED_16BIT_CPU2_SECTION
#elif defined   SWFAIL_STOP_SEC_VAR_POWER_ON_CLEARED_16BIT
   #undef  SWFAIL_STOP_SEC_VAR_POWER_ON_CLEARED_16BIT
   #define STOP_SEC_VAR_POWER_ON_CLEARED_16BIT_CPU2_SECTION

#elif defined   SWFAIL_START_SEC_VAR_POWER_ON_CLEARED_32BIT
   #undef  SWFAIL_START_SEC_VAR_POWER_ON_CLEARED_32BIT
   #define START_SEC_VAR_POWER_ON_CLEARED_32BIT_CPU2_SECTION
#elif defined   SWFAIL_STOP_SEC_VAR_POWER_ON_CLEARED_32BIT
   #undef  SWFAIL_STOP_SEC_VAR_POWER_ON_CLEARED_32BIT
   #define STOP_SEC_VAR_POWER_ON_CLEARED_32BIT_CPU2_SECTION

#elif defined   SWFAIL_START_SEC_TRAPTAB
   #undef  SWFAIL_START_SEC_TRAPTAB
   #define START_SEC_TRAPTAB_SECTION
#elif defined   SWFAIL_STOP_SEC_TRAPTAB
   #undef  SWFAIL_STOP_SEC_TRAPTAB
   #define STOP_SEC_TRAPTAB_SECTION


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

/* !Comment: SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED Start Section treatment */
   #elif defined   START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
	  

      #pragma section ".power_on_cleared_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_POWER_ON_CLEARED_8BIT Start Section treatment */
   #elif defined   START_SEC_VAR_POWER_ON_CLEARED_8BIT_CPU2_SECTION
	  

      #pragma section ".power_on_cleared_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_POWER_ON_CLEARED_16BIT Start Section treatment */
   #elif defined   START_SEC_VAR_POWER_ON_CLEARED_16BIT_CPU2_SECTION
	  

      #pragma section ".power_on_cleared_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_POWER_ON_CLEARED_32BIT Start Section treatment */
   #elif defined   START_SEC_VAR_POWER_ON_CLEARED_32BIT_CPU2_SECTION
	  

      #pragma section ".power_on_cleared_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_TRAPTAB Start Section treatment */
   #elif defined   START_SEC_TRAPTAB_SECTION
	  

      #pragma section ".traptab" awx

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

/* !Comment: SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION && defined  START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
      #undef STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_POWER_ON_CLEARED_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_POWER_ON_CLEARED_8BIT_CPU2_SECTION && defined  START_SEC_VAR_POWER_ON_CLEARED_8BIT_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_POWER_ON_CLEARED_8BIT_CPU2_SECTION
      #undef STOP_SEC_VAR_POWER_ON_CLEARED_8BIT_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_POWER_ON_CLEARED_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_POWER_ON_CLEARED_16BIT_CPU2_SECTION && defined  START_SEC_VAR_POWER_ON_CLEARED_16BIT_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_POWER_ON_CLEARED_16BIT_CPU2_SECTION
      #undef STOP_SEC_VAR_POWER_ON_CLEARED_16BIT_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_POWER_ON_CLEARED_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_POWER_ON_CLEARED_32BIT_CPU2_SECTION && defined  START_SEC_VAR_POWER_ON_CLEARED_32BIT_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_POWER_ON_CLEARED_32BIT_CPU2_SECTION
      #undef STOP_SEC_VAR_POWER_ON_CLEARED_32BIT_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_TRAPTAB Stop Section treatment */
   #elif defined   STOP_SEC_TRAPTAB_SECTION && defined  START_SEC_TRAPTAB_SECTION
	  

      #pragma section

      #undef START_SEC_TRAPTAB_SECTION
      #undef STOP_SEC_TRAPTAB_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into SWFAIL_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/

