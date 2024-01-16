CPP_STANDARD := c++17
CXXFLAGS := -O3 -fPIC -std=$(CPP_STANDARD)
PREFIX:=.
EMULATOR_EXTRAS := ../../hls4mlEmulatorExtras
AP_TYPES := $(EMULATOR_EXTRAS)/include/ap_types
HLS_ROOT := ../../hls
HLS4ML_INCLUDE := $(EMULATOR_EXTRAS)/include/hls4ml
INCLUDES := -I$(HLS4ML_INCLUDE) -I$(AP_TYPES) -I$(HLS_ROOT)/include
LD_FLAGS := -L$(EMULATOR_EXTRAS)/lib64 -lemulator_interface

CICADA_ARCH_1_MODELS := CICADA_v1/CICADAModel_v1.so CICADA_v1p1/CICADAModel_v1p1.so CICADA_v1p1p1/CICADAModel_v1p1p1.so CICADA_v1p1p2/CICADAModel_v1p1p2.so
CICADA_ARCH_2_MODELS := CICADA_v2/CICADAModel_v2.so CICADA_v2p1/CICADAModel_v2p1.so CICADA_v2p1p1/CICADAModel_v2p1p1.so CICADA_v2p1p2/CICADAModel_v2p1p2.so

ALL_VERSIONS:= $(CICADA_ARCH_1_MODELS) $(CICADA_ARCH_2_MODELS)

.DEFAULT_GOAL := all
.PHONY: all clean install

all: $(ALL_VERSIONS)
	@cp $(ALL_VERSIONS) ./
	@echo All OK

install: all
	@rm -rf $(PREFIX)/lib64
	@mkdir -p $(PREFIX)/lib64
	cp CICADAModel_*.so $(PREFIX)/lib64

%.so:
	$(MAKE) -C $(@D) INCLUDES="$(INCLUDES)" LD_FLAGS="$(LD_FLAGS)" CXXFLAGS="$(CXXFLAGS)"

clean:
	rm CICADAModel_*.so
