//Numpy array shape [15]
//Min 0.010398325510
//Max 0.035013694316
//Number of zeros 0

#ifndef S4_H_
#define S4_H_

namespace CICADA_v1{
#ifdef LOAD_WEIGHTS_FROM_TXT
  qbn1_scale_t s4[15];
#else
  qbn1_scale_t s4[15] = {0.01189631503075, 0.01800997555256, 0.01802297122777, 0.02153923362494, 0.01781351678073, 0.01568748056889, 0.03175498172641, 0.01092354580760, 0.03501369431615, 0.01039832551032, 0.01362946536392, 0.01694594882429, 0.01294392812997, 0.01520584244281, 0.02299462258816};
#endif
}

#endif
