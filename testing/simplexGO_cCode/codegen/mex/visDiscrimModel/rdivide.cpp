/*
 * rdivide.cpp
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "rdivide.h"
#include "visDiscrimModel_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo n_emlrtRTEI = { 1, 14, "rdivide",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRTEInfo hc_emlrtRTEI = { 13, 15, "rdivide",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

/* Function Definitions */
void b_rdivide(const emlrtStack *sp, const emxArray_real_T *x, const
               emxArray_real_T *y, emxArray_real_T *z)
{
  uint32_T varargin_1[2];
  int32_T k;
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  int32_T loop_ub;
  for (k = 0; k < 2; k++) {
    varargin_1[k] = (uint32_T)x->size[k];
  }

  for (k = 0; k < 2; k++) {
    varargin_2[k] = (uint32_T)y->size[k];
  }

  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!((int32_T)varargin_1[k] == (int32_T)varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &hc_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  k = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  z->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)z, k, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (k = 0; k < loop_ub; k++) {
    z->data[k] = x->data[k] / y->data[k];
  }
}

void c_rdivide(const emlrtStack *sp, const emxArray_real_T *y, emxArray_real_T
               *z)
{
  int32_T i6;
  int32_T loop_ub;
  i6 = z->size[0] * z->size[1];
  z->size[0] = y->size[0];
  z->size[1] = y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)z, i6, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = y->size[0] * y->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    z->data[i6] = 1.0 / y->data[i6];
  }
}

void rdivide(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
             emxArray_real_T *z)
{
  int32_T i3;
  int32_T loop_ub;
  i3 = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  z->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)z, i3, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    z->data[i3] = x->data[i3] / y;
  }
}

/* End of code generation (rdivide.cpp) */
