//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: micromodelv2.h
//
// Code generated for Simulink model 'micromodelv2'.
//
// Model version                  : 1.94
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Tue Aug  3 14:28:18 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_micromodelv2_h_
#define RTW_HEADER_micromodelv2_h_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "micromodelv2_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals for system '<Root>/Moving Average'
struct B_MovingAverage_micromodelv2_T {
  real_T MovingAverage;                // '<Root>/Moving Average'
};

// Block states (default storage) for system '<Root>/Moving Average'
struct DW_MovingAverage_micromodelv2_T {
  dsp_simulink_MovingAverage_mi_T obj; // '<Root>/Moving Average'
  boolean_T objisempty;                // '<Root>/Moving Average'
};

// Block signals (default storage)
struct B_micromodelv2_T {
  SL_Bus_micromodelv2_geometry_msgs_Twist In1;// '<S21>/In1'
  SL_Bus_micromodelv2_geometry_msgs_Twist In1_p;// '<S20>/In1'
  SL_Bus_micromodelv2_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
  char_T b_zeroDelimTopic[22];
  char_T b_zeroDelimTopic_m[19];
  SL_Bus_micromodelv2_ros_time_Time r;
  char_T b_zeroDelimName[12];
  char_T b_zeroDelimTopic_c[10];
  char_T b_zeroDelimName_k[9];
  real_T v_des;
  real_T dv_minus;
  real_T dx_1;
  real_T dx_2;
  real_T dx_3;
  real_T dx_5;
  real_T dx_4;
  real_T bsum;
  real_T value;
  SL_Bus_micromodelv2_std_msgs_Float64 In1_n;// '<S19>/In1'
  SL_Bus_micromodelv2_std_msgs_Float64 b_varargout_2;
  B_MovingAverage_micromodelv2_T MovingAverage1;// '<Root>/Moving Average'
  B_MovingAverage_micromodelv2_T MovingAverage;// '<Root>/Moving Average'
};

// Block states (default storage) for system '<Root>'
struct DW_micromodelv2_T {
  ros_slros_internal_block_Curr_T obj; // '<Root>/Current Time'
  ros_slros_internal_block_GetP_T obj_g;// '<Root>/Get Parameter8'
  ros_slros_internal_block_GetP_T obj_e;// '<Root>/Get Parameter7'
  ros_slros_internal_block_GetP_T obj_j;// '<Root>/Get Parameter6'
  ros_slros_internal_block_GetP_T obj_a;// '<Root>/Get Parameter5'
  ros_slros_internal_block_GetP_T obj_h;// '<Root>/Get Parameter4'
  ros_slros_internal_block_GetP_T obj_p;// '<Root>/Get Parameter3'
  ros_slros_internal_block_GetP_T obj_k;// '<Root>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_c;// '<Root>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_ek;// '<S18>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_b;// '<S16>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ce;// '<S9>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ct;// '<S8>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_f;// '<S7>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_jz;// '<S6>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_cg;// '<S14>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S13>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_m;// '<S12>/SourceBlock'
  real_T Memory_PreviousInput;         // '<Root>/Memory'
  real_T v_des2;                       // '<Root>/MATLAB Function1'
  real_T d1;                           // '<Root>/MATLAB Function1'
  real_T d2;                           // '<Root>/MATLAB Function1'
  real_T time_avg_target[1280];        // '<Root>/MATLAB Function1'
  real_T t_length;                     // '<Root>/MATLAB Function1'
  boolean_T v_des2_not_empty;          // '<Root>/MATLAB Function1'
  boolean_T time_avg_target_not_empty; // '<Root>/MATLAB Function1'
  DW_MovingAverage_micromodelv2_T MovingAverage1;// '<Root>/Moving Average'
  DW_MovingAverage_micromodelv2_T MovingAverage;// '<Root>/Moving Average'
};

// Parameters for system: '<Root>/Moving Average'
struct P_MovingAverage_micromodelv2_T_ {
  real_T MovingAverage_ForgettingFactor;// Expression: 0.9
                                           //  Referenced by: '<Root>/Moving Average'

};

// Parameters (default storage)
struct P_micromodelv2_T_ {
  SL_Bus_micromodelv2_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                            //  Referenced by: '<S1>/Constant'

