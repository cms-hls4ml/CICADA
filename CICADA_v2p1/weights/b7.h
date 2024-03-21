//Numpy array shape [20]
//Min 0.000000000000
//Max 0.000000000000
//Number of zeros 20

#ifndef B7_H_
#define B7_H_

namespace CICADA_v2p1{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  bias7_t b7[20];
#else
  bias7_t b7[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#endif
}

#endif
