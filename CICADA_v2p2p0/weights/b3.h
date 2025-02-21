//Numpy array shape [4]
//Min 0.000000000000
//Max 0.000000000000
//Number of zeros 4

#ifndef B3_H_
#define B3_H_

namespace CICADA_v2p2p0{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  bias3_t b3[4];
#else
  bias3_t b3[4] = {0, 0, 0, 0};
#endif
}
 
#endif
