/*
 * squeeze.cpp
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "squeeze.h"
#include "eml_int_forloop_overflow_check.h"
#include "visDiscrimModel_emxutil.h"
#include "visDiscrimModel_data.h"

/* Variable Definitions */
static emlrtRSInfo ub_emlrtRSI = { 22, "squeeze",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m"
};

static emlrtRSInfo vb_emlrtRSI = { 52, "squeeze",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 1, 14, "squeeze",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m"
};

/* Function Definitions */
void b_squeeze(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T
               *b)
{
  int32_T k;
  int32_T b_b;
  boolean_T b3;
  int32_T sqsz[4];
  boolean_T b4;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  k = 4;
  while ((k > 2) && (a->size[k - 1] == 1)) {
    k--;
  }

  if (k <= 2) {
    b_b = a->size[1];
    k = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = 1;
    b->size[1] = b_b;
    b->size[2] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                      &c_emlrtRTEI);
    b_b = a->size[1] * a->size[2] * a->size[3];
    st.site = &ub_emlrtRSI;
    if (1 > b_b) {
      b3 = false;
    } else {
      b3 = (b_b > 2147483646);
    }

    if (b3) {
      b_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  } else {
    for (k = 0; k < 4; k++) {
      sqsz[k] = 1;
    }

    k = 0;
    if (a->size[1] != 1) {
      sqsz[0] = a->size[1];
      k = 1;
    }

    if (a->size[2] != 1) {
      sqsz[k] = a->size[2];
      k++;
    }

    if (a->size[3] != 1) {
      sqsz[k] = a->size[3];
    }

    k = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = sqsz[0];
    b->size[1] = sqsz[1];
    b->size[2] = sqsz[2];
    emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                      &c_emlrtRTEI);
    b_b = a->size[1] * a->size[2] * a->size[3];
    st.site = &vb_emlrtRSI;
    if (1 > b_b) {
      b4 = false;
    } else {
      b4 = (b_b > 2147483646);
    }

    if (b4) {
      b_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  }
}

void squeeze(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *b)
{
  int32_T k;
  int32_T b_b;
  boolean_T b0;
  int32_T sqsz[3];
  boolean_T b1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  k = 3;
  while ((k > 2) && (a->size[2] == 1)) {
    k = 2;
  }

  if (k <= 2) {
    k = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = a->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                      &c_emlrtRTEI);
    b_b = a->size[1] * a->size[2];
    st.site = &ub_emlrtRSI;
    if (1 > b_b) {
      b0 = false;
    } else {
      b0 = (b_b > 2147483646);
    }

    if (b0) {
      b_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  } else {
    for (k = 0; k < 3; k++) {
      sqsz[k] = 1;
    }

    k = 0;
    if (a->size[1] != 1) {
      sqsz[0] = a->size[1];
      k = 1;
    }

    if (a->size[2] != 1) {
      sqsz[k] = a->size[2];
    }

    k = b->size[0] * b->size[1];
    b->size[0] = sqsz[0];
    b->size[1] = sqsz[1];
    emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                      &c_emlrtRTEI);
    b_b = a->size[1] * a->size[2];
    st.site = &vb_emlrtRSI;
    if (1 > b_b) {
      b1 = false;
    } else {
      b1 = (b_b > 2147483646);
    }

    if (b1) {
      b_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  }
}

/* End of code generation (squeeze.cpp) */
