/*
 * visDiscrimModel_emxutil.c
 *
 * Code generation for function 'visDiscrimModel_emxutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "visDiscrimModel_emxutil.h"
#include "visDiscrimModel_data.h"

/* Function Definitions */
void b_emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void b_emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void b_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
                      boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void c_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
                      boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void d_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
                      boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void e_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
                      boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel, int32_T
  elementSize)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i <<= 1;
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
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

void emxInitStruct_struct0_T(struct0_T *pStruct, boolean_T doPush)
{
  emxInit_char_T(&pStruct->wd, 2, doPush);
  emxInit_real_T(&pStruct->famil_diff_thresh_start, 1, doPush);
  emxInit_char_T(&pStruct->nameOfFolder, 2, doPush);
  emxInit_char_T(&pStruct->expt, 2, doPush);
  b_emxInit_real_T(&pStruct->gridMat, 3, doPush);
  c_emxInit_real_T(&pStruct->famil_diff_thresh, 2, doPush);
  b_emxInit_real_T(&pStruct->stimuli_misMatch, 3, doPush);
  b_emxInit_real_T(&pStruct->stimuli_match, 3, doPush);
  c_emxInit_real_T(&pStruct->tType, 2, doPush);
  c_emxInit_real_T(&pStruct->stimOrder, 2, doPush);
  c_emxInit_real_T(&pStruct->numGrids, 2, doPush);
  c_emxInit_real_T(&pStruct->nInpDims, 2, doPush);
  c_emxInit_real_T(&pStruct->usePRC, 2, doPush);
  c_emxInit_real_T(&pStruct->meanSelectivity_caudal_new, 2, doPush);
  c_emxInit_real_T(&pStruct->meanSelectivity_PRC_new, 2, doPush);
  c_emxInit_real_T(&pStruct->meanSelectivity_caudal_prev, 2, doPush);
  c_emxInit_real_T(&pStruct->meanSelectivity_PRC_prev, 2, doPush);
  c_emxInit_real_T(&pStruct->familDiff_caudal, 2, doPush);
  c_emxInit_real_T(&pStruct->familDiff_PRC, 2, doPush);
  c_emxInit_real_T(&pStruct->prevStimInit_act_peak, 2, doPush);
  c_emxInit_real_T(&pStruct->prevStimInit_act_total, 2, doPush);
  c_emxInit_real_T(&pStruct->prevStimFin_act_peak, 2, doPush);
  c_emxInit_real_T(&pStruct->prevStimFin_act_total, 2, doPush);
  c_emxInit_real_T(&pStruct->newStimInit_act_peak, 2, doPush);
  c_emxInit_real_T(&pStruct->newStimInit_act_total, 2, doPush);
  c_emxInit_real_T(&pStruct->newStimFin_act_peak, 2, doPush);
  c_emxInit_real_T(&pStruct->newStimFin_act_total, 2, doPush);
  b_emxInit_real_T(&pStruct->featsSampedByComparison, 3, doPush);
  c_emxInit_real_T(&pStruct->sample_feat, 2, doPush);
  c_emxInit_real_T(&pStruct->fixations, 2, doPush);
  c_emxInit_real_T(&pStruct->peak_act, 2, doPush);
  c_emxInit_real_T(&pStruct->totalAct, 2, doPush);
  c_emxInit_real_T(&pStruct->comparedFeat, 2, doPush);
  c_emxInit_real_T(&pStruct->familDiff_withNoise, 2, doPush);
  c_emxInit_real_T(&pStruct->famil_difference, 2, doPush);
  c_emxInit_real_T(&pStruct->answer, 2, doPush);
  c_emxInit_real_T(&pStruct->correct, 2, doPush);
}

void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T numDimensions,
  boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions,
                    boolean_T doPush)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_char_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions,
                     boolean_T doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
                    boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(emlrtRootTLSGlobal, (void *)pEmxArray,
      (void (*)(void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (visDiscrimModel_emxutil.c) */
