/*
 * power.cpp
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "power.h"
#include "visDiscrimModel_emxutil.h"
#include "scalexpAlloc.h"

/* Variable Definitions */
static emlrtRSInfo ed_emlrtRSI = { 42, "power",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRSInfo fd_emlrtRSI = { 51, "power",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRSInfo gd_emlrtRSI = { 11, "eml_scalexp_alloc",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_scalexp_alloc.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\coder\\coder\\+coder\\+internal\\scalexpAlloc.p"
};

/* Function Definitions */
void b_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv2[2];
  int32_T i5;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ed_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &fd_emlrtRSI;
  c_st.site = &gd_emlrtRSI;
  for (i5 = 0; i5 < 2; i5++) {
    uv2[i5] = (uint32_T)a->size[i5];
  }

  i5 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv2[0];
  y->size[1] = (int32_T)uv2[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)y, i5, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  if (b_dimagree(y, a)) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &l_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  i5 = (int32_T)uv2[0] * (int32_T)uv2[1];
  for (k = 0; k < i5; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv0[3];
  int32_T i2;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ed_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &fd_emlrtRSI;
  c_st.site = &gd_emlrtRSI;
  for (i2 = 0; i2 < 3; i2++) {
    uv0[i2] = (uint32_T)a->size[i2];
  }

  i2 = y->size[0] * y->size[1] * y->size[2];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  y->size[2] = (int32_T)uv0[2];
  emxEnsureCapacity(&c_st, (emxArray__common *)y, i2, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  if (dimagree(y, a)) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &l_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  i2 = (int32_T)uv0[0] * (int32_T)uv0[1] * (int32_T)uv0[2];
  for (k = 0; k < i2; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.cpp) */
