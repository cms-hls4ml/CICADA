//Numpy array shape [3]
//Min 0.000000000000
//Max 0.000000000000
//Number of zeros 3

#ifndef B3_H_
#define B3_H_

namespace CICADA_v2{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  bias3_t b3[3];
#else
  bias3_t b3[3] = {0, 0, 0};
#endif
}

#endif
