//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: micromodelv2.cpp
//
// Code generated for Simulink model 'micromodelv2'.
//
// Model version                  : 1.105
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Wed Aug  4 15:23:26 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "micromodelv2.h"
#include "micromodelv2_private.h"

// Block signals (default storage)
B_micromodelv2_T micromodelv2_B;

// Block states (default storage)
DW_micromodelv2_T micromodelv2_DW;

// Real-time model
RT_MODEL_micromodelv2_T micromodelv2_M_ = RT_MODEL_micromodelv2_T();
RT_MODEL_micromodelv2_T *const micromodelv2_M = &micromodelv2_M_;

//
// System initialize for atomic system:
//    synthesized block
//    synthesized block
//
void micromodelv2_MovingAverage_Init(DW_MovingAverage_micromodelv2_T *localDW,
  P_MovingAverage_micromodelv2_T *localP)
{
  g_dsp_private_ExponentialMovi_T *obj;
  real_T varargin_2;
  boolean_T flag;

  // Start for MATLABSystem: '<Root>/Moving Average'
  localDW->obj.matlabCodegenIsDeleted = true;
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  flag = (localDW->obj.isInitialized == 1);
  if (flag) {
    localDW->obj.TunablePropsChanged = true;
  }

  localDW->obj.ForgettingFactor = localP->MovingAverage_ForgettingFactor;
  localDW->obj.isSetupComplete = false;
  localDW->obj.isInitialized = 1;
  localDW->obj.NumChannels = 1;
  varargin_2 = localDW->obj.ForgettingFactor;
  localDW->obj._pobj0.isInitialized = 0;
  flag = (localDW->obj._pobj0.isInitialized == 1);
  if (flag) {
    localDW->obj._pobj0.TunablePropsChanged = true;
  }

  localDW->obj._pobj0.ForgettingFactor = varargin_2;
  localDW->obj.pStatistic = &localDW->obj._pobj0;
  localDW->obj.isSetupComplete = true;
  localDW->obj.TunablePropsChanged = false;

  // End of Start for MATLABSystem: '<Root>/Moving Average'

  // InitializeConditions for MATLABSystem: '<Root>/Moving Average'
  obj = localDW->obj.pStatistic;
  if (obj->isInitialized == 1) {
    obj->pwN = 1.0;
    obj->pmN = 0.0;
  }

  // End of InitializeConditions for MATLABSystem: '<Root>/Moving Average'
}

//
// Output and update for atomic system:
//    synthesized block
//    synthesized block
//
void micromodelv2_MovingAverage(real_T rtu_0, B_MovingAverage_micromodelv2_T
  *localB, DW_MovingAverage_micromodelv2_T *localDW,
  P_MovingAverage_micromodelv2_T *localP)
{
  g_dsp_private_ExponentialMovi_T *obj;
  real_T lambda;
  real_T pmLocal;
  real_T pwLocal;
  boolean_T flag;

  // MATLABSystem: '<Root>/Moving Average'
  if (localDW->obj.ForgettingFactor != localP->MovingAverage_ForgettingFactor) {
    flag = (localDW->obj.isInitialized == 1);
    if (flag) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.ForgettingFactor = localP->MovingAverage_ForgettingFactor;
  }

  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
    obj = localDW->obj.pStatistic;
    flag = (obj->isInitialized == 1);
    if (flag) {
      obj->TunablePropsChanged = true;
    }

    localDW->obj.pStatistic->ForgettingFactor = localDW->obj.ForgettingFactor;
  }

  obj = localDW->obj.pStatistic;
  if (obj->isInitialized != 1) {
    obj->isSetupComplete = false;
    obj->isInitialized = 1;
    obj->pwN = 1.0;
    obj->pmN = 0.0;
    obj->plambda = obj->ForgettingFactor;
    obj->isSetupComplete = true;
    obj->TunablePropsChanged = false;
    obj->pwN = 1.0;
    obj->pmN = 0.0;
  }

  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
    obj->plambda = obj->ForgettingFactor;
  }

  pwLocal = obj->pwN;
  pmLocal = obj->pmN;
  lambda = obj->plambda;
  localB->MovingAverage = (1.0 - 1.0 / pwLocal) * pmLocal + 1.0 / pwLocal *
    rtu_0;
  obj->pwN = lambda * pwLocal + 1.0;
  obj->pmN = localB->MovingAverage;

  // End of MATLABSystem: '<Root>/Moving Average'
}

