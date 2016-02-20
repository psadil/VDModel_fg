/*
 * rand.c
 *
 * Code generation for function 'rand'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "rand.h"
#include "visDiscrimModel_emxutil.h"
#include "visDiscrimModel_data.h"

/* Function Declarations */
static real_T eml_rand_mt19937ar(uint32_T b_state[625]);

/* Function Definitions */
static real_T eml_rand_mt19937ar(uint32_T b_state[625])
{
  real_T r;
  uint32_T u[2];
  int32_T j;
  uint32_T mti;
  int32_T kk;
  uint32_T y;
  uint32_T b_y;
  uint32_T c_y;
  uint32_T d_y;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    for (j = 0; j < 2; j++) {
      mti = b_state[624] + 1U;
      if (mti >= 625U) {
        for (kk = 0; kk < 227; kk++) {
          y = (b_state[kk] & 2147483648U) | (b_state[1 + kk] & 2147483647U);
          if ((int32_T)(y & 1U) == 0) {
            b_y = y >> 1U;
          } else {
            b_y = y >> 1U ^ 2567483615U;
          }

          b_state[kk] = b_state[397 + kk] ^ b_y;
        }

        for (kk = 0; kk < 396; kk++) {
          y = (b_state[kk + 227] & 2147483648U) | (b_state[228 + kk] &
            2147483647U);
          if ((int32_T)(y & 1U) == 0) {
            c_y = y >> 1U;
          } else {
            c_y = y >> 1U ^ 2567483615U;
          }

          b_state[kk + 227] = b_state[kk] ^ c_y;
        }

        y = (b_state[623] & 2147483648U) | (b_state[0] & 2147483647U);
        if ((int32_T)(y & 1U) == 0) {
          d_y = y >> 1U;
        } else {
          d_y = y >> 1U ^ 2567483615U;
        }

        b_state[623] = b_state[396] ^ d_y;
        mti = 1U;
      }

      y = b_state[(int32_T)mti - 1];
      b_state[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      y ^= y >> 18U;
      u[j] = y;
    }

    r = 1.1102230246251565E-16 * ((real_T)(u[0] >> 5U) * 6.7108864E+7 + (real_T)
      (u[1] >> 6U));
  } while (r == 0.0);

  return r;
}

void b_rand(real_T varargin_2, emxArray_real_T *r)
{
  int32_T k;
  real_T d0;
  k = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity((emxArray__common *)r, k, (int32_T)sizeof(real_T));
  for (k = 0; k < (int32_T)varargin_2; k++) {
    d0 = eml_rand_mt19937ar(state);
    r->data[k] = d0;
  }
}

real_T c_rand(void)
{
  return eml_rand_mt19937ar(state);
}

/* End of code generation (rand.c) */
