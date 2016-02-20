/*
 * norminv.c
 *
 * Code generation for function 'norminv'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "norminv.h"
#include "erfcinv.h"

/* Function Definitions */
real_T norminv(real_T p)
{
  real_T x;
  if ((p >= 0.0) && (p <= 1.0)) {
    x = -1.4142135623730951 * erfcinv(2.0 * p);
  } else {
    x = rtNaN;
  }

  return x;
}

/* End of code generation (norminv.c) */