//
// Termination for atomic system:
//    synthesized block
//    synthesized block
//
void micromodelv2_MovingAverage_Term(DW_MovingAverage_micromodelv2_T *localDW)
{
  g_dsp_private_ExponentialMovi_T *obj;

  // Terminate for MATLABSystem: '<Root>/Moving Average'
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      obj = localDW->obj.pStatistic;
      if (obj->isInitialized == 1) {
        obj->isInitialized = 2;
      }

      localDW->obj.NumChannels = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<Root>/Moving Average'
}

// Model step function
void micromodelv2_step(void)
{
  // local block i/o variables
  real_T rtb_Subtract1;
  SL_Bus_micromodelv2_std_msgs_Float64 b_varargout_2;
  SL_Bus_micromodelv2_std_msgs_UInt8 rtb_BusAssignment3_o;
  real_T u0;
  int32_T i;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe3'
  // MATLABSystem: '<S13>/SourceBlock' incorporates:
  //   Inport: '<S21>/In1'

  b_varargout_1 = Sub_micromodelv2_15.getLatestMessage
    (&micromodelv2_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S21>/Enable'

  if (b_varargout_1) {
    micromodelv2_B.In1 = micromodelv2_B.BusAssignment;
  }

  // End of MATLABSystem: '<S13>/SourceBlock'
  // End of Outputs for SubSystem: '<S13>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe3'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S11>/SourceBlock' incorporates:
  //   Inport: '<S19>/In1'

  b_varargout_1 = Sub_micromodelv2_19.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S19>/Enable'

  if (b_varargout_1) {
    micromodelv2_B.In1_n = b_varargout_2;
  }

  // End of MATLABSystem: '<S11>/SourceBlock'
  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S12>/SourceBlock' incorporates:
  //   Inport: '<S20>/In1'

  b_varargout_1 = Sub_micromodelv2_22.getLatestMessage
    (&micromodelv2_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S20>/Enable'

  if (b_varargout_1) {
    micromodelv2_B.In1_p = micromodelv2_B.BusAssignment;
  }

  // End of MATLABSystem: '<S12>/SourceBlock'
  // End of Outputs for SubSystem: '<S12>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'
  micromodelv2_MovingAverage(micromodelv2_B.In1_p.Linear.Z,
    &micromodelv2_B.MovingAverage, &micromodelv2_DW.MovingAverage,
    &micromodelv2_P.MovingAverage);

  // Sum: '<Root>/Subtract1'
  rtb_Subtract1 = micromodelv2_B.MovingAverage.MovingAverage +
    micromodelv2_B.In1.Linear.X;
  micromodelv2_MovingAverage(rtb_Subtract1, &micromodelv2_B.MovingAverage1,
    &micromodelv2_DW.MovingAverage1, &micromodelv2_P.MovingAverage1);

  // MATLABSystem: '<Root>/Current Time'
  currentROSTimeBus(&micromodelv2_B.r);

  // MATLABSystem: '<Root>/Get Parameter2'
  ParamGet_micromodelv2_31.get_parameter(&micromodelv2_B.value);

  // MATLABSystem: '<Root>/Get Parameter1'
  ParamGet_micromodelv2_30.get_parameter(&micromodelv2_B.dx_2);

  // MATLABSystem: '<Root>/Get Parameter3'
  ParamGet_micromodelv2_32.get_parameter(&micromodelv2_B.dx_3);

  // MATLABSystem: '<Root>/Get Parameter4'
  ParamGet_micromodelv2_33.get_parameter(&micromodelv2_B.dx_1);

  // MATLABSystem: '<Root>/Get Parameter5'
  ParamGet_micromodelv2_40.get_parameter(&micromodelv2_B.dx_5);

  // MATLABSystem: '<Root>/Get Parameter6'
  ParamGet_micromodelv2_41.get_parameter(&micromodelv2_B.dx_4);

  // MATLABSystem: '<Root>/Get Parameter7'
  ParamGet_micromodelv2_67.get_parameter(&b_varargout_1);

  // MATLAB Function: '<Root>/noclosing_0804' incorporates:
  //   MATLABSystem: '<Root>/Get Parameter1'
  //   MATLABSystem: '<Root>/Get Parameter2'
  //   MATLABSystem: '<Root>/Get Parameter3'
  //   MATLABSystem: '<Root>/Get Parameter4'
  //   MATLABSystem: '<Root>/Get Parameter5'
  //   MATLABSystem: '<Root>/Get Parameter6'
  //   MATLABSystem: '<Root>/Get Parameter7'

  if (!micromodelv2_DW.time_avg_target_not_empty) {
    micromodelv2_DW.t_length = 1.0;
    memset(&micromodelv2_DW.time_avg_target[0], 0, 1280U * sizeof(real_T));
    micromodelv2_DW.time_avg_target_not_empty = true;
    micromodelv2_DW.time_avg_target[1279] =
      micromodelv2_B.MovingAverage1.MovingAverage;
  } else {
    for (i = 0; i < 1279; i++) {
      micromodelv2_DW.time_avg_target[i] = micromodelv2_DW.time_avg_target[i + 1];
    }

    micromodelv2_DW.time_avg_target[1279] =
      micromodelv2_B.MovingAverage1.MovingAverage;
    if (micromodelv2_DW.t_length < 1280.0) {
      micromodelv2_DW.t_length++;
    }
  }

  micromodelv2_B.v_des = micromodelv2_DW.time_avg_target[0];
  for (i = 0; i < 1023; i++) {
    micromodelv2_B.v_des += micromodelv2_DW.time_avg_target[i + 1];
  }

  micromodelv2_B.bsum = micromodelv2_DW.time_avg_target[1024];
  for (i = 0; i < 255; i++) {
    micromodelv2_B.bsum += micromodelv2_DW.time_avg_target[i + 1025];
  }

  micromodelv2_B.v_des = (micromodelv2_B.v_des + micromodelv2_B.bsum) /
    micromodelv2_DW.t_length;
  if (b_varargout_1) {
    if (micromodelv2_B.In1_n.Data - 2.0 > 0.0) {
      micromodelv2_B.bsum = micromodelv2_B.In1_n.Data - 2.0;
    } else {
      micromodelv2_B.bsum = 0.0;
    }

    u0 = 0.4 * micromodelv2_B.bsum;
    if (!(u0 < 30.0)) {
      u0 = 30.0;
    }

    micromodelv2_B.v_des = (0.33333333333333331 * u0 + 0.33333333333333331 *
      micromodelv2_B.MovingAverage1.MovingAverage) + 0.33333333333333331 *
      micromodelv2_B.v_des;
  }

  micromodelv2_B.dv_minus = micromodelv2_B.MovingAverage1.MovingAverage -
    micromodelv2_B.In1.Linear.X;
  if (!(micromodelv2_B.dv_minus < 0.0)) {
    micromodelv2_B.dv_minus = 0.0;
  }

  if (micromodelv2_B.MovingAverage1.MovingAverage > 0.0) {
    micromodelv2_B.bsum = micromodelv2_B.MovingAverage1.MovingAverage;
  } else {
    micromodelv2_B.bsum = 0.0;
  }

  if ((!(micromodelv2_B.bsum < micromodelv2_B.v_des)) && (!rtIsNaN
       (micromodelv2_B.v_des))) {
    micromodelv2_B.bsum = micromodelv2_B.v_des;
  }

  u0 = micromodelv2_B.value * micromodelv2_B.In1.Linear.X;
  if ((micromodelv2_B.dx_1 > u0) || rtIsNaN(u0)) {
    u0 = micromodelv2_B.dx_1;
  }

  micromodelv2_B.value = micromodelv2_B.dv_minus * micromodelv2_B.dv_minus;
  micromodelv2_B.dx_1 = micromodelv2_B.value * 0.33333333333333331 + u0;
  u0 = micromodelv2_B.dx_2 * micromodelv2_B.In1.Linear.X;
  if ((micromodelv2_B.dx_5 > u0) || rtIsNaN(u0)) {
    u0 = micromodelv2_B.dx_5;
  }

  micromodelv2_B.dx_2 = micromodelv2_B.value * 0.5 + u0;
  u0 = micromodelv2_B.dx_3 * micromodelv2_B.In1.Linear.X;
  if ((micromodelv2_B.dx_4 > u0) || rtIsNaN(u0)) {
    u0 = micromodelv2_B.dx_4;
  }

  micromodelv2_B.dx_3 = micromodelv2_B.value + u0;
  u0 = micromodelv2_B.dx_4 * 5.0;
  micromodelv2_B.dx_5 = 1.3 * micromodelv2_B.dx_3;
  if ((u0 > micromodelv2_B.dx_5) || rtIsNaN(micromodelv2_B.dx_5)) {
    micromodelv2_B.dx_5 = u0;
  }

  u0 = micromodelv2_B.dx_4 * 2.0;
  micromodelv2_B.dx_4 = 1.1 * micromodelv2_B.dx_3;
  if ((u0 > micromodelv2_B.dx_4) || rtIsNaN(micromodelv2_B.dx_4)) {
    micromodelv2_B.dx_4 = u0;
  }

  if (micromodelv2_B.In1_n.Data >= micromodelv2_B.dx_4) {
    // BusAssignment: '<Root>/Bus Assignment3'
    rtb_BusAssignment3_o.Data = 1U;
    u0 = (micromodelv2_B.v_des - micromodelv2_B.v_des) * (micromodelv2_B.dx_5 -
      micromodelv2_B.In1_n.Data) / (micromodelv2_B.dx_5 - micromodelv2_B.dx_4);
    if ((0.0 < u0) || rtIsNaN(u0)) {
      u0 = 0.0;
    }

    micromodelv2_B.dx_4 = micromodelv2_B.v_des + u0;
  } else if (micromodelv2_B.In1_n.Data >= micromodelv2_B.dx_3) {
    // BusAssignment: '<Root>/Bus Assignment3'
    rtb_BusAssignment3_o.Data = 2U;
    micromodelv2_B.dx_4 = micromodelv2_B.v_des;
  } else if (micromodelv2_B.In1_n.Data >= micromodelv2_B.dx_2) {
    // BusAssignment: '<Root>/Bus Assignment3'
    rtb_BusAssignment3_o.Data = 3U;
    micromodelv2_B.dx_4 = (micromodelv2_B.v_des - micromodelv2_B.bsum) *
      (micromodelv2_B.In1_n.Data - micromodelv2_B.dx_2) / (micromodelv2_B.dx_3 -
      micromodelv2_B.dx_2) + micromodelv2_B.bsum;
  } else if (micromodelv2_B.In1_n.Data >= micromodelv2_B.dx_1) {
    // BusAssignment: '<Root>/Bus Assignment3'
    rtb_BusAssignment3_o.Data = 4U;
    micromodelv2_B.dx_4 = (micromodelv2_B.In1_n.Data - micromodelv2_B.dx_1) *
      micromodelv2_B.bsum / (micromodelv2_B.dx_2 - micromodelv2_B.dx_1);
  } else {
    // BusAssignment: '<Root>/Bus Assignment3'
    rtb_BusAssignment3_o.Data = 5U;
    micromodelv2_B.dx_4 = 0.0;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<S1>/Constant'

  micromodelv2_B.BusAssignment = micromodelv2_P.Constant_Value;
  micromodelv2_B.BusAssignment.Linear.X = micromodelv2_B.dx_4;
  micromodelv2_B.BusAssignment.Angular.Z = micromodelv2_P.Constant_Value_i;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_micromodelv2_29.publish(&micromodelv2_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Outputs for Atomic SubSystem: '<Root>/Publish3'
  // MATLABSystem: '<S8>/SinkBlock'
  Pub_micromodelv2_74.publish(&rtb_BusAssignment3_o);

  // End of Outputs for SubSystem: '<Root>/Publish3'

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Constant: '<S2>/Constant'
  //   MATLAB Function: '<Root>/noclosing_0804'

  micromodelv2_B.BusAssignment = micromodelv2_P.Constant_Value_g;
  micromodelv2_B.BusAssignment.Linear.X = micromodelv2_B.v_des;
  micromodelv2_B.BusAssignment.Angular.Z = micromodelv2_P.Constant1_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S6>/SinkBlock'
  Pub_micromodelv2_50.publish(&micromodelv2_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<Root>/Constant2'
  //   Constant: '<S3>/Constant'
  //   MATLAB Function: '<Root>/noclosing_0804'

  micromodelv2_B.BusAssignment = micromodelv2_P.Constant_Value_h;
  micromodelv2_B.BusAssignment.Linear.X = micromodelv2_B.v_des;
  micromodelv2_B.BusAssignment.Angular.Z = micromodelv2_P.Constant2_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S7>/SinkBlock'
  Pub_micromodelv2_51.publish(&micromodelv2_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // BusAssignment: '<S9>/Bus Assignment3' incorporates:
  //   Constant: '<S15>/Constant'
  //   Constant: '<S9>/Constant3'

  micromodelv2_B.BusAssignment = micromodelv2_P.Constant_Value_a;
  micromodelv2_B.BusAssignment.Linear.X =
    micromodelv2_B.MovingAverage1.MovingAverage;
  micromodelv2_B.BusAssignment.Angular.Z = micromodelv2_P.Constant3_Value;

  // Outputs for Atomic SubSystem: '<S9>/Publish3'
  // MATLABSystem: '<S16>/SinkBlock'
  Pub_micromodelv2_57.publish(&micromodelv2_B.BusAssignment);

  // End of Outputs for SubSystem: '<S9>/Publish3'

  // BusAssignment: '<S10>/Bus Assignment3' incorporates:
  //   Constant: '<S10>/Constant3'
  //   Constant: '<S17>/Constant'

  micromodelv2_B.BusAssignment = micromodelv2_P.Constant_Value_m;
  micromodelv2_B.BusAssignment.Linear.X =
    micromodelv2_B.MovingAverage.MovingAverage;
  micromodelv2_B.BusAssignment.Angular.Z = micromodelv2_P.Constant3_Value_p;

  // Outputs for Atomic SubSystem: '<S10>/Publish3'
  // MATLABSystem: '<S18>/SinkBlock'
  Pub_micromodelv2_65.publish(&micromodelv2_B.BusAssignment);

  // End of Outputs for SubSystem: '<S10>/Publish3'
}

// Model initialize function
void micromodelv2_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_0[8];
    char_T b_zeroDelimTopic_1[7];
    char_T b_zeroDelimTopic_2[6];
    char_T b_zeroDelimTopic[4];
    char_T b_zeroDelimName[3];
    static const char_T tmp[9] = { 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't' };

    static const char_T tmp_0[7] = { 'r', 'e', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_1[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_2[6] = { 'r', 'e', 'g', 'i', 'o', 'n' };

    static const char_T tmp_3[5] = { 'v', '_', 'd', 'e', 's' };

    static const char_T tmp_4[6] = { 'v', '_', 'd', 'e', 's', '2' };

    static const char_T tmp_5[18] = { 'e', 's', 't', 'i', 'm', 'a', 't', 'e',
      'd', '_', 'l', 'e', 'a', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_6[21] = { 's', 'm', 'o', 'o', 't', 'h', 'e', 'd',
      '_', 'r', 'e', 'l', 'a', 't', 'i', 'v', 'e', '_', 'v', 'e', 'l' };

    static const char_T tmp_7[11] = { 'g', 'a', 'p', '_', 'v', 'a', 'r', 'i',
      'a', 'n', 't' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3'
    // SystemInitialize for Enabled SubSystem: '<S13>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S21>/Out1' incorporates:
    //   Inport: '<S21>/In1'

    micromodelv2_B.In1 = micromodelv2_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S13>/Enabled Subsystem'

    // Start for MATLABSystem: '<S13>/SourceBlock'
    micromodelv2_DW.obj_cg.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_cg.isInitialized = 1;
    b_zeroDelimTopic[0] = 'v';
    b_zeroDelimTopic[1] = 'e';
    b_zeroDelimTopic[2] = 'l';
    b_zeroDelimTopic[3] = '\x00';
    Sub_micromodelv2_15.createSubscriber(&b_zeroDelimTopic[0], 1);
    micromodelv2_DW.obj_cg.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Subscribe3'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S19>/Out1' incorporates:
    //   Inport: '<S19>/In1'

    micromodelv2_B.In1_n = micromodelv2_P.Out1_Y0_p;

    // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'

    // Start for MATLABSystem: '<S11>/SourceBlock'
    micromodelv2_DW.obj_m.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      micromodelv2_B.b_zeroDelimTopic_c[i] = tmp[i];
    }

    micromodelv2_B.b_zeroDelimTopic_c[9] = '\x00';
    Sub_micromodelv2_19.createSubscriber(&micromodelv2_B.b_zeroDelimTopic_c[0],
      1);
    micromodelv2_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S12>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S20>/Out1' incorporates:
    //   Inport: '<S20>/In1'

    micromodelv2_B.In1_p = micromodelv2_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S12>/Enabled Subsystem'

    // Start for MATLABSystem: '<S12>/SourceBlock'
    micromodelv2_DW.obj_d.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[7] = '\x00';
    Sub_micromodelv2_22.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    micromodelv2_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    micromodelv2_DW.obj_jz.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_jz.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_0[i] = tmp_1[i];
    }

    b_zeroDelimTopic_0[7] = '\x00';
    Pub_micromodelv2_29.createPublisher(&b_zeroDelimTopic_0[0], 1);
    micromodelv2_DW.obj_jz.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish3'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    micromodelv2_DW.obj_ce.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_ce.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_1[i] = tmp_2[i];
    }

    b_zeroDelimTopic_1[6] = '\x00';
    Pub_micromodelv2_74.createPublisher(&b_zeroDelimTopic_1[0], 1);
    micromodelv2_DW.obj_ce.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish3'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    micromodelv2_DW.obj_f.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimTopic_2[i] = tmp_3[i];
    }

    b_zeroDelimTopic_2[5] = '\x00';
    Pub_micromodelv2_50.createPublisher(&b_zeroDelimTopic_2[0], 1);
    micromodelv2_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    micromodelv2_DW.obj_ct.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_ct.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_1[i] = tmp_4[i];
    }

    b_zeroDelimTopic_1[6] = '\x00';
    Pub_micromodelv2_51.createPublisher(&b_zeroDelimTopic_1[0], 1);
    micromodelv2_DW.obj_ct.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<S9>/Publish3'
    // Start for MATLABSystem: '<S16>/SinkBlock'
    micromodelv2_DW.obj_b.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      micromodelv2_B.b_zeroDelimTopic_m[i] = tmp_5[i];
    }

    micromodelv2_B.b_zeroDelimTopic_m[18] = '\x00';
    Pub_micromodelv2_57.createPublisher(&micromodelv2_B.b_zeroDelimTopic_m[0], 1);
    micromodelv2_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S16>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S9>/Publish3'

    // SystemInitialize for Atomic SubSystem: '<S10>/Publish3'
    // Start for MATLABSystem: '<S18>/SinkBlock'
    micromodelv2_DW.obj_ek.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_ek.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      micromodelv2_B.b_zeroDelimTopic[i] = tmp_6[i];
    }

    micromodelv2_B.b_zeroDelimTopic[21] = '\x00';
    Pub_micromodelv2_65.createPublisher(&micromodelv2_B.b_zeroDelimTopic[0], 1);
    micromodelv2_DW.obj_ek.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S18>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S10>/Publish3'
    micromodelv2_MovingAverage_Init(&micromodelv2_DW.MovingAverage,
      &micromodelv2_P.MovingAverage);
    micromodelv2_MovingAverage_Init(&micromodelv2_DW.MovingAverage1,
      &micromodelv2_P.MovingAverage1);

    // Start for MATLABSystem: '<Root>/Current Time'
    micromodelv2_DW.obj.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj.isInitialized = 1;
    micromodelv2_DW.obj.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter2'
    micromodelv2_DW.obj_k.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_k.isInitialized = 1;
    b_zeroDelimTopic[0] = 't';
    b_zeroDelimTopic[1] = 'h';
    b_zeroDelimTopic[2] = '1';
    b_zeroDelimTopic[3] = '\x00';
    ParamGet_micromodelv2_31.initialize(&b_zeroDelimTopic[0]);
    ParamGet_micromodelv2_31.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelv2_31.set_initial_value(0.4);
    micromodelv2_DW.obj_k.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter1'
    micromodelv2_DW.obj_c.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_c.isInitialized = 1;
    b_zeroDelimTopic[0] = 't';
    b_zeroDelimTopic[1] = 'h';
    b_zeroDelimTopic[2] = '2';
    b_zeroDelimTopic[3] = '\x00';
    ParamGet_micromodelv2_30.initialize(&b_zeroDelimTopic[0]);
    ParamGet_micromodelv2_30.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelv2_30.set_initial_value(1.2);
    micromodelv2_DW.obj_c.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter3'
    micromodelv2_DW.obj_p.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_p.isInitialized = 1;
    b_zeroDelimTopic[0] = 't';
    b_zeroDelimTopic[1] = 'h';
    b_zeroDelimTopic[2] = '3';
    b_zeroDelimTopic[3] = '\x00';
    ParamGet_micromodelv2_32.initialize(&b_zeroDelimTopic[0]);
    ParamGet_micromodelv2_32.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelv2_32.set_initial_value(1.8);
    micromodelv2_DW.obj_p.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter4'
    micromodelv2_DW.obj_h.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_h.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '1';
    b_zeroDelimName[2] = '\x00';
    ParamGet_micromodelv2_33.initialize(&b_zeroDelimName[0]);
    ParamGet_micromodelv2_33.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelv2_33.set_initial_value(4.5);
    micromodelv2_DW.obj_h.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter5'
    micromodelv2_DW.obj_a.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_a.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '2';
    b_zeroDelimName[2] = '\x00';
    ParamGet_micromodelv2_40.initialize(&b_zeroDelimName[0]);
    ParamGet_micromodelv2_40.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelv2_40.set_initial_value(5.25);
    micromodelv2_DW.obj_a.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter6'
    micromodelv2_DW.obj_j.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_j.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '3';
    b_zeroDelimName[2] = '\x00';
    ParamGet_micromodelv2_41.initialize(&b_zeroDelimName[0]);
    ParamGet_micromodelv2_41.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelv2_41.set_initial_value(6.0);
    micromodelv2_DW.obj_j.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter7'
    micromodelv2_DW.obj_e.matlabCodegenIsDeleted = false;
    micromodelv2_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      micromodelv2_B.b_zeroDelimName[i] = tmp_7[i];
    }

    micromodelv2_B.b_zeroDelimName[11] = '\x00';
    ParamGet_micromodelv2_67.initialize(&micromodelv2_B.b_zeroDelimName[0]);
    ParamGet_micromodelv2_67.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelv2_67.set_initial_value(true);
    micromodelv2_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter7'
  }
}

