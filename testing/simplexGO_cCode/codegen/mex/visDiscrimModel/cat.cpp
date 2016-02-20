/*
 * cat.cpp
 *
 * Code generation for function 'cat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "cat.h"
#include "eml_error.h"
#include "eml_int_forloop_overflow_check.h"
#include "visDiscrimModel_emxutil.h"
#include "visDiscrimModel_data.h"

/* Variable Definitions */
static emlrtRSInfo kc_emlrtRSI = { 29, "cat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" };

static emlrtRSInfo lc_emlrtRSI = { 58, "cat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" };

static emlrtRTEInfo h_emlrtRTEI = { 1, 14, "cat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 31, 23, "cat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" };

/* Function Definitions */
void cat(const emlrtStack *sp, const emxArray_real_T *varargin_1, const
         emxArray_real_T *varargin_2, const emxArray_real_T *varargin_3,
         emxArray_real_T *y)
{
  uint32_T sz1[2];
  real_T ysize[2];
  int32_T iy;
  int32_T exitg3;
  boolean_T overflow;
  int32_T exitg2;
  int32_T exitg1;
  int32_T i;
  int32_T ix;
  int32_T l;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  sz1[0] = (uint32_T)varargin_1->size[0];
  sz1[1] = 1U;
  for (iy = 0; iy < 2; iy++) {
    ysize[iy] = sz1[iy];
  }

  ysize[0] += (real_T)varargin_2->size[0];
  ysize[0] = (real_T)(uint32_T)ysize[0] + (real_T)varargin_3->size[0];
  iy = y->size[0] * y->size[1];
  y->size[0] = (int32_T)ysize[0];
  y->size[1] = (int32_T)ysize[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  if (varargin_1->size[0] == 0) {
    st.site = &kc_emlrtRSI;
    eml_error(&st);
  }

  iy = 0;
  do {
    exitg3 = 0;
    if (iy < 2) {
      if ((iy + 1 != 1) && (y->size[1] != 1)) {
        overflow = false;
        exitg3 = 1;
      } else {
        iy++;
      }
    } else {
      overflow = true;
      exitg3 = 1;
    }
  } while (exitg3 == 0);

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &dc_emlrtRTEI,
      "Coder:MATLAB:catenate_dimensionMismatch", 0);
  }

  if (varargin_2->size[0] == 0) {
    st.site = &kc_emlrtRSI;
    eml_error(&st);
  }

  iy = 0;
  do {
    exitg2 = 0;
    if (iy < 2) {
      if ((iy + 1 != 1) && (y->size[1] != 1)) {
        overflow = false;
        exitg2 = 1;
      } else {
        iy++;
      }
    } else {
      overflow = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &dc_emlrtRTEI,
      "Coder:MATLAB:catenate_dimensionMismatch", 0);
  }

  if (varargin_3->size[0] == 0) {
    st.site = &kc_emlrtRSI;
    eml_error(&st);
  }

  iy = 0;
  do {
    exitg1 = 0;
    if (iy < 2) {
      if ((iy + 1 != 1) && (y->size[1] != 1)) {
        overflow = false;
        exitg1 = 1;
      } else {
        iy++;
      }
    } else {
      overflow = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &dc_emlrtRTEI,
      "Coder:MATLAB:catenate_dimensionMismatch", 0);
  }

  ysize[1] = (int32_T)ysize[1];
  iy = 0;
  for (i = 0; i < (int32_T)ysize[1]; i++) {
    ix = i * varargin_1->size[0];
    st.site = &lc_emlrtRSI;
    overflow = (varargin_1->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (l = 1; l <= varargin_1->size[0]; l++) {
      y->data[iy] = varargin_1->data[ix];
      ix++;
      iy++;
    }

    ix = i * varargin_2->size[0];
    st.site = &lc_emlrtRSI;
    overflow = (varargin_2->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (l = 1; l <= varargin_2->size[0]; l++) {
      y->data[iy] = varargin_2->data[ix];
      ix++;
      iy++;
    }

    ix = i * varargin_3->size[0];
    st.site = &lc_emlrtRSI;
    overflow = (varargin_3->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (l = 1; l <= varargin_3->size[0]; l++) {
      y->data[iy] = varargin_3->data[ix];
      ix++;
      iy++;
    }
  }
}

/* End of code generation (cat.cpp) */
