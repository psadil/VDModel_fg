/*
 * rand.h
 *
 * Code generation for function 'rand'
 *
 */

#ifndef __RAND_H__
#define __RAND_H__

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
extern void b_rand(real_T varargin_2, emxArray_real_T *r);
extern real_T c_rand(void);

#ifdef __WATCOMC__

#pragma aux c_rand value [8087];

#endif
#endif

/* End of code generation (rand.h) */
