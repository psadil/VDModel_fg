/*
 * all.cpp
 *
 * Code generation for function 'all'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "visDiscrimModel_data.h"

/* Variable Definitions */
static emlrtRSInfo yd_emlrtRSI = { 12, "all",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

/* Function Definitions */
boolean_T all(const emlrtStack *sp, const emxArray_real_T *x)
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
  st.site = &yd_emlrtRSI;
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

  y = true;
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
    if (x->data[ix - 1] == 0.0) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

/* End of code generation (all.cpp) */
