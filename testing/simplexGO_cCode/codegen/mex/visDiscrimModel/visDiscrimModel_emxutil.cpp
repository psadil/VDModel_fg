/*
 * visDiscrimModel_emxutil.cpp
 *
 * Code generation for function 'visDiscrimModel_emxutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "visDiscrimModel_emxutil.h"

/* Function Definitions */
void b_emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void b_emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void b_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                      numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                      doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void c_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                      numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                      doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void d_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                      numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                      doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void e_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                      numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                      doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxEnsureCapacity(const emlrtStack *sp, emxArray__common *emxArray, int32_T
  oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], (emlrtRTEInfo *)srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i = (int32_T)emlrtSizeMulR2012b((uint32_T)i, 2U, (emlrtRTEInfo *)
        srcLocation, sp);
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxFreeStruct_struct0_T(struct0_T *pStruct)
{
  emxFree_char_T(&pStruct->wd);
  emxFree_real_T(&pStruct->famil_diff_thresh_start);
  emxFree_char_T(&pStruct->nameOfFolder);
  emxFree_char_T(&pStruct->expt);
  emxFree_real_T(&pStruct->gridMat);
  emxFree_real_T(&pStruct->famil_diff_thresh);
  emxFree_real_T(&pStruct->stimuli_misMatch);
  emxFree_real_T(&pStruct->stimuli_match);
  emxFree_real_T(&pStruct->tType);
  emxFree_real_T(&pStruct->stimOrder);
  emxFree_real_T(&pStruct->numGrids);
  emxFree_real_T(&pStruct->nInpDims);
  emxFree_real_T(&pStruct->usePRC);
  emxFree_real_T(&pStruct->meanSelectivity_caudal_new);
  emxFree_real_T(&pStruct->meanSelectivity_PRC_new);
  emxFree_real_T(&pStruct->meanSelectivity_caudal_prev);
  emxFree_real_T(&pStruct->meanSelectivity_PRC_prev);
  emxFree_real_T(&pStruct->familDiff_caudal);
  emxFree_real_T(&pStruct->familDiff_PRC);
  emxFree_real_T(&pStruct->prevStimInit_act_peak);
  emxFree_real_T(&pStruct->prevStimInit_act_total);
  emxFree_real_T(&pStruct->prevStimFin_act_peak);
  emxFree_real_T(&pStruct->prevStimFin_act_total);
  emxFree_real_T(&pStruct->newStimInit_act_peak);
  emxFree_real_T(&pStruct->newStimInit_act_total);
  emxFree_real_T(&pStruct->newStimFin_act_peak);
  emxFree_real_T(&pStruct->newStimFin_act_total);
  emxFree_real_T(&pStruct->featsSampedByComparison);
  emxFree_real_T(&pStruct->sample_feat);
  emxFree_real_T(&pStruct->fixations);
  emxFree_real_T(&pStruct->peak_act);
  emxFree_real_T(&pStruct->totalAct);
  emxFree_real_T(&pStruct->comparedFeat);
  emxFree_real_T(&pStruct->familDiff_withNoise);
  emxFree_real_T(&pStruct->famil_difference);
  emxFree_real_T(&pStruct->answer);
  emxFree_real_T(&pStruct->correct);
}

void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_char_T(sp, &pStruct->wd, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->famil_diff_thresh_start, 1, srcLocation, doPush);
  emxInit_char_T(sp, &pStruct->nameOfFolder, 2, srcLocation, doPush);
  emxInit_char_T(sp, &pStruct->expt, 2, srcLocation, doPush);
  b_emxInit_real_T(sp, &pStruct->gridMat, 3, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->famil_diff_thresh, 2, srcLocation, doPush);
  b_emxInit_real_T(sp, &pStruct->stimuli_misMatch, 3, srcLocation, doPush);
  b_emxInit_real_T(sp, &pStruct->stimuli_match, 3, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->tType, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->stimOrder, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->numGrids, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->nInpDims, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->usePRC, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->meanSelectivity_caudal_new, 2, srcLocation,
                   doPush);
  c_emxInit_real_T(sp, &pStruct->meanSelectivity_PRC_new, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->meanSelectivity_caudal_prev, 2, srcLocation,
                   doPush);
  c_emxInit_real_T(sp, &pStruct->meanSelectivity_PRC_prev, 2, srcLocation,
                   doPush);
  c_emxInit_real_T(sp, &pStruct->familDiff_caudal, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->familDiff_PRC, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->prevStimInit_act_peak, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->prevStimInit_act_total, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->prevStimFin_act_peak, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->prevStimFin_act_total, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->newStimInit_act_peak, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->newStimInit_act_total, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->newStimFin_act_peak, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->newStimFin_act_total, 2, srcLocation, doPush);
  b_emxInit_real_T(sp, &pStruct->featsSampedByComparison, 3, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->sample_feat, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->fixations, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->peak_act, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->totalAct, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->comparedFeat, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->familDiff_withNoise, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->famil_difference, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->answer, 2, srcLocation, doPush);
  c_emxInit_real_T(sp, &pStruct->correct, 2, srcLocation, doPush);
}

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_char_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b((emlrtRTEInfo *)srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (visDiscrimModel_emxutil.cpp) */
