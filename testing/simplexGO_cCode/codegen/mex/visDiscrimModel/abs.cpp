/*
 * abs.cpp
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "abs.h"
#include "visDiscrimModel_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo o_emlrtRTEI = { 1, 14, "abs",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" };

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv1[2];
  int32_T i4;
  int32_T k;
  for (i4 = 0; i4 < 2; i4++) {
    uv1[i4] = (uint32_T)x->size[i4];
  }

  i4 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv1[0];
  y->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i4, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  i4 = x->size[0] * x->size[1];
  for (k = 0; k < i4; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void c_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv3[2];
  int32_T k;
  for (k = 0; k < 2; k++) {
    uv3[k] = (uint32_T)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)uv3[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.cpp) */
