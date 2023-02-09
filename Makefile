export CXXFLAGS := -O3 -fPIC -std=c++17
EMULATOR_EXTRAS := ../../hls4mlEmulatorExtras
AP_TYPES := $(EMULATOR_EXTRAS)/ap_types
export INCLUDES := -I$(EMULATOR_EXTRAS) -I$(AP_TYPES)

.PHONY: CICADA

CICADA: CICADA_v1/CICADAModel_v1.so CICADA_v2/CICADAModel_v2.so
	mv $^ ./

CICADA_v1/CICADAModel_v1.so: 
	cd CICADA_v1 && $(MAKE)

CICADA_v2/CICADAModel_v2.so:
	 cd CICADA_v2 && $(MAKE)
