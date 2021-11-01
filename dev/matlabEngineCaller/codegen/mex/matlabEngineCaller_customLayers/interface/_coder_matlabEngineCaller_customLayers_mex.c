/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, educational organizations only. Not for
 * government, commercial, or other organizational use.
 *
 * _coder_matlabEngineCaller_customLayers_mex.c
 *
 * Code generation for function '_coder_matlabEngineCaller_customLayers_mex'
 *
 */

/* Include files */
#include "_coder_matlabEngineCaller_customLayers_mex.h"
#include "_coder_matlabEngineCaller_customLayers_api.h"
#include "matlabEngineCaller_customLayers_data.h"
#include "matlabEngineCaller_customLayers_initialize.h"
#include "matlabEngineCaller_customLayers_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void matlabEngineCaller_customLayers_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                                 int32_T nrhs,
                                                 const mxArray *prhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[2];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        31, "matlabEngineCaller_customLayers");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 31,
                        "matlabEngineCaller_customLayers");
  }
  /* Call the function. */
  c_matlabEngineCaller_customLaye(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&matlabEngineCaller_customLayers_atexit);
  /* Module initialization. */
  matlabEngineCaller_customLayers_initialize();
  /* Dispatch the entry-point. */
  matlabEngineCaller_customLayers_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  matlabEngineCaller_customLayers_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_matlabEngineCaller_customLayers_mex.c) */