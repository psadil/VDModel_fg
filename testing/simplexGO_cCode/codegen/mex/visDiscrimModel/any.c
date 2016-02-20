/*
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "any.h"

/* Function Definitions */
boolean_T any(const emxArray_real_T *x)
{
  boolean_T y;
  int32_T ix;
  boolean_T exitg1;
  boolean_T b0;
  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if ((x->data[ix] == 0.0) || muDoubleScalarIsNaN(x->data[ix])) {
      b0 = true;
    } else {
      b0 = false;
    }

    if (!b0) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

boolean_T b_any(const emxArray_boolean_T *x)
{
  boolean_T y;
  int32_T ix;
  boolean_T exitg1;
  boolean_T b1;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[0])) {
    b1 = !x->data[ix - 1];
    if (!b1) {
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

/* End of code generation (any.c) */
