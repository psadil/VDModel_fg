/*
 * repmat.cpp
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "repmat.h"
#include "eml_int_forloop_overflow_check.h"
#include "visDiscrimModel_emxutil.h"
#include "visDiscrimModel_data.h"

/* Variable Definitions */
static emlrtRSInfo tb_emlrtRSI = { 13, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo pc_emlrtRSI = { 125, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo rd_emlrtRSI = { 64, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo sd_emlrtRSI = { 82, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo td_emlrtRSI = { 84, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo ud_emlrtRSI = { 87, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo vd_emlrtRSI = { 89, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtMCInfo emlrtMCI = { 32, 5, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 1, 14, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 56, 15, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 41, 19, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtDCInfo b_emlrtDCI = { 16, 14, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",
  4 };

static emlrtRSInfo he_emlrtRSI = { 32, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo ie_emlrtRSI = { 152, "repmat",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

/* Function Declarations */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    absNumerator /= absDenominator;
    if (quotientNeedsNegation) {
      quotient = -(int32_T)absNumerator;
    } else {
      quotient = (int32_T)absNumerator;
    }
  }

  return quotient;
}

static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void b_repmat(const emlrtStack *sp, const emxArray_real_T *a, const real_T
              varargin_1[3], emxArray_real_T *b)
{
  int32_T k;
  int32_T outsize[3];
  static const char_T cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  char_T u[15];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 15 };

  const mxArray *m0;
  boolean_T p;
  int32_T b_b;
  boolean_T b2;
  int32_T ib;
  int32_T ia;
  int32_T ibtmp;
  int32_T q;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  eml_assert_valid_size_arg(&st, varargin_1);
  for (k = 0; k < 3; k++) {
    emlrtNonNegativeCheckR2012b(varargin_1[k], (emlrtDCInfo *)&b_emlrtDCI, sp);
  }

  outsize[2] = a->size[2];
  if (outsize[2] == a->size[2]) {
  } else {
    for (k = 0; k < 15; k++) {
      u[k] = cv1[k];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(sp, 15, m0, &u[0]);
    emlrtAssign(&y, m0);
    st.site = &he_emlrtRSI;
    error(&st, y, (emlrtMCInfo *)&emlrtMCI);
  }

  k = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = (int32_T)varargin_1[0];
  b->size[1] = (int32_T)varargin_1[1];
  b->size[2] = a->size[2];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  if (!(a->size[2] == 0)) {
    if ((int32_T)varargin_1[0] == 0) {
      p = true;
    } else if ((int32_T)varargin_1[1] == 0) {
      p = true;
    } else if (outsize[2] == 0) {
      p = true;
    } else {
      p = false;
    }

    if (!p) {
      for (k = 0; k < 3; k++) {
        outsize[k] = 1;
      }

      for (k = 0; k < 2; k++) {
        outsize[k + 1] = outsize[k] * b->size[k];
      }

      k = a->size[2];
      b_b = (int32_T)varargin_1[0] * (int32_T)varargin_1[1] * k;
      st.site = &pc_emlrtRSI;
      if (1 > b_b) {
        b2 = false;
      } else {
        b2 = (b_b > 2147483646);
      }

      if (b2) {
        b_st.site = &wb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (ib = 0; ib + 1 <= b_b; ib++) {
        ia = 0;
        ibtmp = ib;
        for (k = 2; k > -1; k += -1) {
          st.site = &ie_emlrtRSI;
          q = div_s32(&st, div_s32(&st, ibtmp, outsize[k]) * outsize[k],
                      outsize[k]);
          st.site = &ie_emlrtRSI;
          ia = (ia + q) - div_s32(&st, q, a->size[k]) * a->size[k];
          st.site = &ie_emlrtRSI;
          ibtmp -= div_s32(&st, ibtmp, outsize[k]) * outsize[k];
        }

        b->data[ib] = a->data[ia];
      }
    }
  }
}

void c_repmat(const emlrtStack *sp, const emxArray_real_T *a, const real_T
              varargin_1[3], emxArray_real_T *b)
{
  int32_T k;
  int32_T outsize_idx_0;
  static const char_T cv2[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  char_T u[15];
  const mxArray *y;
  static const int32_T iv1[2] = { 1, 15 };

  const mxArray *m1;
  int32_T outsize_idx_1;
  char_T b_u[15];
  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 15 };

  boolean_T p;
  int32_T nrows;
  int32_T ncols;
  int32_T ntilecols;
  int32_T b_k;
  int32_T iv3[3];
  boolean_T b7;
  int32_T iacol;
  int32_T ibmat;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  eml_assert_valid_size_arg(&st, varargin_1);
  for (k = 0; k < 3; k++) {
    emlrtNonNegativeCheckR2012b(varargin_1[k], (emlrtDCInfo *)&b_emlrtDCI, sp);
  }

  outsize_idx_0 = a->size[0];
  if (outsize_idx_0 == a->size[0]) {
  } else {
    for (k = 0; k < 15; k++) {
      u[k] = cv2[k];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 15, m1, &u[0]);
    emlrtAssign(&y, m1);
    st.site = &he_emlrtRSI;
    error(&st, y, (emlrtMCInfo *)&emlrtMCI);
  }

  outsize_idx_1 = a->size[1];
  if (outsize_idx_1 == a->size[1]) {
  } else {
    for (k = 0; k < 15; k++) {
      b_u[k] = cv2[k];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 15, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    st.site = &he_emlrtRSI;
    error(&st, b_y, (emlrtMCInfo *)&emlrtMCI);
  }

  k = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = a->size[0];
  b->size[1] = a->size[1];
  b->size[2] = (int32_T)varargin_1[2];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  if (!((a->size[0] == 0) || (a->size[1] == 0))) {
    if (outsize_idx_0 == 0) {
      p = true;
    } else if (outsize_idx_1 == 0) {
      p = true;
    } else if ((int32_T)varargin_1[2] == 0) {
      p = true;
    } else {
      p = false;
    }

    if (!p) {
      nrows = a->size[0];
      ncols = a->size[1];
      st.site = &rd_emlrtRSI;
      ntilecols = 1;
      b_k = 3;
      while ((b_k > 2) && ((int32_T)varargin_1[2] == 1)) {
        b_k = 2;
      }

      for (k = 2; k <= b_k; k++) {
        iv3[0] = 1;
        iv3[1] = 1;
        iv3[2] = (int32_T)varargin_1[2];
        ntilecols *= iv3[k - 1];
      }

      st.site = &sd_emlrtRSI;
      if (1 > ntilecols) {
        b7 = false;
      } else {
        b7 = (ntilecols > 2147483646);
      }

      if (b7) {
        b_st.site = &wb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (outsize_idx_0 = 1; outsize_idx_0 <= ntilecols; outsize_idx_0++) {
        outsize_idx_1 = (outsize_idx_0 - 1) * (nrows * ncols) - 1;
        st.site = &td_emlrtRSI;
        if (ncols > 2147483646) {
          b_st.site = &wb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (k = 0; k + 1 <= ncols; k++) {
          iacol = k * nrows;
          ibmat = outsize_idx_1 + k * nrows;
          st.site = &ud_emlrtRSI;
          st.site = &vd_emlrtRSI;
          if (nrows > 2147483646) {
            b_st.site = &wb_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }

          for (b_k = 1; b_k <= nrows; b_k++) {
            b->data[ibmat + b_k] = a->data[(iacol + b_k) - 1];
          }
        }
      }
    }
  }
}

void eml_assert_valid_size_arg(const emlrtStack *sp, const real_T varargin_1[3])
{
  int32_T k;
  int32_T exitg2;
  boolean_T p;
  boolean_T guard1 = false;
  int32_T exitg1;
  real_T n;
  k = 0;
  do {
    exitg2 = 0;
    if (k < 3) {
      if ((varargin_1[k] != muDoubleScalarFloor(varargin_1[k])) ||
          muDoubleScalarIsInf(varargin_1[k])) {
        p = false;
        exitg2 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  guard1 = false;
  if (p) {
    k = 0;
    do {
      exitg1 = 0;
      if (k < 3) {
        if ((-2.147483648E+9 > varargin_1[k]) || (2.147483647E+9 < varargin_1[k]))
        {
          p = false;
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &ub_emlrtRTEI,
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  n = 1.0;
  for (k = 0; k < 3; k++) {
    if (varargin_1[k] <= 0.0) {
      n = 0.0;
    } else {
      n *= varargin_1[k];
    }
  }

  if (2.147483647E+9 >= n) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &tb_emlrtRTEI, "Coder:MATLAB:pmaxsize", 0);
  }
}

void repmat(const emlrtStack *sp, const real_T varargin_1[6], emxArray_real_T *b)
{
  int32_T k;
  int32_T exitg1;
  boolean_T p;
  real_T n;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tb_emlrtRSI;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 6) {
      if (varargin_1[k] != varargin_1[k]) {
        p = false;
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &ub_emlrtRTEI,
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  n = 1.0;
  for (k = 0; k < 6; k++) {
    if (varargin_1[k] <= 0.0) {
      n = 0.0;
    } else {
      n *= varargin_1[k];
    }
  }

  if (2.147483647E+9 >= n) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &tb_emlrtRTEI, "Coder:MATLAB:pmaxsize", 0);
  }

  k = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size[5];
  b->size[0] = (int32_T)varargin_1[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  k = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size[5];
  b->size[1] = (int32_T)varargin_1[1];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  k = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size[5];
  b->size[2] = (int32_T)varargin_1[2];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  k = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size[5];
  b->size[3] = (int32_T)varargin_1[3];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  k = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size[5];
  b->size[4] = (int32_T)varargin_1[4];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  k = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size[5];
  b->size[5] = (int32_T)varargin_1[5];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1] * (int32_T)
    varargin_1[2] * (int32_T)varargin_1[3] * (int32_T)varargin_1[4] * (int32_T)
    varargin_1[5];
  for (k = 0; k < loop_ub; k++) {
    b->data[k] = 0.5;
  }
}

/* End of code generation (repmat.cpp) */
