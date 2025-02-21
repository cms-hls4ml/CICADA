//Numpy array shape [2, 2, 1, 4]
//Min -0.820312500000
//Max 0.519531250000
//Number of zeros 0

#ifndef W3_H_
#define W3_H_

namespace CICADA_v2p2p0{
#ifdef LOAD_WEIGHTS_FROM_TEXT
  weight3_t w3[16];
#else
  weight3_t w3[16] = {-0.30468750, 0.44140625, 0.51953125, -0.82031250, -0.75000000, 0.29296875, -0.40234375, 0.41406250, 0.32421875, 0.34765625, -0.33593750, 0.32031250, 0.22656250, -0.71875000, 0.26171875, 0.19531250};
#endif
}
 
#endif
