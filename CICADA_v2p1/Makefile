.PHONY: clean

CICADAModel_v2p1.so: myproject.o caloADModel_v2p1.o
	$(CXX) $(CXXFLAGS) $(LD_FLAGS) -shared $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm CICADAModel_v2p1.so
