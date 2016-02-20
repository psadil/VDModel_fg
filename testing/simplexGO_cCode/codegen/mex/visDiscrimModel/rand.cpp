/*
 * rand.cpp
 *
 * Code generation for function 'rand'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "rand.h"

/* Function Definitions */
real_T b_rand()
{
  real_T r;
  emlrtRandu(&r, 1);
  return r;
}

/* End of code generation (rand.cpp) */
