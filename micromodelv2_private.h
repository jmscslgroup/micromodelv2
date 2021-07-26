//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: micromodelv2_private.h
//
// Code generated for Simulink model 'micromodelv2'.
//
// Model version                  : 1.83
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Mon Jul 26 09:18:19 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_micromodelv2_private_h_
#define RTW_HEADER_micromodelv2_private_h_
#include "rtwtypes.h"
#include "micromodelv2.h"

extern void micromodelv2_MovingAverage_Init(DW_MovingAverage_micromodelv2_T
  *localDW, P_MovingAverage_micromodelv2_T *localP);
extern void micromodelv2_MovingAverage(real_T rtu_0,
  B_MovingAverage_micromodelv2_T *localB, DW_MovingAverage_micromodelv2_T
  *localDW, P_MovingAverage_micromodelv2_T *localP);
extern void micromodelv2_MovingAverage_Term(DW_MovingAverage_micromodelv2_T
  *localDW);

#endif                                 // RTW_HEADER_micromodelv2_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
