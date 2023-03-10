/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : KRN_MEMMAP.H                                          */
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
/* !Comment: KRN Section allocation */
#elif defined   KRN_START_SEC_CODE
   #undef  KRN_START_SEC_CODE
   #define START_SEC_CODE_SECTION
#elif defined   KRN_STOP_SEC_CODE
   #undef  KRN_STOP_SEC_CODE
   #define STOP_SEC_CODE_SECTION

#elif defined   KRN_START_SEC_CONST_16BIT
   #undef  KRN_START_SEC_CONST_16BIT
   #define START_SEC_CONST_16BIT_SECTION
#elif defined   KRN_STOP_SEC_CONST_16BIT
   #undef  KRN_STOP_SEC_CONST_16BIT
   #define STOP_SEC_CONST_16BIT_SECTION

#elif defined   KRN_START_SEC_CONST_32BIT
   #undef  KRN_START_SEC_CONST_32BIT
   #define START_SEC_CONST_32BIT_SECTION
#elif defined   KRN_STOP_SEC_CONST_32BIT
   #undef  KRN_STOP_SEC_CONST_32BIT
   #define STOP_SEC_CONST_32BIT_SECTION

#elif defined   KRN_START_SEC_CALIB_16BIT
   #undef  KRN_START_SEC_CALIB_16BIT
   #define START_SEC_CALIB_16BIT_SECTION
#elif defined   KRN_STOP_SEC_CALIB_16BIT
   #undef  KRN_STOP_SEC_CALIB_16BIT
   #define STOP_SEC_CALIB_16BIT_SECTION

#elif defined   KRN_START_SEC_CONST_UNSPECIFIED
   #undef  KRN_START_SEC_CONST_UNSPECIFIED
   #define START_SEC_CONST_UNSPECIFIED_SECTION
#elif defined   KRN_STOP_SEC_CONST_UNSPECIFIED
   #undef  KRN_STOP_SEC_CONST_UNSPECIFIED
   #define STOP_SEC_CONST_UNSPECIFIED_SECTION

#elif defined   KRN_START_SEC_KRN_CKS_LOG
   #undef  KRN_START_SEC_KRN_CKS_LOG
   #define START_SEC_KRN_CKS_LOG_SECTION
#elif defined   KRN_STOP_SEC_KRN_CKS_LOG
   #undef  KRN_STOP_SEC_KRN_CKS_LOG
   #define STOP_SEC_KRN_CKS_LOG_SECTION

#elif defined   KRN_START_SEC_KRN_CKS_CAL
   #undef  KRN_START_SEC_KRN_CKS_CAL
   #define START_SEC_KRN_CKS_CAL_SECTION
#elif defined   KRN_STOP_SEC_KRN_CKS_CAL
   #undef  KRN_STOP_SEC_KRN_CKS_CAL
   #define STOP_SEC_KRN_CKS_CAL_SECTION

#elif defined   KRN_START_SEC_KRN_TAILLE_CAL
   #undef  KRN_START_SEC_KRN_TAILLE_CAL
   #define START_SEC_KRN_TAILLE_CAL_SECTION
#elif defined   KRN_STOP_SEC_KRN_TAILLE_CAL
   #undef  KRN_STOP_SEC_KRN_TAILLE_CAL
   #define STOP_SEC_KRN_TAILLE_CAL_SECTION

#elif defined   KRN_START_SEC_KRN_VER_LDB
   #undef  KRN_START_SEC_KRN_VER_LDB
   #define START_SEC_KRN_VER_LDB_SECTION
#elif defined   KRN_STOP_SEC_KRN_VER_LDB
   #undef  KRN_STOP_SEC_KRN_VER_LDB
   #define STOP_SEC_KRN_VER_LDB_SECTION

#elif defined   KRN_START_SEC_KRN_CKS_TMS_LOG
   #undef  KRN_START_SEC_KRN_CKS_TMS_LOG
   #define START_SEC_KRN_CKS_TMS_LOG_SECTION
#elif defined   KRN_STOP_SEC_KRN_CKS_TMS_LOG
   #undef  KRN_STOP_SEC_KRN_CKS_TMS_LOG
   #define STOP_SEC_KRN_CKS_TMS_LOG_SECTION

