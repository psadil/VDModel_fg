/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "mean.h"

/* Function Definitions */
real_T mean(const emxArray_real_T *x)
{
  real_T y;
  int32_T k;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    for (k = 2; k <= x->size[1]; k++) {
      y += x->data[k - 1];
    }
  }

  y /= (real_T)x->size[1];
  return y;
}

/* End of code generation (mean.c) */
