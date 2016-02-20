/*
 * any.cpp
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "visDiscrimModel_data.h"

/* Variable Definitions */
static emlrtRSInfo dc_emlrtRSI = { 12, "any",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

/* Function Definitions */
boolean_T any(const emlrtStack *sp, const emxArray_real_T *x)
{
  boolean_T y;
  boolean_T overflow;
  int32_T ix;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = !isequal(x);
  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &yb_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_specialEmpty", 0);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &ac_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  y = false;
  b_st.site = &ec_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = false;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &wb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if ((x->data[ix] == 0.0) || muDoubleScalarIsNaN(x->data[ix])) {
      overflow = true;
    } else {
      overflow = false;
    }

    if (!overflow) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

boolean_T b_any(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T ix;
  int32_T exitg2;
  int32_T i1;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = false;
  p = false;
  ix = 0;
  do {
    exitg2 = 0;
    if (ix < 2) {
      if (ix + 1 <= 1) {
        i1 = x->size[0];
      } else {
        i1 = 1;
      }

      if (i1 != 0) {
        exitg2 = 1;
      } else {
        ix++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (!p) {
  } else {
    overflow = true;
  }

  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &yb_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_specialEmpty", 0);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &ac_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  y = false;
  b_st.site = &ec_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = false;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &wb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[0])) {
    overflow = !x->data[ix - 1];
    if (!overflow) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

boolean_T c_any(boolean_T x)
{
  return !!x;
}

/* End of code generation (any.cpp) */