// Model terminate function
void micromodelv2_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe3'
  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  if (!micromodelv2_DW.obj_cg.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_cg.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe3'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  if (!micromodelv2_DW.obj_m.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S12>/SourceBlock'
  if (!micromodelv2_DW.obj_d.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'
  micromodelv2_MovingAverage_Term(&micromodelv2_DW.MovingAverage);
  micromodelv2_MovingAverage_Term(&micromodelv2_DW.MovingAverage1);

  // Terminate for MATLABSystem: '<Root>/Current Time'
  if (!micromodelv2_DW.obj.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Current Time'

  // Terminate for MATLABSystem: '<Root>/Get Parameter2'
  if (!micromodelv2_DW.obj_k.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter2'

  // Terminate for MATLABSystem: '<Root>/Get Parameter1'
  if (!micromodelv2_DW.obj_c.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter1'

  // Terminate for MATLABSystem: '<Root>/Get Parameter3'
  if (!micromodelv2_DW.obj_p.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter3'

  // Terminate for MATLABSystem: '<Root>/Get Parameter4'
  if (!micromodelv2_DW.obj_h.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter4'

  // Terminate for MATLABSystem: '<Root>/Get Parameter5'
  if (!micromodelv2_DW.obj_a.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_a.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter5'

  // Terminate for MATLABSystem: '<Root>/Get Parameter6'
  if (!micromodelv2_DW.obj_j.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter6'

  // Terminate for MATLABSystem: '<Root>/Get Parameter7'
  if (!micromodelv2_DW.obj_e.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter7'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  if (!micromodelv2_DW.obj_jz.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_jz.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish3'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  if (!micromodelv2_DW.obj_ce.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_ce.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish3'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  if (!micromodelv2_DW.obj_f.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  if (!micromodelv2_DW.obj_ct.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_ct.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Atomic SubSystem: '<S9>/Publish3'
  // Terminate for MATLABSystem: '<S16>/SinkBlock'
  if (!micromodelv2_DW.obj_b.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S16>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish3'

  // Terminate for Atomic SubSystem: '<S10>/Publish3'
  // Terminate for MATLABSystem: '<S18>/SinkBlock'
  if (!micromodelv2_DW.obj_ek.matlabCodegenIsDeleted) {
    micromodelv2_DW.obj_ek.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S18>/SinkBlock'
  // End of Terminate for SubSystem: '<S10>/Publish3'
}

//
// File trailer for generated code.
//
// [EOF]
//
