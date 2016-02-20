/*
 * mean.cpp
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "mean.h"
#include "combine_vector_elements.h"
#include "isequal.h"

/* Variable Definitions */
static emlrtRSInfo ae_emlrtRSI = { 34, "mean",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo ic_emlrtRTEI = { 29, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo jc_emlrtRTEI = { 20, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo kc_emlrtRTEI = { 16, 23, "mean",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

/* Function Definitions */
real_T mean(const emlrtStack *sp, const emxArray_real_T *x)
{
  boolean_T b10;
  real_T b_x;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    b10 = true;
  } else {
    b10 = false;
  }

  if (b10) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &kc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b10 = !b_isequal(x);
  if (b10) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &jc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b10 = !b_isequal(x);
  if (b10) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &ic_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  st.site = &ae_emlrtRSI;
  b_x = combine_vector_elements(&st, x);
  return b_x / (real_T)x->size[1];
}

/* End of code generation (mean.cpp) */
