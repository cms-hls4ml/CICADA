//Numpy array shape [15]
//Min -1.015625000000
//Max 1.413880348206
//Number of zeros 0

#ifndef B4_H_
#define B4_H_

namespace CICADA_v1p1{
#ifdef LOAD_WEIGHTS_FROM_TXT
  qbn1_bias_t b4[15];
#else
  qbn1_bias_t b4[15] = {-0.807135, -1.400979, -1.234387, -0.428788, -0.192108, -0.883086, -0.527288, 0.052511, -0.784181, -0.185904, -0.225453, -0.830244, -1.167856, -1.034810, -0.373645};
#endif
}

#endif
