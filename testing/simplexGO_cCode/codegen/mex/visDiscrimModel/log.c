/*
 * log.c
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "log.h"

/* Function Definitions */
void b_log(emxArray_real_T *x)
{
  int32_T i18;
  int32_T k;
  i18 = x->size[0] * x->size[1];
  for (k = 0; k < i18; k++) {
    x->data[k] = muDoubleScalarLog(x->data[k]);
  }
}

/* End of code generation (log.c) */
