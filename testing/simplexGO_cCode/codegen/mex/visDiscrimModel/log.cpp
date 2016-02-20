/*
 * log.cpp
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "log.h"
#include "eml_error.h"
#include "visDiscrimModel_data.h"

/* Function Definitions */
void b_log(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T i24;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i24 = x->size[0] * x->size[1];
  for (k = 0; k < i24; k++) {
    if (x->data[k] < 0.0) {
      st.site = &xd_emlrtRSI;
      d_eml_error(&st);
    }
  }

  i24 = x->size[0] * x->size[1];
  for (k = 0; k < i24; k++) {
    x->data[k] = muDoubleScalarLog(x->data[k]);
  }
}

/* End of code generation (log.cpp) */
