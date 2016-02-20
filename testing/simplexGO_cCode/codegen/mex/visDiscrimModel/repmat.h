/*
 * repmat.h
 *
 * Code generation for function 'repmat'
 *
 */

#ifndef __REPMAT_H__
#define __REPMAT_H__

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
extern void b_repmat(const emxArray_real_T *a, const real_T varargin_1[3],
                     emxArray_real_T *b);
extern void c_repmat(const emxArray_real_T *a, const real_T varargin_1[3],
                     emxArray_real_T *b);
extern void repmat(const real_T varargin_1[6], emxArray_real_T *b);

#endif

/* End of code generation (repmat.h) */
