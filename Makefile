CXXFLAGS = -O3 -fPIC -std=c++17

.PHONY: CICADA

CICADA: CICADA_v1/CICADAModel_v1.so CICADA_v2/CICADAModel_v2.so
	mv $^ ./

CICADA_v1/CICADAModel_v1.so: 
	cd CICADA_v1 && $(MAKE)

CICADA_v2/CICADAModel_v2.so:
	 cd CICADA_v2 && $(MAKE)
