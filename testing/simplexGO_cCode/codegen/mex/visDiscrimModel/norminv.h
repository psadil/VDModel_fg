/*
 * norminv.h
 *
 * Code generation for function 'norminv'
 *
 */

#ifndef __NORMINV_H__
#define __NORMINV_H__

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
extern real_T norminv(real_T p);

#ifdef __WATCOMC__

#pragma aux norminv value [8087];

#endif
#endif

/* End of code generation (norminv.h) */