#elif defined   KRN_START_SEC_KRN_CKS_TMS_CAL
   #undef  KRN_START_SEC_KRN_CKS_TMS_CAL
   #define START_SEC_KRN_CKS_TMS_CAL_SECTION
#elif defined   KRN_STOP_SEC_KRN_CKS_TMS_CAL
   #undef  KRN_STOP_SEC_KRN_CKS_TMS_CAL
   #define STOP_SEC_KRN_CKS_TMS_CAL_SECTION

#elif defined   KRN_START_SEC_TMS_CODE_BEG
   #undef  KRN_START_SEC_TMS_CODE_BEG
   #define START_SEC_TMS_CODE_BEG_SECTION
#elif defined   KRN_STOP_SEC_TMS_CODE_BEG
   #undef  KRN_STOP_SEC_TMS_CODE_BEG
   #define STOP_SEC_TMS_CODE_BEG_SECTION

#elif defined   KRN_START_SEC_TMS_CODE_END
   #undef  KRN_START_SEC_TMS_CODE_END
   #define START_SEC_TMS_CODE_END_SECTION
#elif defined   KRN_STOP_SEC_TMS_CODE_END
   #undef  KRN_STOP_SEC_TMS_CODE_END
   #define STOP_SEC_TMS_CODE_END_SECTION

#elif defined   KRN_START_SEC_TMS_CALIB_BEG
   #undef  KRN_START_SEC_TMS_CALIB_BEG
   #define START_SEC_TMS_CALIB_BEG_SECTION
#elif defined   KRN_STOP_SEC_TMS_CALIB_BEG
   #undef  KRN_STOP_SEC_TMS_CALIB_BEG
   #define STOP_SEC_TMS_CALIB_BEG_SECTION

#elif defined   KRN_START_SEC_TMS_CALIB_END
   #undef  KRN_START_SEC_TMS_CALIB_END
   #define START_SEC_TMS_CALIB_END_SECTION
#elif defined   KRN_STOP_SEC_TMS_CALIB_END
   #undef  KRN_STOP_SEC_TMS_CALIB_END
   #define STOP_SEC_TMS_CALIB_END_SECTION

#elif defined   KRN_START_SEC_VAR_CLEARED_BOOLEAN
   #undef  KRN_START_SEC_VAR_CLEARED_BOOLEAN
   #define START_SEC_VAR_CLEARED_BOOLEAN_CPU2_SECTION
#elif defined   KRN_STOP_SEC_VAR_CLEARED_BOOLEAN
   #undef  KRN_STOP_SEC_VAR_CLEARED_BOOLEAN
   #define STOP_SEC_VAR_CLEARED_BOOLEAN_CPU2_SECTION

#elif defined   KRN_START_SEC_VAR_CLEARED_8BIT
   #undef  KRN_START_SEC_VAR_CLEARED_8BIT
   #define START_SEC_VAR_CLEARED_8BIT_CPU2_SECTION
#elif defined   KRN_STOP_SEC_VAR_CLEARED_8BIT
   #undef  KRN_STOP_SEC_VAR_CLEARED_8BIT
   #define STOP_SEC_VAR_CLEARED_8BIT_CPU2_SECTION

#elif defined   KRN_START_SEC_VAR_CLEARED_16BIT
   #undef  KRN_START_SEC_VAR_CLEARED_16BIT
   #define START_SEC_VAR_CLEARED_16BIT_CPU2_SECTION
#elif defined   KRN_STOP_SEC_VAR_CLEARED_16BIT
   #undef  KRN_STOP_SEC_VAR_CLEARED_16BIT
   #define STOP_SEC_VAR_CLEARED_16BIT_CPU2_SECTION

#elif defined   KRN_START_SEC_VAR_CLEARED_32BIT
   #undef  KRN_START_SEC_VAR_CLEARED_32BIT
   #define START_SEC_VAR_CLEARED_32BIT_CPU2_SECTION
#elif defined   KRN_STOP_SEC_VAR_CLEARED_32BIT
   #undef  KRN_STOP_SEC_VAR_CLEARED_32BIT
   #define STOP_SEC_VAR_CLEARED_32BIT_CPU2_SECTION

#elif defined   KRN_START_SEC_VAR_CLEARED_UNSPECIFIED
   #undef  KRN_START_SEC_VAR_CLEARED_UNSPECIFIED
   #define START_SEC_VAR_CLEARED_UNSPECIFIED_CPU2_SECTION
