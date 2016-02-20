/*
 * sum.cpp
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "sum.h"
#include "combine_vector_elements.h"
#include "isequal.h"
#include "eml_int_forloop_overflow_check.h"
#include "visDiscrimModel_emxutil.h"
#include "visDiscrimModel_data.h"

/* Variable Definitions */
static emlrtRSInfo fc_emlrtRSI = { 13, "sum",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo gc_emlrtRSI = { 46, "sumprod",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRSInfo hd_emlrtRSI = { 45, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRSInfo id_emlrtRSI = { 47, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRSInfo jd_emlrtRSI = { 51, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 1, 14, "sum",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo bc_emlrtRTEI = { 19, 23, "sumprod",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRTEInfo cc_emlrtRTEI = { 39, 9, "sumprod",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

/* Function Definitions */
void b_sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T sz[3];
  int32_T vlen;
  int32_T k;
  int32_T vstride;
  int32_T iy;
  int32_T ixstart;
  boolean_T b5;
  int32_T j;
  int32_T ix;
  real_T s;
  boolean_T b6;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &gc_emlrtRSI;
  for (vlen = 0; vlen < 3; vlen++) {
    sz[vlen] = (uint32_T)x->size[vlen];
  }

  vlen = y->size[0] * y->size[1];
  y->size[0] = (int32_T)sz[0];
  y->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)y, vlen, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0) || (x->size[2] == 0)) {
    vlen = y->size[0] * y->size[1];
    y->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)y, vlen, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    vlen = y->size[0] * y->size[1];
    y->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)y, vlen, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    k = (int32_T)sz[0] * (int32_T)sz[1];
    for (vlen = 0; vlen < k; vlen++) {
      y->data[vlen] = 0.0;
    }
  } else {
    vlen = x->size[2];
    k = 3;
    while ((k > 2) && (x->size[2] == 1)) {
      k = 2;
    }

    if (3 > k) {
      vstride = x->size[0] * x->size[1] * x->size[2];
    } else {
      vstride = 1;
      for (k = 0; k < 2; k++) {
        vstride *= x->size[k];
      }
    }

    iy = -1;
    c_st.site = &hd_emlrtRSI;
    ixstart = -1;
    c_st.site = &id_emlrtRSI;
    if (1 > vstride) {
      b5 = false;
    } else {
      b5 = (vstride > 2147483646);
    }

    if (b5) {
      d_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (j = 1; j <= vstride; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      c_st.site = &jd_emlrtRSI;
      if (2 > vlen) {
        b6 = false;
      } else {
        b6 = (vlen > 2147483646);
      }

      if (b6) {
        d_st.site = &wb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (k = 2; k <= vlen; k++) {
        ix += vstride;
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

void c_sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T overflow;
  boolean_T p;
  int32_T k;
  int32_T exitg1;
  uint32_T sz[2];
  int32_T ixstart;
  int32_T vlen;
  int32_T ix;
  int32_T iy;
  int32_T i;
  real_T s;
  boolean_T b8;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (((x->size[0] == 1) && (x->size[1] == 1)) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &bc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  overflow = false;
  p = false;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 2) {
      if (x->size[k] != 0) {
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!p) {
  } else {
    overflow = true;
  }

  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &cc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b_st.site = &gc_emlrtRSI;
  for (k = 0; k < 2; k++) {
    sz[k] = (uint32_T)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    k = y->size[0] * y->size[1];
    y->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    ixstart = (int32_T)sz[1];
    for (k = 0; k < ixstart; k++) {
      y->data[k] = 0.0;
    }
  } else {
    vlen = x->size[0];
    ix = -1;
    iy = -1;
    c_st.site = &hd_emlrtRSI;
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      d_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (i = 1; i <= x->size[1]; i++) {
      ixstart = ix + 1;
      ix++;
      s = x->data[ixstart];
      c_st.site = &jd_emlrtRSI;
      if (2 > vlen) {
        b8 = false;
      } else {
        b8 = (vlen > 2147483646);
      }

      if (b8) {
        d_st.site = &wb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (k = 2; k <= vlen; k++) {
        ix++;
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

real_T d_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  boolean_T b9;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    b9 = true;
  } else {
    b9 = false;
  }

  if (b9) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &bc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b9 = !b_isequal(x);
  if (b9) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &cc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b_st.site = &gc_emlrtRSI;
  return combine_vector_elements(&b_st, x);
}

real_T e_sum(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  real_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T k;
  int32_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &bc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  overflow = false;
  p = false;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 2) {
      if (x->size[k] != 0) {
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!p) {
  } else {
    overflow = true;
  }

  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &cc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b_st.site = &gc_emlrtRSI;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    c_st.site = &hc_emlrtRSI;
    if (2 > x->size[1]) {
      overflow = false;
    } else {
      overflow = (x->size[1] > 2147483646);
    }

    if (overflow) {
      d_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 2; k <= x->size[1]; k++) {
      y += (real_T)x->data[k - 1];
    }
  }

  return y;
}

real_T sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &bc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  overflow = !isequal(x);
  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &cc_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b_st.site = &gc_emlrtRSI;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    c_st.site = &hc_emlrtRSI;
    if (2 > x->size[0]) {
      overflow = false;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      d_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 2; k <= x->size[0]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

/* End of code generation (sum.cpp) */
