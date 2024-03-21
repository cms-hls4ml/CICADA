#ifndef CICADA_H_
#define CICADA_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"

using namespace CICADA_v1p1p1;

// Prototype of top level function for C-synthesis
void cicada_v1p1p1(
    input_t inputs_[N_INPUT_1_1],
    result_t layer8_out[N_LAYER_6]
);

#endif
