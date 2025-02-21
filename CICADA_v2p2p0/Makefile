.PHONY: clean

CICADAModel_v2p2p0.so: cicada.o caloADModel_v2p2p0.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm CICADAModel_v2p2p0.so
