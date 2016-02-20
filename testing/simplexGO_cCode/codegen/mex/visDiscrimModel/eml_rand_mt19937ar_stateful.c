/*
 * eml_rand_mt19937ar_stateful.c
 *
 * Code generation for function 'eml_rand_mt19937ar_stateful'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "visDiscrimModel_data.h"

/* Function Definitions */
void c_eml_rand_mt19937ar_stateful_i(void)
{
  uint32_T r;
  int32_T mti;
  memset(&state[0], 0, 625U * sizeof(uint32_T));
  r = 5489U;
  state[0] = 5489U;
  for (mti = 0; mti < 623; mti++) {
    r = (r ^ r >> 30U) * 1812433253U + (1 + mti);
    state[mti + 1] = r;
  }

  state[624] = 624U;
}

/* End of code generation (eml_rand_mt19937ar_stateful.c) */
