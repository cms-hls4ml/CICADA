CXXFLAGS = -O3 -fPIC -std=c++17
INCLUDES = -Iap_types -I../../hls4mlEmulatorExtras/

.PHONY: clean

CICADAModel_v1.so: myproject.o caloADModel_v1.o
	$(CXX) $(CXXFLAGS) $(INCLUDES) -shared $^ -o $@
	rm $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm CICADAModel_v1.so