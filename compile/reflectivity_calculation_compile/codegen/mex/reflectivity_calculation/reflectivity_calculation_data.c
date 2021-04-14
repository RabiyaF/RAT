/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, educational organizations only. Not for
 * government, commercial, or other organizational use.
 *
 * reflectivity_calculation_data.c
 *
 * Code generation for function 'reflectivity_calculation_data'
 *
 */

/* Include files */
#include "reflectivity_calculation_data.h"
#include "reflectivity_calculation.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131594U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "reflectivity_calculation",          /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo i_emlrtRSI = { 9,          /* lineNo */
  "standardTF_stanlay_single",         /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_single.m"/* pathName */
};

emlrtRSInfo j_emlrtRSI = { 17,         /* lineNo */
  "standardTF_stanlay_single",         /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_single.m"/* pathName */
};

emlrtRSInfo o_emlrtRSI = { 63,         /* lineNo */
  "standardTF_layers_core",            /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pathName */
};

emlrtRSInfo p_emlrtRSI = { 74,         /* lineNo */
  "standardTF_layers_core",            /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pathName */
};

emlrtRSInfo q_emlrtRSI = { 81,         /* lineNo */
  "standardTF_layers_core",            /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pathName */
};

emlrtRSInfo r_emlrtRSI = { 87,         /* lineNo */
  "standardTF_layers_core",            /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pathName */
};

emlrtRSInfo s_emlrtRSI = { 91,         /* lineNo */
  "standardTF_layers_core",            /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pathName */
};

emlrtRSInfo t_emlrtRSI = { 94,         /* lineNo */
  "standardTF_layers_core",            /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pathName */
};

emlrtRSInfo u_emlrtRSI = { 97,         /* lineNo */
  "standardTF_layers_core",            /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 217,       /* lineNo */
  "charcmp",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/strcmp.m"/* pathName */
};

emlrtRSInfo db_emlrtRSI = { 218,       /* lineNo */
  "charcmp",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/strcmp.m"/* pathName */
};

emlrtRSInfo eb_emlrtRSI = { 16,        /* lineNo */
  "lower",                             /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/strfun/lower.m"/* pathName */
};

emlrtRSInfo fb_emlrtRSI = { 10,        /* lineNo */
  "eml_string_transform",              /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/strfun/eml_string_transform.m"/* pathName */
};

