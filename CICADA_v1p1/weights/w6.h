//Numpy array shape [15, 1]
//Min -0.125000000000
//Max 0.375000000000
//Number of zeros 2

#ifndef W6_H_
#define W6_H_

namespace CICADA_v1p1{
#ifdef LOAD_WEIGHTS_FROM_TXT
  weight6_t w6[15];
#else
  weight6_t w6[15] = {0.875000, 0.875000, 0.875000, 0.500000, 0.875000, 0.750000, 0.875000, 0.875000, 0.875000, 0.000000, 0.000000, 0.875000, -0.375000, 0.875000, 0.875000};
#endif
}

#endif
