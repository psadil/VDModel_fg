/*
 * _coder_visDiscrimModel_mex.c
 *
 * Code generation for function '_coder_visDiscrimModel_mex'
 *
 */

/* Include files */
#include "visDiscrimModel.h"
#include "_coder_visDiscrimModel_mex.h"
#include "visDiscrimModel_terminate.h"
#include "_coder_visDiscrimModel_api.h"
#include "visDiscrimModel_initialize.h"
#include "visDiscrimModel_data.h"

/* Function Declarations */
static void visDiscrimModel_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[1]);

/* Function Definitions */
static void visDiscrimModel_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[1])
{
  int32_T n;
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 1, 4, 15, "visDiscrimModel");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "visDiscrimModel");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
    }
  }

  /* Call the function. */
  visDiscrimModel_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  visDiscrimModel_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(visDiscrimModel_atexit);

  /* Module initialization. */
  visDiscrimModel_initialize();

  /* Dispatch the entry-point. */
  visDiscrimModel_mexFunction(nlhs, plhs, nrhs, prhs);
}

/* End of code generation (_coder_visDiscrimModel_mex.c) */
