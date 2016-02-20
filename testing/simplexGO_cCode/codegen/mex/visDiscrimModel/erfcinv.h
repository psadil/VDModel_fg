/*
 * erfcinv.h
 *
 * Code generation for function 'erfcinv'
 *
 */

#ifndef __ERFCINV_H__
#define __ERFCINV_H__

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
extern real_T erfcinv(real_T y);

#ifdef __WATCOMC__

#pragma aux erfcinv value [8087];

#endif
#endif

/* End of code generation (erfcinv.h) */
