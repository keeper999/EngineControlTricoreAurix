/***************************** <AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/*                                                                            */
/* !Layer           : APPLI                                                   */
/*                                                                            */
/* !Component       : KNKRBLACQ                                               */
/* !Description     : KNKRBLACQ component                                     */
/*                                                                            */
/* !Module          : KNKRBLACQ                                               */
/* !Description     : RUMBLE SIGNAL ACQUISITION PARAMETER CONFIGURATION       */
/*                                                                            */
/* !File            : KnkRblAcq_fct1.c                                        */
/*                                                                            */
/* !Scope           : Public                                                  */
/*                                                                            */
/* !Target          : 32BIT                                                   */
/*                                                                            */
/* !Vendor          : Valeo VEMS                                              */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2008 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
/*   1 / KNKRBLACQ_vidInitOutput                                              */
/*   2 / KNKRBLACQ_vidInitConfigParam                                         */
/*   3 / KNKRBLACQ_vidRblTaskEndTreatment                                     */
/*   4 / KNKRBLACQ_vidRblTaskTreatment                                        */
/*   5 / KNKRBLACQ_vidRblCalcDetectAuthrz                                     */
/*   6 / KNKRBLACQ_vidRblConfigParameters                                     */
/*   7 / KNKRBLACQ_vidRblCalcParameters                                       */
/*   8 / KNKRBLACQ_vidRblObservtnWindow                                       */
/*   9 / KNKRBLACQ_vidRblAcqWinLength                                         */
/*                                                                            */
/* !Reference   : V02 NT 12 02237 / 03                                        */
/*                                                                            */
/**************************** </AUTO_FILE_HEADER> *****************************/
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::                                                                $*/
/* $Revision::            $$Author::                  $$Date::               $*/
/* $Author::                                          $$Date::               $*/
/******************************************************************************/
/* !VnrOff  : Names imposed by the customer                                   */
/******************************************************************************/
/* !CompReq :                                                                 */
/******************************************************************************/