  SL_Bus_micromodelv2_geometry_msgs_Twist Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                              //  Referenced by: '<S2>/Constant'

  SL_Bus_micromodelv2_geometry_msgs_Twist Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                              //  Referenced by: '<S3>/Constant'

  SL_Bus_micromodelv2_geometry_msgs_Twist Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                              //  Referenced by: '<S15>/Constant'

  SL_Bus_micromodelv2_geometry_msgs_Twist Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                              //  Referenced by: '<S17>/Constant'

  SL_Bus_micromodelv2_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                     //  Referenced by: '<S20>/Out1'

  SL_Bus_micromodelv2_geometry_msgs_Twist Constant_Value_mf;// Computed Parameter: Constant_Value_mf
                                                               //  Referenced by: '<S13>/Constant'

  SL_Bus_micromodelv2_geometry_msgs_Twist Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                       //  Referenced by: '<S21>/Out1'

  SL_Bus_micromodelv2_geometry_msgs_Twist Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                              //  Referenced by: '<S14>/Constant'

  SL_Bus_micromodelv2_std_msgs_Float64 Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                    //  Referenced by: '<S19>/Out1'

  SL_Bus_micromodelv2_std_msgs_Float64 Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                           //  Referenced by: '<S12>/Constant'

  SL_Bus_micromodelv2_std_msgs_UInt8 Constant_Value_oj;// Computed Parameter: Constant_Value_oj
                                                          //  Referenced by: '<S4>/Constant'

  real_T Gain_Gain;                    // Expression: 1e-9
                                          //  Referenced by: '<Root>/Gain'

  real_T Memory_InitialCondition;      // Expression: 0
                                          //  Referenced by: '<Root>/Memory'

  real_T Constant_Value_i;             // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant2'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S10>/Constant3'

  real_T Constant3_Value_p;            // Expression: 0
                                          //  Referenced by: '<S11>/Constant3'

  P_MovingAverage_micromodelv2_T MovingAverage1;// '<Root>/Moving Average'
  P_MovingAverage_micromodelv2_T MovingAverage;// '<Root>/Moving Average'
};

// Real-time Model Data Structure
struct tag_RTM_micromodelv2_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_micromodelv2_T micromodelv2_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_micromodelv2_T micromodelv2_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_micromodelv2_T micromodelv2_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void micromodelv2_initialize(void);
  extern void micromodelv2_step(void);
  extern void micromodelv2_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_micromodelv2_T *const micromodelv2_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'micromodelv2'
//  '<S1>'   : 'micromodelv2/Blank Message'
//  '<S2>'   : 'micromodelv2/Blank Message1'
//  '<S3>'   : 'micromodelv2/Blank Message2'
//  '<S4>'   : 'micromodelv2/Blank Message3'
//  '<S5>'   : 'micromodelv2/MATLAB Function1'
//  '<S6>'   : 'micromodelv2/Publish'
//  '<S7>'   : 'micromodelv2/Publish1'
//  '<S8>'   : 'micromodelv2/Publish2'
//  '<S9>'   : 'micromodelv2/Publish3'
//  '<S10>'  : 'micromodelv2/Publisher'
//  '<S11>'  : 'micromodelv2/Publisher1'
//  '<S12>'  : 'micromodelv2/Subscribe'
//  '<S13>'  : 'micromodelv2/Subscribe2'
//  '<S14>'  : 'micromodelv2/Subscribe3'
//  '<S15>'  : 'micromodelv2/Publisher/Blank Message3'
//  '<S16>'  : 'micromodelv2/Publisher/Publish3'
//  '<S17>'  : 'micromodelv2/Publisher1/Blank Message3'
//  '<S18>'  : 'micromodelv2/Publisher1/Publish3'
//  '<S19>'  : 'micromodelv2/Subscribe/Enabled Subsystem'
//  '<S20>'  : 'micromodelv2/Subscribe2/Enabled Subsystem'
//  '<S21>'  : 'micromodelv2/Subscribe3/Enabled Subsystem'

#endif                                 // RTW_HEADER_micromodelv2_h_

//
// File trailer for generated code.
//
// [EOF]
//
