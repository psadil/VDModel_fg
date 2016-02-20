/*
 * findWinningNode.c
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
#include "visDiscrimModel_data.h"

/* Function Definitions */
void findWinningNode(const emxArray_real_T *weights_child, const emxArray_real_T
                     *inp_mat, real_T nInpDims, real_T *win_row, real_T *win_col,
                     emxArray_real_T *dist_mat)
{
  emxArray_real_T *a;
  int32_T vstride;
  int32_T itmp;
  uint32_T sz[3];
  emxArray_real_T *dist_mat_slices;
  emxArray_real_T *dist_mat_temp;
  int32_T iy;
  int32_T ixstart;
  int32_T j;
  int32_T ix;
  real_T s;
  uint32_T outsz[2];
  emxArray_real_T *minval;
  int32_T n;
  int32_T ixstop;
  int32_T b_ix;
  boolean_T exitg4;
  boolean_T exitg3;
  emxArray_real_T *b_minval;
  boolean_T exitg2;
  boolean_T exitg1;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 3, true);

  /* %% Find winning node */
  vstride = a->size[0] * a->size[1] * a->size[2];
  a->size[0] = weights_child->size[0];
  a->size[1] = weights_child->size[1];
  a->size[2] = weights_child->size[2];
  emxEnsureCapacity((emxArray__common *)a, vstride, (int32_T)sizeof(real_T));
  itmp = weights_child->size[0] * weights_child->size[1] * weights_child->size[2];
  for (vstride = 0; vstride < itmp; vstride++) {
    a->data[vstride] = weights_child->data[vstride] - inp_mat->data[vstride];
  }

  for (vstride = 0; vstride < 3; vstride++) {
    sz[vstride] = (uint32_T)a->size[vstride];
  }

  b_emxInit_real_T(&dist_mat_slices, 3, true);
  vstride = dist_mat_slices->size[0] * dist_mat_slices->size[1] *
    dist_mat_slices->size[2];
  dist_mat_slices->size[0] = (int32_T)sz[0];
  dist_mat_slices->size[1] = (int32_T)sz[1];
  dist_mat_slices->size[2] = (int32_T)sz[2];
  emxEnsureCapacity((emxArray__common *)dist_mat_slices, vstride, (int32_T)
                    sizeof(real_T));
  vstride = (int32_T)sz[0] * (int32_T)sz[1] * (int32_T)sz[2];
  for (itmp = 0; itmp < vstride; itmp++) {
    dist_mat_slices->data[itmp] = a->data[itmp] * a->data[itmp];
  }

  emxFree_real_T(&a);

  /*  should not even be squared, according to Rosie's paper */
  /*  First slice of this contains (squared) distances of x-coords, */
  /*  second slice contains (squared) distances of y-coords */
  for (vstride = 0; vstride < 3; vstride++) {
    sz[vstride] = (uint32_T)dist_mat_slices->size[vstride];
  }

  c_emxInit_real_T(&dist_mat_temp, 2, true);
  vstride = dist_mat_temp->size[0] * dist_mat_temp->size[1];
  dist_mat_temp->size[0] = (int32_T)sz[0];
  dist_mat_temp->size[1] = (int32_T)sz[1];
  emxEnsureCapacity((emxArray__common *)dist_mat_temp, vstride, (int32_T)sizeof
                    (real_T));
  if ((dist_mat_slices->size[0] == 0) || (dist_mat_slices->size[1] == 0) ||
      (dist_mat_slices->size[2] == 0)) {
    vstride = dist_mat_temp->size[0] * dist_mat_temp->size[1];
    dist_mat_temp->size[0] = (int32_T)sz[0];
    emxEnsureCapacity((emxArray__common *)dist_mat_temp, vstride, (int32_T)
                      sizeof(real_T));
    vstride = dist_mat_temp->size[0] * dist_mat_temp->size[1];
    dist_mat_temp->size[1] = (int32_T)sz[1];
    emxEnsureCapacity((emxArray__common *)dist_mat_temp, vstride, (int32_T)
                      sizeof(real_T));
    itmp = (int32_T)sz[0] * (int32_T)sz[1];
    for (vstride = 0; vstride < itmp; vstride++) {
      dist_mat_temp->data[vstride] = 0.0;
    }
  } else {
    itmp = 3;
    while ((itmp > 2) && (dist_mat_slices->size[2] == 1)) {
      itmp = 2;
    }

    if (3 > itmp) {
      vstride = dist_mat_slices->size[0] * dist_mat_slices->size[1] *
        dist_mat_slices->size[2];
    } else {
      vstride = 1;
      for (itmp = 0; itmp < 2; itmp++) {
        vstride *= dist_mat_slices->size[itmp];
      }
    }

    iy = -1;
    ixstart = -1;
    for (j = 1; j <= vstride; j++) {
      ixstart++;
      ix = ixstart;
      s = dist_mat_slices->data[ixstart];
      for (itmp = 2; itmp <= dist_mat_slices->size[2]; itmp++) {
        ix += vstride;
        s += dist_mat_slices->data[ix];
      }

      iy++;
      dist_mat_temp->data[iy] = s;
    }
  }

  emxFree_real_T(&dist_mat_slices);

  /*  Sum across the 2 matrix slices (or slices of all dimensions) to get total distance */
  rdivide(dist_mat_temp, nInpDims, dist_mat);

  /*  Normalise by dividing by num_input_dims */
  /*  dist_mat = sqrt(dist_mat_temp); */
  /*  NEW CODE: finish distance calc with sqrt */
  /*  dist_mat = sqrt(dist_mat); */
  vstride = dist_mat_temp->size[0] * dist_mat_temp->size[1];
  for (itmp = 0; itmp < vstride; itmp++) {
    dist_mat_temp->data[itmp] = muDoubleScalarSqrt(dist_mat_temp->data[itmp]);
  }

  for (vstride = 0; vstride < 2; vstride++) {
    outsz[vstride] = (uint32_T)dist_mat_temp->size[vstride];
  }

  c_emxInit_real_T(&minval, 2, true);
  vstride = minval->size[0] * minval->size[1];
  minval->size[0] = 1;
  minval->size[1] = (int32_T)outsz[1];
  emxEnsureCapacity((emxArray__common *)minval, vstride, (int32_T)sizeof(real_T));
  n = dist_mat_temp->size[0];
  ix = 1;
  iy = -1;
  for (vstride = 1; vstride <= dist_mat_temp->size[1]; vstride++) {
    itmp = ix;
    ixstop = (ix + n) - 1;
    s = dist_mat_temp->data[ix - 1];
    if (n > 1) {
      if (muDoubleScalarIsNaN(dist_mat_temp->data[ix - 1])) {
        b_ix = ix;
        exitg4 = false;
        while ((!exitg4) && (b_ix + 1 <= ixstop)) {
          itmp = b_ix + 1;
          if (!muDoubleScalarIsNaN(dist_mat_temp->data[b_ix])) {
            s = dist_mat_temp->data[b_ix];
            exitg4 = true;
          } else {
            b_ix++;
          }
        }
      }

      if (itmp < ixstop) {
        while (itmp + 1 <= ixstop) {
          if (dist_mat_temp->data[itmp] < s) {
            s = dist_mat_temp->data[itmp];
          }

          itmp++;
        }
      }
    }

    iy++;
    minval->data[iy] = s;
    ix += n;
  }

  ixstart = 1;
  n = minval->size[1];
  s = minval->data[0];
  itmp = 1;
  if (minval->size[1] > 1) {
    if (muDoubleScalarIsNaN(minval->data[0])) {
      ix = 2;
      exitg3 = false;
      while ((!exitg3) && (ix <= n)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(minval->data[ix - 1])) {
          s = minval->data[ix - 1];
          itmp = ix;
          exitg3 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < minval->size[1]) {
      while (ixstart + 1 <= n) {
        if (minval->data[ixstart] < s) {
          s = minval->data[ixstart];
          itmp = ixstart + 1;
        }

        ixstart++;
      }
    }
  }

  emxFree_real_T(&minval);
  *win_row = itmp;
  for (vstride = 0; vstride < 2; vstride++) {
    outsz[vstride] = (uint32_T)dist_mat_temp->size[vstride];
  }

  emxInit_real_T(&b_minval, 1, true);
  vstride = b_minval->size[0];
  b_minval->size[0] = (int32_T)outsz[0];
  emxEnsureCapacity((emxArray__common *)b_minval, vstride, (int32_T)sizeof
                    (real_T));
  n = dist_mat_temp->size[1];
  vstride = dist_mat_temp->size[0];
  ix = 0;
  iy = -1;
  for (j = 1; j <= vstride; j++) {
    ix++;
    ixstart = ix;
    ixstop = ix + (n - 1) * vstride;
    s = dist_mat_temp->data[ix - 1];
    if (n > 1) {
      if (muDoubleScalarIsNaN(dist_mat_temp->data[ix - 1])) {
        b_ix = ix + vstride;
        exitg2 = false;
        while ((!exitg2) && ((vstride > 0) && (b_ix <= ixstop))) {
          ixstart = b_ix;
          if (!muDoubleScalarIsNaN(dist_mat_temp->data[b_ix - 1])) {
            s = dist_mat_temp->data[b_ix - 1];
            exitg2 = true;
          } else {
            b_ix += vstride;
          }
        }
      }

      if (ixstart < ixstop) {
        b_ix = ixstart + vstride;
        while ((vstride > 0) && (b_ix <= ixstop)) {
          if (dist_mat_temp->data[b_ix - 1] < s) {
            s = dist_mat_temp->data[b_ix - 1];
          }

          b_ix += vstride;
        }
      }
    }

    iy++;
    b_minval->data[iy] = s;
  }

  emxFree_real_T(&dist_mat_temp);
  ixstart = 1;
  n = b_minval->size[0];
  s = b_minval->data[0];
  itmp = 1;
  if (b_minval->size[0] > 1) {
    if (muDoubleScalarIsNaN(b_minval->data[0])) {
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix <= n)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(b_minval->data[ix - 1])) {
          s = b_minval->data[ix - 1];
          itmp = ix;
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < b_minval->size[0]) {
      while (ixstart + 1 <= n) {
        if (b_minval->data[ixstart] < s) {
          s = b_minval->data[ixstart];
          itmp = ixstart + 1;
        }

        ixstart++;
      }
    }
  }

  emxFree_real_T(&b_minval);
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
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (findWinningNode.c) */
