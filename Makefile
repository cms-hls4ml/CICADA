CPP_STANDARD := c++17
CXXFLAGS := -O3 -fPIC -std=$(CPP_STANDARD)

ifeq ($(strip $(PREFIX)),)
PREFIX:=.
endif

ifeq ($(strip $(EMULATOR_EXTRAS)),)
EMULATOR_EXTRAS := ../../hls4mlEmulatorExtras
endif

AP_TYPES := $(EMULATOR_EXTRAS)/include/ap_types
INCLUDES := -I$(EMULATOR_EXTRAS)/include -I$(AP_TYPES)
LD_FLAGS := -L$(EMULATOR_EXTRAS)/lib64 -lemulator_interface
ALL_VERSIONS:=CICADA_v1/CICADAModel_v1.so CICADA_v2/CICADAModel_v2.so

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
