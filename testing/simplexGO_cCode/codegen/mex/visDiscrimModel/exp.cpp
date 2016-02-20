/*
 * exp.cpp
 *
 * Code generation for function 'exp'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "exp.h"

/* Function Definitions */
void b_exp(emxArray_real_T *x)
{
  int32_T i23;
  int32_T k;
  i23 = x->size[0] * x->size[1];
  for (k = 0; k < i23; k++) {
    x->data[k] = muDoubleScalarExp(x->data[k]);
  }
}

/* End of code generation (exp.cpp) */
