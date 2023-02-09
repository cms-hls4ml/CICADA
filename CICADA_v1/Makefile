.PHONY: clean

CICADAModel_v1.so: myproject.o caloADModel_v1.o $(EMULATOR_EXTRA_LIBRARY)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(EMULATOR_EXTRA_LIBRARY) -shared $^ -o $@
	rm $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm CICADAModel_v1.so