/*
 * rdivide.h
 *
 * Code generation for function 'rdivide'
 *
 */

#ifndef __RDIVIDE_H__
#define __RDIVIDE_H__

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
extern void b_rdivide(const emxArray_real_T *x, const emxArray_real_T *y,
                      emxArray_real_T *z);
extern void c_rdivide(const emxArray_real_T *y, emxArray_real_T *z);
extern void rdivide(const emxArray_real_T *x, real_T y, emxArray_real_T *z);

#endif

/* End of code generation (rdivide.h) */
