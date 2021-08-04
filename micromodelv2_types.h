//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: micromodelv2_types.h
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
#ifndef RTW_HEADER_micromodelv2_types_h_
#define RTW_HEADER_micromodelv2_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_micromodelv2_geometry_msgs_Vector3
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
struct SL_Bus_micromodelv2_geometry_msgs_Twist
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_micromodelv2_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_micromodelv2_geometry_msgs_Vector3 Angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_std_msgs_UInt8_
#define DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_std_msgs_UInt8_

// MsgType=std_msgs/UInt8
struct SL_Bus_micromodelv2_std_msgs_UInt8
{
  uint8_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_ros_time_Time_

// MsgType=ros_time/Time
struct SL_Bus_micromodelv2_ros_time_Time
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_micromodelv2_std_msgs_Float64_

// MsgType=std_msgs/Float64
struct SL_Bus_micromodelv2_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef struct_g_dsp_private_ExponentialMovi_T
#define struct_g_dsp_private_ExponentialMovi_T

struct g_dsp_private_ExponentialMovi_T
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  real_T ForgettingFactor;
  real_T pwN;
  real_T pmN;
  real_T plambda;
};

#endif                                // struct_g_dsp_private_ExponentialMovi_T

#ifndef struct_cell_wrap_micromodelv2_T
#define struct_cell_wrap_micromodelv2_T

struct cell_wrap_micromodelv2_T
{
  uint32_T f1[8];
};

#endif                                 // struct_cell_wrap_micromodelv2_T

#ifndef struct_dsp_simulink_MovingAverage_mi_T
#define struct_dsp_simulink_MovingAverage_mi_T

struct dsp_simulink_MovingAverage_mi_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_micromodelv2_T inputVarSize;
  real_T ForgettingFactor;
  g_dsp_private_ExponentialMovi_T *pStatistic;
  int32_T NumChannels;
  g_dsp_private_ExponentialMovi_T _pobj0;
};

#endif                                // struct_dsp_simulink_MovingAverage_mi_T

#ifndef struct_f_robotics_slcore_internal_bl_T
#define struct_f_robotics_slcore_internal_bl_T

struct f_robotics_slcore_internal_bl_T
{
  int32_T __dummy;
};

#endif                                // struct_f_robotics_slcore_internal_bl_T

#ifndef struct_ros_slros_internal_block_Curr_T
#define struct_ros_slros_internal_block_Curr_T

struct ros_slros_internal_block_Curr_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                // struct_ros_slros_internal_block_Curr_T

#ifndef struct_ros_slros_internal_block_GetP_T
#define struct_ros_slros_internal_block_GetP_T

struct ros_slros_internal_block_GetP_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                // struct_ros_slros_internal_block_GetP_T

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_S_T

// Parameters for system: '<Root>/Moving Average'
typedef struct P_MovingAverage_micromodelv2_T_ P_MovingAverage_micromodelv2_T;

// Parameters (default storage)
typedef struct P_micromodelv2_T_ P_micromodelv2_T;

// Forward declaration for rtModel
typedef struct tag_RTM_micromodelv2_T RT_MODEL_micromodelv2_T;

#endif                                 // RTW_HEADER_micromodelv2_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
