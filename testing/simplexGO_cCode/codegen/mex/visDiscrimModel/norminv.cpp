/*
 * norminv.cpp
 *
 * Code generation for function 'norminv'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "norminv.h"
#include "erfcinv.h"

/* Variable Definitions */
static emlrtRSInfo ce_emlrtRSI = { 41, "norminv",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\stats\\eml\\norminv.m" };

/* Function Definitions */
real_T norminv(const emlrtStack *sp, real_T p)
{
  real_T x;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((p >= 0.0) && (p <= 1.0)) {
    st.site = &ce_emlrtRSI;
    x = -1.4142135623730951 * erfcinv(&st, 2.0 * p);
  } else {
    x = rtNaN;
  }

  return x;
}

/* End of code generation (norminv.cpp) */
