//Numpy array shape [1]
//Min 0.000000000000
//Max 0.000000000000
//Number of zeros 1

#ifndef B5_H_
#define B5_H_

namespace CICADA_v2p1p2{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  bias5_t b5[1];
#else
  bias5_t b5[1] = {0};
#endif
}

#endif
