/*
 * findWinningNode.cpp
 *
 * Code generation for function 'findWinningNode'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "findWinningNode.h"
#include "visDiscrimModel_emxutil.h"
#include "rdivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "sqrt.h"
#include "sum.h"
#include "power.h"
#include "visDiscrimModel_data.h"

/* Variable Definitions */
static emlrtRSInfo yc_emlrtRSI = { 5, "findWinningNode",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\findWinningNode.m"
};

static emlrtRSInfo ad_emlrtRSI = { 8, "findWinningNode",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\findWinningNode.m"
};

static emlrtRSInfo bd_emlrtRSI = { 18, "findWinningNode",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\findWinningNode.m"
};

static emlrtRSInfo cd_emlrtRSI = { 20, "findWinningNode",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\findWinningNode.m"
};

static emlrtRSInfo dd_emlrtRSI = { 21, "findWinningNode",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\findWinningNode.m"
};

static emlrtRSInfo md_emlrtRSI = { 105, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo od_emlrtRSI = { 18, "min",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo pd_emlrtRSI = { 15, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 1, 43, "findWinningNode",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\findWinningNode.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 5, 1, "findWinningNode",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\findWinningNode.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 8, 1, "findWinningNode",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\findWinningNode.m"
};

static emlrtECInfo emlrtECI = { 3, 5, 20, "findWinningNode",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\findWinningNode.m"
};

/* Function Definitions */
void findWinningNode(const emlrtStack *sp, const emxArray_real_T *weights_child,
                     const emxArray_real_T *inp_mat, real_T nInpDims, real_T
                     *win_row, real_T *win_col, emxArray_real_T *dist_mat)
{
  int32_T b_weights_child[3];
  int32_T itmp;
  int32_T b_inp_mat[3];
  emxArray_real_T *c_weights_child;
  int32_T vstride;
  emxArray_real_T *dist_mat_slices;
  emxArray_real_T *dist_mat_temp;
  uint32_T outsz[2];
  emxArray_real_T *varargin_1;
  int32_T n;
  int32_T ix;
  int32_T iy;
  boolean_T overflow;
  int32_T ixstart;
  int32_T ixstop;
  real_T mtmp;
  boolean_T b_ix;
  int32_T c_ix;
  boolean_T exitg4;
  boolean_T b_ixstart;
  boolean_T exitg3;
  emxArray_real_T *b_varargin_1;
  boolean_T d_ix;
  boolean_T exitg2;
  boolean_T e_ix;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* %% Find winning node */
  for (itmp = 0; itmp < 3; itmp++) {
    b_weights_child[itmp] = weights_child->size[itmp];
  }

  for (itmp = 0; itmp < 3; itmp++) {
    b_inp_mat[itmp] = inp_mat->size[itmp];
  }

  b_emxInit_real_T(sp, &c_weights_child, 3, &i_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(b_weights_child, b_inp_mat, (emlrtECInfo *)&emlrtECI,
    sp);
  itmp = c_weights_child->size[0] * c_weights_child->size[1] *
    c_weights_child->size[2];
  c_weights_child->size[0] = weights_child->size[0];
  c_weights_child->size[1] = weights_child->size[1];
  c_weights_child->size[2] = weights_child->size[2];
  emxEnsureCapacity(sp, (emxArray__common *)c_weights_child, itmp, (int32_T)
                    sizeof(real_T), &i_emlrtRTEI);
  vstride = weights_child->size[0] * weights_child->size[1] *
    weights_child->size[2];
  for (itmp = 0; itmp < vstride; itmp++) {
    c_weights_child->data[itmp] = weights_child->data[itmp] - inp_mat->data[itmp];
  }

  b_emxInit_real_T(sp, &dist_mat_slices, 3, &j_emlrtRTEI, true);
  c_emxInit_real_T(sp, &dist_mat_temp, 2, &k_emlrtRTEI, true);
  st.site = &yc_emlrtRSI;
  power(&st, c_weights_child, dist_mat_slices);

  /*  should not even be squared, according to Rosie's paper */
  /*  First slice of this contains (squared) distances of x-coords, */
  /*  second slice contains (squared) distances of y-coords */
  st.site = &ad_emlrtRSI;
  b_sum(&st, dist_mat_slices, dist_mat_temp);

  /*  Sum across the 2 matrix slices (or slices of all dimensions) to get total distance */
  rdivide(sp, dist_mat_temp, nInpDims, dist_mat);

  /*  Normalise by dividing by num_input_dims */
  /*  dist_mat = sqrt(dist_mat_temp); */
  /*  NEW CODE: finish distance calc with sqrt */
  /*  dist_mat = sqrt(dist_mat); */
  st.site = &bd_emlrtRSI;
  b_sqrt(&st, dist_mat_temp);
  st.site = &cd_emlrtRSI;
  b_st.site = &ld_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  emxFree_real_T(&c_weights_child);
  emxFree_real_T(&dist_mat_slices);
  if (dist_mat_temp->size[0] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &gc_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  for (itmp = 0; itmp < 2; itmp++) {
    outsz[itmp] = (uint32_T)dist_mat_temp->size[itmp];
  }

  c_emxInit_real_T(&c_st, &varargin_1, 2, &i_emlrtRTEI, true);
  itmp = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = (int32_T)outsz[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)varargin_1, itmp, (int32_T)sizeof
                    (real_T), &i_emlrtRTEI);
  n = dist_mat_temp->size[0];
  ix = 0;
  iy = -1;
  d_st.site = &md_emlrtRSI;
  if (1 > dist_mat_temp->size[1]) {
    overflow = false;
  } else {
    overflow = (dist_mat_temp->size[1] > 2147483646);
  }

  if (overflow) {
    e_st.site = &wb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (vstride = 1; vstride <= dist_mat_temp->size[1]; vstride++) {
    d_st.site = &nd_emlrtRSI;
    ixstart = ix;
    ixstop = ix + n;
    mtmp = dist_mat_temp->data[ix];
    if (n > 1) {
      if (muDoubleScalarIsNaN(dist_mat_temp->data[ix])) {
        e_st.site = &uc_emlrtRSI;
        if (ix + 2 > ixstop) {
          b_ix = false;
        } else {
          b_ix = (ixstop > 2147483646);
        }

        if (b_ix) {
          f_st.site = &wb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        c_ix = ix + 1;
        exitg4 = false;
        while ((!exitg4) && (c_ix + 1 <= ixstop)) {
          ixstart = c_ix;
          if (!muDoubleScalarIsNaN(dist_mat_temp->data[c_ix])) {
            mtmp = dist_mat_temp->data[c_ix];
            exitg4 = true;
          } else {
            c_ix++;
          }
        }
      }

      if (ixstart + 1 < ixstop) {
        e_st.site = &tc_emlrtRSI;
        if (ixstart + 2 > ixstop) {
          b_ixstart = false;
        } else {
          b_ixstart = (ixstop > 2147483646);
        }

        if (b_ixstart) {
          f_st.site = &wb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (c_ix = ixstart + 1; c_ix + 1 <= ixstop; c_ix++) {
          if (dist_mat_temp->data[c_ix] < mtmp) {
            mtmp = dist_mat_temp->data[c_ix];
          }
        }
      }
    }

    iy++;
    varargin_1->data[iy] = mtmp;
    ix += n;
  }

  st.site = &cd_emlrtRSI;
  b_st.site = &od_emlrtRSI;
  c_st.site = &pd_emlrtRSI;
  if ((varargin_1->size[1] == 1) || (varargin_1->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &fc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (varargin_1->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &gc_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &sc_emlrtRSI;
  ixstart = 1;
  n = varargin_1->size[1];
  mtmp = varargin_1->data[0];
  itmp = 1;
  if (varargin_1->size[1] > 1) {
    if (muDoubleScalarIsNaN(varargin_1->data[0])) {
      e_st.site = &uc_emlrtRSI;
      overflow = (varargin_1->size[1] > 2147483646);
      if (overflow) {
        f_st.site = &wb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      ix = 2;
      exitg3 = false;
      while ((!exitg3) && (ix <= n)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(varargin_1->data[ix - 1])) {
          mtmp = varargin_1->data[ix - 1];
          itmp = ix;
          exitg3 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < varargin_1->size[1]) {
      e_st.site = &tc_emlrtRSI;
      if (ixstart + 1 > varargin_1->size[1]) {
        overflow = false;
      } else {
        overflow = (varargin_1->size[1] > 2147483646);
      }

      if (overflow) {
        f_st.site = &wb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (ixstart + 1 <= n) {
        if (varargin_1->data[ixstart] < mtmp) {
          mtmp = varargin_1->data[ixstart];
          itmp = ixstart + 1;
        }

        ixstart++;
      }
    }
  }

  emxFree_real_T(&varargin_1);
  *win_row = itmp;
  st.site = &dd_emlrtRSI;
  b_st.site = &ld_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  if (dist_mat_temp->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &gc_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  for (itmp = 0; itmp < 2; itmp++) {
    outsz[itmp] = (uint32_T)dist_mat_temp->size[itmp];
  }

  emxInit_real_T(&c_st, &b_varargin_1, 1, &i_emlrtRTEI, true);
  itmp = b_varargin_1->size[0];
  b_varargin_1->size[0] = (int32_T)outsz[0];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_varargin_1, itmp, (int32_T)
                    sizeof(real_T), &i_emlrtRTEI);
  n = dist_mat_temp->size[1];
  vstride = dist_mat_temp->size[0];
  ix = 0;
  iy = -1;
  d_st.site = &qd_emlrtRSI;
  overflow = (dist_mat_temp->size[0] > 2147483646);
  if (overflow) {
    e_st.site = &wb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (itmp = 1; itmp <= vstride; itmp++) {
    ix++;
    d_st.site = &nd_emlrtRSI;
    ixstart = ix;
    ixstop = ix + (n - 1) * vstride;
    mtmp = dist_mat_temp->data[ix - 1];
    if (n > 1) {
      if (muDoubleScalarIsNaN(dist_mat_temp->data[ix - 1])) {
        c_ix = ix + vstride;
        e_st.site = &uc_emlrtRSI;
        if (c_ix > ixstop) {
          d_ix = false;
        } else {
          d_ix = (ixstop > MAX_int32_T - vstride);
        }

        if (d_ix) {
          f_st.site = &wb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        exitg2 = false;
        while ((!exitg2) && (c_ix <= ixstop)) {
          ixstart = c_ix;
          if (!muDoubleScalarIsNaN(dist_mat_temp->data[c_ix - 1])) {
            mtmp = dist_mat_temp->data[c_ix - 1];
            exitg2 = true;
          } else {
            c_ix += vstride;
          }
        }
      }

      if (ixstart < ixstop) {
        c_ix = ixstart + vstride;
        e_st.site = &tc_emlrtRSI;
        if (c_ix > ixstop) {
          e_ix = false;
        } else {
          e_ix = (ixstop > MAX_int32_T - vstride);
        }

        if (e_ix) {
          f_st.site = &wb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        while (c_ix <= ixstop) {
          if (dist_mat_temp->data[c_ix - 1] < mtmp) {
            mtmp = dist_mat_temp->data[c_ix - 1];
          }

          c_ix += vstride;
        }
      }
    }

    iy++;
    b_varargin_1->data[iy] = mtmp;
  }

  emxFree_real_T(&dist_mat_temp);
  st.site = &dd_emlrtRSI;
  b_st.site = &od_emlrtRSI;
  c_st.site = &pd_emlrtRSI;
  d_st.site = &sc_emlrtRSI;
  ixstart = 1;
  n = b_varargin_1->size[0];
  mtmp = b_varargin_1->data[0];
  itmp = 1;
  if (b_varargin_1->size[0] > 1) {
    if (muDoubleScalarIsNaN(b_varargin_1->data[0])) {
      e_st.site = &uc_emlrtRSI;
      overflow = (b_varargin_1->size[0] > 2147483646);
      if (overflow) {
        f_st.site = &wb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix <= n)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[ix - 1])) {
          mtmp = b_varargin_1->data[ix - 1];
          itmp = ix;
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < b_varargin_1->size[0]) {
      e_st.site = &tc_emlrtRSI;
      if (ixstart + 1 > b_varargin_1->size[0]) {
        overflow = false;
      } else {
        overflow = (b_varargin_1->size[0] > 2147483646);
      }

      if (overflow) {
        f_st.site = &wb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (ixstart + 1 <= n) {
        if (b_varargin_1->data[ixstart] < mtmp) {
          mtmp = b_varargin_1->data[ixstart];
          itmp = ixstart + 1;
        }

        ixstart++;
      }
    }
  }

  emxFree_real_T(&b_varargin_1);
  *win_col = itmp;

  /*  for less than about 800x800, it turns out that double min is faster than */
  /*  waht is directly below this comment. */
  /*  [~, index] = min(sqrt(dist_mat_temp(:))); */
  /*  [win_row, win_col] = ind2sub(size(dist_mat_temp),index); */
  /*    if CYCLE == NUM_TRAINING_CYCLES, */
  /*       fprintf('\nVD_pretrain.m'); */
  /*      fprintf('\ndist_mat'); */
  /*     max(max(dist_mat)) */
  /*    min(min(dist_mat)) */
  /*  end */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (findWinningNode.cpp) */
