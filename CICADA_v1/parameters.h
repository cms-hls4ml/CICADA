#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_batchnorm.h"
#include "nnet_utils/nnet_batchnorm_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
 
//hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/s4.h"
#include "weights/b4.h"
#include "weights/w6.h"
#include "weights/b6.h"

//hls-fpga-machine-learning insert layer-config
// dense1
namespace CICADA_v1{
  struct config2 : nnet::dense_config {
    static const unsigned n_in = 252;
    static const unsigned n_out = 15;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 3;
    static const unsigned n_zeros = 1765;
    static const unsigned n_nonzeros = 2015;
    static const bool store_weights_in_bram = false;
    typedef dense1_accum_t accum_t;
    typedef bias2_t bias_t;
    typedef weight2_t weight_t;
    typedef layer2_index index_t;
    template<class x_T, class y_T>
      using product = nnet::product::mult<x_T, y_T>;
  };

  // QBN1
  struct config4 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_2;
    static const unsigned n_filt = -1;
    static const unsigned n_scale_bias = (n_filt == -1) ? n_in : n_filt;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 3;
    static const bool store_weights_in_bram = false;
    typedef qbn1_bias_t bias_t;
    typedef qbn1_scale_t scale_t;
    template<class x_T, class y_T>
      using product = nnet::product::mult<x_T, y_T>;
  };

  // relu1
  struct relu_config5 : nnet::activ_config {
    static const unsigned n_in = 15;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 3;
    typedef relu1_table_t table_t;
  };

  // output
  struct config6 : nnet::dense_config {
    static const unsigned n_in = 15;
    static const unsigned n_out = 1;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 3;
    static const unsigned n_zeros = 2;
    static const unsigned n_nonzeros = 13;
    static const bool store_weights_in_bram = false;
    typedef output_accum_t accum_t;
    typedef bias6_t bias_t;
    typedef weight6_t weight_t;
    typedef layer6_index index_t;
    template<class x_T, class y_T>
      using product = nnet::product::mult<x_T, y_T>;
  };
}

#endif
