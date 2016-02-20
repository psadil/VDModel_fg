/*
 * combine_vector_elements.cpp
 *
 * Code generation for function 'combine_vector_elements'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "combine_vector_elements.h"
#include "eml_int_forloop_overflow_check.h"
#include "visDiscrimModel_data.h"

/* Function Definitions */
real_T combine_vector_elements(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &hc_emlrtRSI;
    if (2 > x->size[1]) {
      overflow = false;
    } else {
      overflow = (x->size[1] > 2147483646);
    }

    if (overflow) {
      b_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 2; k <= x->size[1]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

/* End of code generation (combine_vector_elements.cpp) */
