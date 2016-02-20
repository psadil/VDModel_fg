/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef __SUM_H__
#define __SUM_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "visDiscrimModel_types.h"

/* Function Declarations */
extern void b_sum(const emxArray_real_T *x, emxArray_real_T *y);
extern real_T c_sum(const emxArray_real_T *x);

#ifdef __WATCOMC__

#pragma aux c_sum value [8087];

#endif

extern real_T d_sum(const emxArray_boolean_T *x);

#ifdef __WATCOMC__

#pragma aux d_sum value [8087];

#endif

extern real_T sum(const emxArray_real_T *x);

#ifdef __WATCOMC__

#pragma aux sum value [8087];

#endif
#endif

/* End of code generation (sum.h) */
