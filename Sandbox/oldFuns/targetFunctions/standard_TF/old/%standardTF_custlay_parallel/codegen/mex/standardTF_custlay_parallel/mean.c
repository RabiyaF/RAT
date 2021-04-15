/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, educational organizations only. Not for
 * government, commercial, or other organizational use.
 *
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "standardTF_custlay_parallel.h"
#include "mean.h"
#include "combine_vector_elements.h"
#include "isequal.h"

/* Variable Definitions */
static emlrtRSInfo vc_emlrtRSI = { 40, /* lineNo */
  "mean",                              /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/lib/matlab/datafun/mean.m"/* pathName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 17,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/lib/matlab/datafun/mean.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/lib/matlab/datafun/mean.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 30,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/lib/matlab/datafun/mean.m"/* pName */
};

/* Function Definitions */
real_T mean(const emlrtStack *sp, const emxArray_real_T *x)
{
  boolean_T b3;
  real_T b_x;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    b3 = true;
  } else {
    b3 = false;
  }

  if (!b3) {
    emlrtErrorWithMessageIdR2012b(sp, &jc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (isequal()) {
    emlrtErrorWithMessageIdR2012b(sp, &kc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
    emlrtErrorWithMessageIdR2012b(sp, &lc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  st.site = &vc_emlrtRSI;
  b_x = combine_vector_elements(&st, x);
  return b_x / (real_T)x->size[1];
}

/* End of code generation (mean.c) */