//Numpy array shape [15]
//Min -1.397255659103
//Max 0.054553806782
//Number of zeros 0

#ifndef B3_H_
#define B3_H_

namespace CICADA_v1p1p1{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  qbn1_bias_t b3[15];
#else
  qbn1_bias_t b3[15] = {-0.808023, -1.397256, -1.232790, -0.431162, -0.191184, -0.883614, -0.528636, 0.054554, -0.781986, -0.187621, -0.225176, -0.826869, -1.168246, -1.031011, -0.373545};
#endif
}

#endif
