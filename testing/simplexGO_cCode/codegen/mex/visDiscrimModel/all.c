/*
 * all.c
 *
 * Code generation for function 'all'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "all.h"

/* Function Definitions */
boolean_T all(const emxArray_real_T *x)
{
  boolean_T y;
  int32_T ix;
  boolean_T exitg1;
  y = true;
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

/* End of code generation (all.c) */