emlrtRSInfo hb_emlrtRSI = { 22,        /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 102,       /* lineNo */
  "cat_impl",                          /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

emlrtRSInfo jb_emlrtRSI = { 12,        /* lineNo */
  "makeSLDProfiles",                   /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/makeSLDProfiles/makeSLDProfiles.m"/* pathName */
};

emlrtRSInfo yb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo ac_emlrtRSI = { 45,        /* lineNo */
  "mpower",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 41,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo ec_emlrtRSI = { 139,       /* lineNo */
  "scalar_float_power",                /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

emlrtRSInfo fc_emlrtRSI = { 39,        /* lineNo */
  "asymconvstep",                      /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/makeSLDProfiles/asymconvstep.m"/* pathName */
};

emlrtRSInfo gc_emlrtRSI = { 40,        /* lineNo */
  "asymconvstep",                      /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/makeSLDProfiles/asymconvstep.m"/* pathName */
};

emlrtRSInfo mc_emlrtRSI = { 51,        /* lineNo */
  "scalar_erf",                        /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/specfun/private/eml_erfcore.m"/* pathName */
};

emlrtRSInfo nc_emlrtRSI = { 236,       /* lineNo */
  "scalar_erf_and_erfc",               /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/specfun/private/eml_erfcore.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 238,       /* lineNo */
  "scalar_erf_and_erfc",               /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/specfun/private/eml_erfcore.m"/* pathName */
};

emlrtRSInfo pc_emlrtRSI = { 17,        /* lineNo */
  "log2",                              /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elfun/log2.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 47,        /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 17,        /* lineNo */
  "log2",                              /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+scalar/log2.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 12,        /* lineNo */
  "pow2",                              /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elfun/pow2.m"/* pathName */
};

emlrtRSInfo tc_emlrtRSI = { 49,        /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 12,        /* lineNo */
  "pow2",                              /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/+scalar/pow2.m"/* pathName */
};

emlrtRSInfo xc_emlrtRSI = { 14,        /* lineNo */
  "max",                               /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/datafun/max.m"/* pathName */
};

emlrtRSInfo yc_emlrtRSI = { 44,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

emlrtRSInfo ad_emlrtRSI = { 79,        /* lineNo */
  "maximum",                           /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

emlrtRSInfo ed_emlrtRSI = { 924,       /* lineNo */
  "minOrMaxRealVector",                /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

emlrtRSInfo fd_emlrtRSI = { 992,       /* lineNo */
  "minOrMaxRealVectorKernel",          /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

emlrtRSInfo qd_emlrtRSI = { 41,        /* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo rd_emlrtRSI = { 153,       /* lineNo */
  "eml_find",                          /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo sd_emlrtRSI = { 377,       /* lineNo */
  "find_first_indices",                /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo td_emlrtRSI = { 397,       /* lineNo */
  "find_first_indices",                /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

emlrtRSInfo qe_emlrtRSI = { 33,        /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"/* pathName */
};

emlrtRSInfo we_emlrtRSI = { 27,        /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

emlrtRSInfo if_emlrtRSI = { 17,        /* lineNo */
  "sortLE",                            /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/sortLE.m"/* pathName */
};

emlrtRSInfo jf_emlrtRSI = { 48,        /* lineNo */
  "sortrowsLE",                        /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/sortrowsLE.m"/* pathName */
};

emlrtRSInfo vf_emlrtRSI = { 306,       /* lineNo */
  "eml_float_colon",                   /* fcnName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

emlrtRSInfo xf_emlrtRSI = { 29,        /* lineNo */
  "abeles_single",                     /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/reflectivityCalculations/Abeles/abeles_single.m"/* pathName */
};

emlrtRSInfo yf_emlrtRSI = { 45,        /* lineNo */
  "abeles_single",                     /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/reflectivityCalculations/Abeles/abeles_single.m"/* pathName */
};

emlrtRSInfo fg_emlrtRSI = { 9,         /* lineNo */
  "standardTF_stanlay_paraPoints",     /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraPoints.m"/* pathName */
};

emlrtRSInfo gg_emlrtRSI = { 17,        /* lineNo */
  "standardTF_stanlay_paraPoints",     /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraPoints.m"/* pathName */
};

emlrtRSInfo og_emlrtRSI = { 32,        /* lineNo */
  "abeles_paraPoints",                 /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/reflectivityCalculations/Abeles/abeles_paraPoints.m"/* pathName */
};

emlrtRSInfo pg_emlrtRSI = { 48,        /* lineNo */
  "abeles_paraPoints",                 /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/reflectivityCalculations/Abeles/abeles_paraPoints.m"/* pathName */
};

emlrtRSInfo rg_emlrtRSI = { 9,         /* lineNo */
  "standardTF_stanlay_paraContrasts",  /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"/* pathName */
};

emlrtRSInfo sg_emlrtRSI = { 17,        /* lineNo */
  "standardTF_stanlay_paraContrasts",  /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraContrasts.m"/* pathName */
};

emlrtRSInfo xg_emlrtRSI = { 9,         /* lineNo */
  "standardTF_stanlay_paraAll",        /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraAll.m"/* pathName */
};

emlrtRSInfo yg_emlrtRSI = { 17,        /* lineNo */
  "standardTF_stanlay_paraAll",        /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_stanLay/standardTF_stanlay_paraAll.m"/* pathName */
};

emlrtRSInfo eh_emlrtRSI = { 4,         /* lineNo */
  "standardTF_custLay_reflectivityCalculation",/* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_custLay_reflectivityCalculation.m"/* pathName */
};

emlrtRSInfo mh_emlrtRSI = { 6,         /* lineNo */
  "call_customLayers",                 /* fcnName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_custLay/call_customLayers.m"/* pathName */
};

emlrtDCInfo r_emlrtDCI = { 41,         /* lineNo */
  19,                                  /* colNo */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  1                                    /* checkKind */
};

emlrtBCInfo sb_emlrtBCI = { -1,        /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  19,                                  /* colNo */
  "backs",                             /* aName */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  0                                    /* checkKind */
};

emlrtDCInfo s_emlrtDCI = { 44,         /* lineNo */
  21,                                  /* colNo */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  1                                    /* checkKind */
};

emlrtBCInfo tb_emlrtBCI = { -1,        /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  21,                                  /* colNo */
  "shifts",                            /* aName */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  0                                    /* checkKind */
};

emlrtDCInfo t_emlrtDCI = { 47,         /* lineNo */
  13,                                  /* colNo */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  1                                    /* checkKind */
};

emlrtBCInfo ub_emlrtBCI = { -1,        /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  13,                                  /* colNo */
  "sf",                                /* aName */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  0                                    /* checkKind */
};

emlrtDCInfo u_emlrtDCI = { 50,         /* lineNo */
  15,                                  /* colNo */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  1                                    /* checkKind */
};

emlrtBCInfo vb_emlrtBCI = { -1,        /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  15,                                  /* colNo */
  "nba",                               /* aName */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  0                                    /* checkKind */
};

emlrtDCInfo v_emlrtDCI = { 53,         /* lineNo */
  15,                                  /* colNo */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  1                                    /* checkKind */
};

emlrtBCInfo wb_emlrtBCI = { -1,        /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  15,                                  /* colNo */
  "nbs",                               /* aName */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  0                                    /* checkKind */
};

emlrtDCInfo w_emlrtDCI = { 56,         /* lineNo */
  17,                                  /* colNo */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  1                                    /* checkKind */
};

emlrtBCInfo xb_emlrtBCI = { -1,        /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  17,                                  /* colNo */
  "res",                               /* aName */
  "backSort",                          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/common/backSorts/backSort.m",/* pName */
  0                                    /* checkKind */
};

emlrtRTEInfo db_emlrtRTEI = { 283,     /* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

emlrtRTEInfo hb_emlrtRTEI = { 46,      /* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pName */
};

emlrtRTEInfo lb_emlrtRTEI = { 387,     /* lineNo */
  1,                                   /* colNo */
  "find_first_indices",                /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

emlrtRTEInfo mb_emlrtRTEI = { 20,      /* lineNo */
  15,                                  /* colNo */
  "rdivide_helper",                    /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/eml/+coder/+internal/rdivide_helper.m"/* pName */
};

emlrtRTEInfo qb_emlrtRTEI = { 14,      /* lineNo */
  9,                                   /* colNo */
  "asin",                              /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elfun/asin.m"/* pName */
};

emlrtBCInfo xk_emlrtBCI = { -1,        /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  25,                                  /* colNo */
  "params",                            /* aName */
  "call_customLayers",                 /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_custLay/call_customLayers.m",/* pName */
  0                                    /* checkKind */
};

emlrtRTEInfo ge_emlrtRTEI = { 59,      /* lineNo */
  18,                                  /* colNo */
  "reflectivity_calculation",          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/compile/reflectivity_calculation_compile/reflectivity_calculation.m"/* pName */
};

emlrtRTEInfo he_emlrtRTEI = { 59,      /* lineNo */
  31,                                  /* colNo */
  "reflectivity_calculation",          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/compile/reflectivity_calculation_compile/reflectivity_calculation.m"/* pName */
};

emlrtRTEInfo ie_emlrtRTEI = { 59,      /* lineNo */
  42,                                  /* colNo */
  "reflectivity_calculation",          /* fName */
  "/home/arwel/Documents/RascalDev/RAT/compile/reflectivity_calculation_compile/reflectivity_calculation.m"/* pName */
};

emlrtRTEInfo kf_emlrtRTEI = { 103,     /* lineNo */
  13,                                  /* colNo */
  "standardTF_custLay_reflectivityCalculation",/* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_custLay_reflectivityCalculation.m"/* pName */
};

emlrtRTEInfo nf_emlrtRTEI = { 104,     /* lineNo */
  25,                                  /* colNo */
  "standardTF_custLay_reflectivityCalculation",/* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_custLay_reflectivityCalculation.m"/* pName */
};

emlrtRTEInfo vg_emlrtRTEI = { 76,      /* lineNo */
  5,                                   /* colNo */
  "standardTF_layers_core",            /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pName */
};

emlrtRTEInfo wg_emlrtRTEI = { 74,      /* lineNo */
  5,                                   /* colNo */
  "standardTF_layers_core",            /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pName */
};

emlrtRTEInfo xg_emlrtRTEI = { 87,      /* lineNo */
  1,                                   /* colNo */
  "standardTF_layers_core",            /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pName */
};

emlrtRTEInfo yg_emlrtRTEI = { 74,      /* lineNo */
  18,                                  /* colNo */
  "standardTF_layers_core",            /* fName */
  "/home/arwel/Documents/RascalDev/RAT/targetFunctions/standard_TF/standardTF_layers_core.m"/* pName */
};

emlrtRTEInfo mi_emlrtRTEI = { 153,     /* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

emlrtRTEInfo oi_emlrtRTEI = { 41,      /* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

emlrtRTEInfo wi_emlrtRTEI = { 33,      /* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2020a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

const char_T cv[9] = { 'c', 'o', 'n', 't', 'r', 'a', 's', 't', 's' };

covrtInstance emlrtCoverageInstance;

/* End of code generation (reflectivity_calculation_data.c) */