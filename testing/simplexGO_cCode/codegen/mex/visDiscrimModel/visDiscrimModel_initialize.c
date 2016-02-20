/*
 * visDiscrimModel_initialize.c
 *
 * Code generation for function 'visDiscrimModel_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "visDiscrimModel_initialize.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "visDiscrimModel_data.h"

/* Function Declarations */
static void visDiscrimModel_once(void);

/* Function Definitions */
static void visDiscrimModel_once(void)
{
  c_eml_rand_mt19937ar_stateful_i();
}

void visDiscrimModel_initialize(void)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, false, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Statistics_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    visDiscrimModel_once();
  }
}

/* End of code generation (visDiscrimModel_initialize.c) */
