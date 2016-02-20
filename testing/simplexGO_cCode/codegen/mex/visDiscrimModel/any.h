/*
 * any.h
 *
 * Code generation for function 'any'
 *
 */

#ifndef __ANY_H__
#define __ANY_H__

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
extern boolean_T any(const emxArray_real_T *x);
extern boolean_T b_any(const emxArray_boolean_T *x);
extern boolean_T c_any(boolean_T x);

#endif

/* End of code generation (any.h) */
