//Numpy array shape [15]
//Min 0.000000000000
//Max 0.000000000000
//Number of zeros 15

#ifndef B2_H_
#define B2_H_

namespace CICADA_v1p1p1{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  bias2_t b2[15];
#else
  bias2_t b2[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#endif
}

#endif