#elif defined   KRN_STOP_SEC_VAR_CLEARED_UNSPECIFIED
   #undef  KRN_STOP_SEC_VAR_CLEARED_UNSPECIFIED
   #define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPU2_SECTION


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

/* !Comment: SEC_CALIB_16BIT Start Section treatment */
   #elif defined   START_SEC_CALIB_16BIT_SECTION
	  

      #pragma section ".calib" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_CONST_UNSPECIFIED Start Section treatment */
   #elif defined   START_SEC_CONST_UNSPECIFIED_SECTION
	  

      #pragma section ".const" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_KRN_CKS_LOG Start Section treatment */
   #elif defined   START_SEC_KRN_CKS_LOG_SECTION
	  

      #pragma section "CKS_LOG" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_KRN_CKS_CAL Start Section treatment */
   #elif defined   START_SEC_KRN_CKS_CAL_SECTION
	  

      #pragma section "CKS_CAL" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_KRN_TAILLE_CAL Start Section treatment */
   #elif defined   START_SEC_KRN_TAILLE_CAL_SECTION
	  

      #pragma section ".text"

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_KRN_VER_LDB Start Section treatment */
   #elif defined   START_SEC_KRN_VER_LDB_SECTION
	  

      #pragma section "VER_LDB" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_KRN_CKS_TMS_LOG Start Section treatment */
   #elif defined   START_SEC_KRN_CKS_TMS_LOG_SECTION
	  

      #pragma section "CKS_TMS_LOG" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_KRN_CKS_TMS_CAL Start Section treatment */
   #elif defined   START_SEC_KRN_CKS_TMS_CAL_SECTION
	  

      #pragma section "CKS_TMS_CAL" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_TMS_CODE_BEG Start Section treatment */
   #elif defined   START_SEC_TMS_CODE_BEG_SECTION
	  

      #pragma section "TMS_CODE_BEG" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_TMS_CODE_END Start Section treatment */
   #elif defined   START_SEC_TMS_CODE_END_SECTION
	  

      #pragma section "TMS_CODE_END" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_TMS_CALIB_BEG Start Section treatment */
   #elif defined   START_SEC_TMS_CALIB_BEG_SECTION
	  

      #pragma section "TMS_CALIB_BEG" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_TMS_CALIB_END Start Section treatment */
   #elif defined   START_SEC_TMS_CALIB_END_SECTION
	  

      #pragma section "TMS_CALIB_END" a

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_BOOLEAN Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_BOOLEAN_CPU2_SECTION
	  

      #pragma section ".bss_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_8BIT Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_8BIT_CPU2_SECTION
	  

      #pragma section ".bss_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_16BIT Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_16BIT_CPU2_SECTION
	  

      #pragma section ".bss_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_32BIT Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_32BIT_CPU2_SECTION
	  

      #pragma section ".bss_cpu2" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_UNSPECIFIED Start Section treatment */
   #elif defined   START_SEC_VAR_CLEARED_UNSPECIFIED_CPU2_SECTION
	  

      #pragma section ".bss_cpu2" aw

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

