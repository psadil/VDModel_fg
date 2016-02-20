/*
 * findWinningNode.h
 *
 * Code generation for function 'findWinningNode'
 *
 */

#ifndef __FINDWINNINGNODE_H__
#define __FINDWINNINGNODE_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "visDiscrimModel_types.h"

/* Function Declarations */
extern void findWinningNode(const emxArray_real_T *weights_child, const
  emxArray_real_T *inp_mat, real_T nInpDims, real_T *win_row, real_T *win_col,
  emxArray_real_T *dist_mat);

#endif

/* End of code generation (findWinningNode.h) */
