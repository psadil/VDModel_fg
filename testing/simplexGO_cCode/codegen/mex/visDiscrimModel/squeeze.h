/*
 * squeeze.h
 *
 * Code generation for function 'squeeze'
 *
 */

#ifndef __SQUEEZE_H__
#define __SQUEEZE_H__

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
extern void b_squeeze(const emxArray_real_T *a, emxArray_real_T *b);
extern void squeeze(const emxArray_real_T *a, emxArray_real_T *b);

#endif

/* End of code generation (squeeze.h) */