#include "STD_TYPES.H"
#include "MATHSRV.H"
#include "KNKRBLACQ.H"
#include "KNKRBLACQ_L.H"
#include "KNKRBLACQ_IM.H"
#include "VEMS.H"

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  KNKRBLACQ_vidInitOutput                                    */
/* !Description :  Initializing component's ouptus.                           */
/* !Number      :  FCT1.1                                                     */
/* !Author      :  BARHOUMI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  output uint32 KNKRBLACQ_u32FilterOutputMem;                               */
/*  output uint8 Debut_fenetre_rumble;                                        */
/*  output uint8 Duree_fenetre_rumble;                                        */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void KNKRBLACQ_vidInitOutput(void)
{
   KNKRBLACQ_u32FilterOutputMem = 0;
   VEMS_vidSET(Debut_fenetre_rumble, 64);
   VEMS_vidSET(Duree_fenetre_rumble, 0);
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  KNKRBLACQ_vidInitConfigParam                               */
/* !Description :  Calls the subroutine in charge of initializing the         */
/*                 configuration parameters when the knock's rumble           */
/*                 acquisition strategy is activated.                         */
/* !Number      :  FCT1.2                                                     */
/* !Author      :  BARHOUMI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input boolean Autorise_rbl_num;                                           */
/*  output boolean Autorise_detection_rbl;                                    */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void KNKRBLACQ_vidInitConfigParam(void)
{
   if( Autorise_rbl_num != 0)
   {
      VEMS_vidSET(Autorise_detection_rbl, 0);
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  KNKRBLACQ_vidRblTaskEndTreatment                           */
/* !Description :  First, we make sure that we want to authorize the          */
/*                 acquisition of the signal rumble. In that case only, the   */
/*                 parameters of acquisition are calculated.                  */
/* !Number      :  FCT1.3                                                     */
/* !Author      :  BARHOUMI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf argret void KNKRBLACQ_vidRblTaskTreatment();                         */
/*  input boolean Autorise_rbl_num;                                           */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void KNKRBLACQ_vidRblTaskEndTreatment(void)
{
   if (Autorise_rbl_num != 0)
   {
      KNKRBLACQ_vidRblTaskTreatment();
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  KNKRBLACQ_vidRblTaskTreatment                              */
/* !Description :  Calls the subroutines in charge of evaluating the          */
/*                 activating conditions of the rumble acquisition strategy   */
/*                 and calculating its parameters.                            */
/* !Number      :  FCT1.4                                                     */
/* !Author      :  BARHOUMI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf argret void KNKRBLACQ_vidRblCalcDetectAuthrz();                      */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf argret void KNKRBLACQ_vidRblConfigParameters();                      */
/*  input boolean Autorise_detection_rbl;                                     */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void KNKRBLACQ_vidRblTaskTreatment(void)
{
   boolean bLocalAutorise_detection_rbl;


   KNKRBLACQ_vidRblCalcDetectAuthrz();
   VEMS_vidGET(Autorise_detection_rbl, bLocalAutorise_detection_rbl);
   if( bLocalAutorise_detection_rbl != 0)
   {
      KNKRBLACQ_vidRblConfigParameters();
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  KNKRBLACQ_vidRblCalcDetectAuthrz                           */
/* !Description :  To allow the acquisition of the rumble signal, the engine  */
/*                 speed must be in an adequate range and the information from*/
/*                 the crankshaft sensor reliable. The software phasing is    */
/*                 reliable in the case of a 3 cylinder engine.               */
/* !Number      :  FCT1.5                                                     */
/* !Author      :  BARHOUMI                                                   */
/* !Trace_To    :  VEMS_E_10_02579_002.02                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf argret Std_ReturnType  CRKHAL_udtReadMode(argout CRKHAL_tenuMode     */
/*  *pLocalenuMode);                                                          */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  extf argret void SWFAIL_vidSoftwareErrorHook();                           */
/*  input uint8 Ext_noCylEng;                                                 */
/*  input uint16 Regime_moteur;                                               */
/*  input boolean Cipd_phase_calculated_uncertain;                            */
/*  input boolean Ext_bStrtEnd;                                               */
/*  input uint8 Seuil_max_reg_detect_rbl;                                     */
/*  input uint8 Seuil_min_reg_detect_rbl;                                     */
/*  output boolean Autorise_detection_rbl;                                    */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void KNKRBLACQ_vidRblCalcDetectAuthrz(void)
{
   boolean         bLocalCipd_phase_calculated_uncertain;
   boolean         bLocalExt_bStrtEnd;
   uint8           u8LocalExt_noCylEng;
   uint16          u16LocalRegime_moteur;
   CRKHAL_tenuMode enuLocalCrkMode;
   Std_ReturnType  StdLocalValidCall;


   StdLocalValidCall = CRKHAL_udtReadMode(&enuLocalCrkMode);
   if (StdLocalValidCall == E_OK)
   {
      VEMS_vidGET(Ext_noCylEng, u8LocalExt_noCylEng);
      VEMS_vidGET(Regime_moteur, u16LocalRegime_moteur);
      VEMS_vidGET(Cipd_phase_calculated_uncertain,
                   bLocalCipd_phase_calculated_uncertain);
      VEMS_vidGET(Ext_bStrtEnd, bLocalExt_bStrtEnd);

      if (  (enuLocalCrkMode == CRKHAL_udtNORMAL_MODE)
         && (u16LocalRegime_moteur < (uint16)(32 * Seuil_max_reg_detect_rbl) )
         && (u16LocalRegime_moteur > (uint16)(32 * Seuil_min_reg_detect_rbl) )
         && (  (bLocalCipd_phase_calculated_uncertain == 0)
            || (u8LocalExt_noCylEng == 0x04) )
         && (bLocalExt_bStrtEnd != 0) )
      {
         VEMS_vidSET(Autorise_detection_rbl, 1);
      }
      else
      {
         VEMS_vidSET(Autorise_detection_rbl, 0);
      }
   }
   else
   {
      SWFAIL_vidSoftwareErrorHook();
   }
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  KNKRBLACQ_vidRblConfigParameters                           */
/* !Description :  The diagnosis request (Knk_sens_diag_dmd_uavb0), sent under*/
/*                 condition when diagnosis is needed, is changed into active */
/*                 status (Knk_sens_diag_act_uavb0) when the acquisition is   */
/*                 authorized. This allows launching the diagnosis with the   */
/*                 disired parameters.                                        */
/* !Number      :  FCT1.6                                                     */
/* !Author      :  BARHOUMI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf argret void KNKRBLACQ_vidRblCalcParameters();                        */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void KNKRBLACQ_vidRblConfigParameters(void)
{
   KNKRBLACQ_vidRblCalcParameters();
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  KNKRBLACQ_vidRblCalcParameters                             */
/* !Description :  Calls the subroutines configuring the observation window   */
/*                 and the band pass filter parameters.                       */
/* !Number      :  FCT1.7                                                     */
/* !Author      :  BARHOUMI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf argret void KNKRBLACQ_vidRblObservtnWindow();                        */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void KNKRBLACQ_vidRblCalcParameters(void)
{
   KNKRBLACQ_vidRblObservtnWindow();
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  KNKRBLACQ_vidRblObservtnWindow                             */
/* !Description :  The engine air load is used rather than the collector      */
/*                 pressure to set the beginning of the rumble acquisition    */
/*                 window. This window has to be applied not too close to the */
/*                 TDC. A correction is applied to compensate the error on the*/
/*                 intake VVT angle.                                          */
/* !Number      :  FCT1.8                                                     */
/* !Author      :  BARHOUMI                                                   */
/* !Trace_To    :  VEMS_E_10_02579_003.02                                     */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf VEMS_vidGET1DArrayElement(argin, argin, argio);                      */
/*  extf argret void SWFAIL_vidSoftwareErrorHook();                           */
/*  extf argret boolean  GDGAR_bGetFRM(argin uint16 u16IndexFRM);             */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  extf argret void KNKRBLACQ_vidRblAcqWinLength();                          */
/*  input uint8 Eng_noCmbNxtCyl;                                              */
/*  input sint8 Av_bmax_corr_appliquee_cyl[4];                                */
/*  input uint8 IgSys_prm_agIgMaxWiPrevAdpCyl[6];                             */
/*  input uint8 IgSys_agIgOptm;                                               */
/*  input boolean KnkRblAcq_bAvbmaxWinDec_ManuInh;                            */
/*  input uint8 IgSys_agIgKnkPrevOfs;                                         */
/*  input boolean KnkRblAcq_bAvDerWinDec_ManuInh;                             */
/*  input uint8 Cliq_av_corr_filt_gain;                                       */
/*  input uint32 KNKRBLACQ_u32FilterOutputMem;                                */
/*  input uint8 KNKRBLACQ_u8RblFilterInput;                                   */
/*  input uint16 Ext_rAirLd;                                                  */
/*  input uint16 Cliq_eal[17];                                                */
/*  input uint16 Regime_moteur;                                               */
/*  input uint16 Cliq_n[20];                                                  */
/*  input uint8 Cliq_av_corr_bkpt_map[10];                                    */
/*  input uint8 Rbl_av_corr_prev_adpt_k;                                      */
/*  input uint8 Table_debut_fenetre_rumble[17][20];                           */
/*  input uint8 Table_dec_rbl_num_av_corr[10][20];                            */
/*  input sint16 Vcpi_cam_position_error;                                     */
/*  input uint8 Cliq_intk_vvt_err_bkpt_map[10];                               */
/*  input uint8 Table_deb_rbl_offset_transitoire[17][10];                     */
/*  input uint8 Offset_debut_fenetre_defaut_VVT;                              */
/*  input uint8 Debut_fenetre_limite_rbl;                                     */
/*  output uint8 Rbl_av_corr_prev_adpt_k;                                     */
/*  output uint8 KNKRBLACQ_u8RblFilterInput;                                  */
/*  output uint8 Debut_fenetre_rumble;                                        */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void KNKRBLACQ_vidRblObservtnWindow(void)
{
   boolean bLocalAcvDftModStrtKnkRblWin;
   sint8   s8LocalAvBmaxCorrAppCyl;
   sint8   s8LocalFilterInput1;
   uint8   u8LocalEng_noCmbNxtCyl;
   uint8   u8LocalIgSysAgIgKnkPrevOfs;
   uint8   u8LocalDecClqNumAvCor;
   uint8   u8LocalKnkWindow;
   uint8   u8LocalStartWnd;
   uint8   u8LocalStartKnkOffset;
   uint8   u8LocalVcpi_cam_position_error;
   uint8   u8LocalIgSysAgIgMaxWiPrevAdpCyl;
   uint8   u8LocalIgSys_agIgOptm;
   uint8   u8LocalFilterInput2;
   uint8   u8LocalDebut_fenetre_rumble;
   sint16  s16LocalFilterInput;
   sint16  s16LocalStartWndLimit;
   sint16  s16LocalVcpi_cam_position_error;
   sint16  s16LocalFilterInput3;
   uint16  u16LocalParaCliqAvCor;
   uint16  u16LocalParaEngLd;
   uint16  u16LocalParaEngSpd;
   uint16  u16LocalExt_rAirLd;
   uint16  u16LocalRegime_moteur;
   uint16  u16LocalParaVcpiCamPosErr;
   sint32  s32LocalVcpiCamPosErr;


   /* Computing Rbl_av_corr_prev_adpt_k */
   VEMS_vidGET(Eng_noCmbNxtCyl, u8LocalEng_noCmbNxtCyl);
   switch(u8LocalEng_noCmbNxtCyl)
   {
      case 1:
      case 2:
      case 3:
      case 4:
  /* warning QAC:Msg(2:2215) Indentation is not consistent with configured*/
  /* depth. This warning 2215 is to ignore if VEMS indentation rule is    */
  /* respected.                                                           */
         u8LocalEng_noCmbNxtCyl = (uint8)(u8LocalEng_noCmbNxtCyl - 1);
         VEMS_vidGET1DArrayElement(Av_bmax_corr_appliquee_cyl,
                                   u8LocalEng_noCmbNxtCyl,
                                   s8LocalAvBmaxCorrAppCyl);
         VEMS_vidGET1DArrayElement(IgSys_prm_agIgMaxWiPrevAdpCyl,
                                   u8LocalEng_noCmbNxtCyl,
                                   u8LocalIgSysAgIgMaxWiPrevAdpCyl);
         break;

      case 5:
      case 6:
         s8LocalAvBmaxCorrAppCyl = 0;
         u8LocalEng_noCmbNxtCyl = (uint8)(u8LocalEng_noCmbNxtCyl - 1);
         VEMS_vidGET1DArrayElement(IgSys_prm_agIgMaxWiPrevAdpCyl,
                                   u8LocalEng_noCmbNxtCyl,
                                   u8LocalIgSysAgIgMaxWiPrevAdpCyl);
         break;

      default :
         s8LocalAvBmaxCorrAppCyl = 0;
         u8LocalIgSysAgIgMaxWiPrevAdpCyl = 96;
         SWFAIL_vidSoftwareErrorHook();
         break;
   }
   VEMS_vidGET(IgSys_agIgOptm, u8LocalIgSys_agIgOptm);
   if (u8LocalIgSysAgIgMaxWiPrevAdpCyl > u8LocalIgSys_agIgOptm)
   {
      Rbl_av_corr_prev_adpt_k = 96;
   }
   else
   {
      if (KnkRblAcq_bAvbmaxWinDec_ManuInh != 0)
      {
         s8LocalFilterInput1 = 0;
      }
      else
      {
         s8LocalFilterInput1 = s8LocalAvBmaxCorrAppCyl;
      }
      VEMS_vidGET(IgSys_agIgKnkPrevOfs, u8LocalIgSysAgIgKnkPrevOfs);
      if (KnkRblAcq_bAvDerWinDec_ManuInh != 0)
      {
         u8LocalFilterInput2 = 96;
      }
      else
      {
         u8LocalFilterInput2 = u8LocalIgSysAgIgKnkPrevOfs;
      }
      /* résol: 0.375  | offset = 0 °Vil */
      s16LocalFilterInput3 = (sint16)( ( ( u8LocalIgSysAgIgMaxWiPrevAdpCyl
                                         + s8LocalAvBmaxCorrAppCyl)
                                       - ( u8LocalIgSysAgIgKnkPrevOfs
                                         + u8LocalIgSys_agIgOptm))
                                     + 96);
      s16LocalFilterInput3 = (sint16)MATHSRV_udtMAX(s16LocalFilterInput3, 0);

      s16LocalFilterInput = (sint16)( ( s8LocalFilterInput1
                                      - ( u8LocalFilterInput2
                                        + s16LocalFilterInput3))
                                    + 192);
      KNKRBLACQ_u8RblFilterInput =
         (uint8)MATHSRV_udtCLAMP(s16LocalFilterInput, 0, 255);
      Rbl_av_corr_prev_adpt_k =
         (uint8)MATHSRV_u16FirstOrderFilterGu8(Cliq_av_corr_filt_gain,
                                       &KNKRBLACQ_u32FilterOutputMem,
                                       (uint16)KNKRBLACQ_u8RblFilterInput);
   }
   /* Compute of the site para */
   VEMS_vidGET(Ext_rAirLd, u16LocalExt_rAirLd);
   u16LocalParaEngLd = MATHSRV_u16CalcParaIncAryU16(Cliq_eal,
                                                    u16LocalExt_rAirLd,
                                                    17);
   VEMS_vidGET(Regime_moteur, u16LocalRegime_moteur);
   u16LocalParaEngSpd = MATHSRV_u16CalcParaIncAryU16(Cliq_n,
                                                     u16LocalRegime_moteur,
                                                     20);
   u16LocalParaCliqAvCor =
      MATHSRV_u16CalcParaIncAryU8(Cliq_av_corr_bkpt_map,
                                  Rbl_av_corr_prev_adpt_k,
                                  10);

   /* Compute of Debut_fenetre_rumble */
   u8LocalStartWnd = MATHSRV_u8Interp2d(&Table_debut_fenetre_rumble[0][0],
                                        u16LocalParaEngLd,
                                        u16LocalParaEngSpd,
                                        20);
   u8LocalDecClqNumAvCor =
     MATHSRV_u8Interp2d(&Table_dec_rbl_num_av_corr[0][0],
                        u16LocalParaCliqAvCor,
                        u16LocalParaEngSpd,
                        20);

   bLocalAcvDftModStrtKnkRblWin =
     GDGAR_bGetFRM(FRM_FRM_ACVDFTMODSTRTKNKRBLWIN);

   if (bLocalAcvDftModStrtKnkRblWin == 0)
   {
      VEMS_vidGET(Vcpi_cam_position_error, s16LocalVcpi_cam_position_error);
      s32LocalVcpiCamPosErr = (sint32)( (s16LocalVcpi_cam_position_error * 3)
                                      + 1600);
      s16LocalVcpi_cam_position_error = (sint16)(s32LocalVcpiCamPosErr / 24);
      u8LocalVcpi_cam_position_error =
         (uint8)MATHSRV_udtCLAMP(s16LocalVcpi_cam_position_error, 0, 255);
      u16LocalParaVcpiCamPosErr =
         MATHSRV_u16CalcParaIncAryU8(Cliq_intk_vvt_err_bkpt_map,
                                     u8LocalVcpi_cam_position_error,
                                     10);
      u8LocalStartKnkOffset =
         MATHSRV_u8Interp2d(&Table_deb_rbl_offset_transitoire[0][0],
                            u16LocalParaEngLd,
                            u16LocalParaVcpiCamPosErr,
                            10);
   }
   else
   {
      u8LocalStartKnkOffset = Offset_debut_fenetre_defaut_VVT;
   }

   s16LocalStartWndLimit = (sint16) ( ( (4 * u8LocalStartKnkOffset)
                                      + (4 * u8LocalStartWnd))
                                    + ( (3 * u8LocalDecClqNumAvCor)
                                       - 688));
   s16LocalStartWndLimit = (sint16)(s16LocalStartWndLimit / 4);
   u8LocalKnkWindow = (uint8)MATHSRV_udtCLAMP(s16LocalStartWndLimit, 0, 255);

   u8LocalDebut_fenetre_rumble =
      (uint8)MATHSRV_udtMAX(u8LocalKnkWindow, Debut_fenetre_limite_rbl);
   VEMS_vidSET(Debut_fenetre_rumble, u8LocalDebut_fenetre_rumble);
   KNKRBLACQ_vidRblAcqWinLength();
}

/*************************** <AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/* !Function    :  KNKRBLACQ_vidRblAcqWinLength                               */
/* !Description :  Compute of the Length of the acquisition window and the    */
/*                 Inhibition boolean of the Rumble API.                      */
/* !Number      :  FCT1.9                                                     */
/* !Author      :  BARHOUMI                                                   */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  extf VEMS_vidGET(argin, argio);                                           */
/*  extf VEMS_vidSET(argout, argio);                                          */
/*  input uint8 Debut_fenetre_cliquetis;                                      */
/*  input uint8 Debut_fenetre_rumble;                                         */
/*  output uint8 Duree_fenetre_rumble;                                        */
/*                                                                            */
/************************** </AUTO_FUNCTION_HEADER> ***************************/
/*                                                                            */
/******************************************************************************/
/************************* <AUTO_FUNCTION_PROTOTYPE> **************************/
void KNKRBLACQ_vidRblAcqWinLength(void)
{
   uint8   u8LocalDebut_fenetre_cliquetis;
   uint8   u8LocalDuree_fenetre_rumble;
   uint8   u8LocalDebut_fenetre_rumble;
   sint16  s16LocalDebutFenetreRumble;


   VEMS_vidGET(Debut_fenetre_cliquetis, u8LocalDebut_fenetre_cliquetis);
   VEMS_vidGET(Debut_fenetre_rumble, u8LocalDebut_fenetre_rumble);
   s16LocalDebutFenetreRumble =
      (sint16)(u8LocalDebut_fenetre_cliquetis - u8LocalDebut_fenetre_rumble);
   u8LocalDuree_fenetre_rumble =
      (uint8)MATHSRV_udtMAX(s16LocalDebutFenetreRumble, 0);
   VEMS_vidSET(Duree_fenetre_rumble, u8LocalDuree_fenetre_rumble);
}
/*------------------------------ end of file ---------------------------------*/