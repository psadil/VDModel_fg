/*
 * sqrt.cpp
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "sqrt.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRSInfo kd_emlrtRSI = { 14, "sqrt",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T i22;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i22 = x->size[0] * x->size[1];
  for (k = 0; k < i22; k++) {
    if (x->data[k] < 0.0) {
      st.site = &kd_emlrtRSI;
      c_eml_error(&st);
    }
  }

  i22 = x->size[0] * x->size[1];
  for (k = 0; k < i22; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

/* End of code generation (sqrt.cpp) */
