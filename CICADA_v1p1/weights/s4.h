//Numpy array shape [15]
//Min 0.010398325510
//Max 0.035013694316
//Number of zeros 0

#ifndef S4_H_
#define S4_H_

#ifdef LOAD_WEIGHTS_FROM_TXT
qbn1_scale_t s4[15];
#else
qbn1_scale_t s4[15] = {0.017612, 0.018027, 0.027544, 0.014235, 0.005614, 0.018361, 0.017568, 0.005696, 0.008486, 0.003242, 0.007771, 0.022252, 0.029965, 0.028156, 0.005953};
#endif

#endif
