//Numpy array shape [16, 1]
//Min -0.640625000000
//Max 1.972656250000
//Number of zeros 0

#ifndef W5_H_
#define W5_H_

namespace CICADA_v2p1p2{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  weight5_t w5[16];
#else
  weight5_t w5[16] = {0.40234375, 0.46093750, 1.97265625, 0.45312500, 0.39062500, 0.43359375, 0.26171875, 0.40625000, 0.33593750, -0.64062500, 1.83984375, 0.34375000, 0.44921875, 0.59375000, 0.32421875, 0.41796875};
#endif
}

#endif