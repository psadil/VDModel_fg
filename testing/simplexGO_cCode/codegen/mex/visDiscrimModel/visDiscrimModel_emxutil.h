/*
 * visDiscrimModel_emxutil.h
 *
 * Code generation for function 'visDiscrimModel_emxutil'
 *
 */

#ifndef __VISDISCRIMMODEL_EMXUTIL_H__
#define __VISDISCRIMMODEL_EMXUTIL_H__

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
extern void b_emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  numDimensions, boolean_T doPush);
extern void b_emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T
  numDimensions, boolean_T doPush);
extern void b_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
extern void c_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
extern void d_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
extern void e_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
extern void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel,
  int32_T elementSize);
extern void emxFreeStruct_struct0_T(struct0_T *pStruct);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_char_T(emxArray_char_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInitStruct_struct0_T(struct0_T *pStruct, boolean_T doPush);
extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  numDimensions, boolean_T doPush);
extern void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush);

#endif

/* End of code generation (visDiscrimModel_emxutil.h) */