/* !Comment: SEC_CALIB_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_CALIB_16BIT_SECTION && defined  START_SEC_CALIB_16BIT_SECTION
	  

      #pragma section

      #undef START_SEC_CALIB_16BIT_SECTION
      #undef STOP_SEC_CALIB_16BIT_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_CONST_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_SEC_CONST_UNSPECIFIED_SECTION && defined  START_SEC_CONST_UNSPECIFIED_SECTION
	  

      #pragma section

      #undef START_SEC_CONST_UNSPECIFIED_SECTION
      #undef STOP_SEC_CONST_UNSPECIFIED_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_KRN_CKS_LOG Stop Section treatment */
   #elif defined   STOP_SEC_KRN_CKS_LOG_SECTION && defined  START_SEC_KRN_CKS_LOG_SECTION
	  

      #pragma section

      #undef START_SEC_KRN_CKS_LOG_SECTION
      #undef STOP_SEC_KRN_CKS_LOG_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_KRN_CKS_CAL Stop Section treatment */
   #elif defined   STOP_SEC_KRN_CKS_CAL_SECTION && defined  START_SEC_KRN_CKS_CAL_SECTION
	  

      #pragma section

      #undef START_SEC_KRN_CKS_CAL_SECTION
      #undef STOP_SEC_KRN_CKS_CAL_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_KRN_TAILLE_CAL Stop Section treatment */
   #elif defined   STOP_SEC_KRN_TAILLE_CAL_SECTION && defined  START_SEC_KRN_TAILLE_CAL_SECTION
	  

      #pragma section

      #undef START_SEC_KRN_TAILLE_CAL_SECTION
      #undef STOP_SEC_KRN_TAILLE_CAL_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_KRN_VER_LDB Stop Section treatment */
   #elif defined   STOP_SEC_KRN_VER_LDB_SECTION && defined  START_SEC_KRN_VER_LDB_SECTION
	  

      #pragma section

      #undef START_SEC_KRN_VER_LDB_SECTION
      #undef STOP_SEC_KRN_VER_LDB_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_KRN_CKS_TMS_LOG Stop Section treatment */
   #elif defined   STOP_SEC_KRN_CKS_TMS_LOG_SECTION && defined  START_SEC_KRN_CKS_TMS_LOG_SECTION
	  

      #pragma section

      #undef START_SEC_KRN_CKS_TMS_LOG_SECTION
      #undef STOP_SEC_KRN_CKS_TMS_LOG_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_KRN_CKS_TMS_CAL Stop Section treatment */
   #elif defined   STOP_SEC_KRN_CKS_TMS_CAL_SECTION && defined  START_SEC_KRN_CKS_TMS_CAL_SECTION
	  

      #pragma section

      #undef START_SEC_KRN_CKS_TMS_CAL_SECTION
      #undef STOP_SEC_KRN_CKS_TMS_CAL_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_TMS_CODE_BEG Stop Section treatment */
   #elif defined   STOP_SEC_TMS_CODE_BEG_SECTION && defined  START_SEC_TMS_CODE_BEG_SECTION
	  

      #pragma section

      #undef START_SEC_TMS_CODE_BEG_SECTION
      #undef STOP_SEC_TMS_CODE_BEG_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_TMS_CODE_END Stop Section treatment */
   #elif defined   STOP_SEC_TMS_CODE_END_SECTION && defined  START_SEC_TMS_CODE_END_SECTION
	  

      #pragma section

      #undef START_SEC_TMS_CODE_END_SECTION
      #undef STOP_SEC_TMS_CODE_END_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_TMS_CALIB_BEG Stop Section treatment */
   #elif defined   STOP_SEC_TMS_CALIB_BEG_SECTION && defined  START_SEC_TMS_CALIB_BEG_SECTION
	  

      #pragma section

      #undef START_SEC_TMS_CALIB_BEG_SECTION
      #undef STOP_SEC_TMS_CALIB_BEG_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_TMS_CALIB_END Stop Section treatment */
   #elif defined   STOP_SEC_TMS_CALIB_END_SECTION && defined  START_SEC_TMS_CALIB_END_SECTION
	  

      #pragma section

      #undef START_SEC_TMS_CALIB_END_SECTION
      #undef STOP_SEC_TMS_CALIB_END_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_BOOLEAN Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_BOOLEAN_CPU2_SECTION && defined  START_SEC_VAR_CLEARED_BOOLEAN_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_BOOLEAN_CPU2_SECTION
      #undef STOP_SEC_VAR_CLEARED_BOOLEAN_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_8BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_8BIT_CPU2_SECTION && defined  START_SEC_VAR_CLEARED_8BIT_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_8BIT_CPU2_SECTION
      #undef STOP_SEC_VAR_CLEARED_8BIT_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_16BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_16BIT_CPU2_SECTION && defined  START_SEC_VAR_CLEARED_16BIT_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_16BIT_CPU2_SECTION
      #undef STOP_SEC_VAR_CLEARED_16BIT_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_32BIT Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_32BIT_CPU2_SECTION && defined  START_SEC_VAR_CLEARED_32BIT_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_32BIT_CPU2_SECTION
      #undef STOP_SEC_VAR_CLEARED_32BIT_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_CLEARED_UNSPECIFIED Stop Section treatment */
   #elif defined   STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPU2_SECTION && defined  START_SEC_VAR_CLEARED_UNSPECIFIED_CPU2_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_CLEARED_UNSPECIFIED_CPU2_SECTION
      #undef STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPU2_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into KRN_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/

