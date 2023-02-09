.PHONY: clean

CICADAModel_v2.so: myproject.o caloADModel_v2.o
	$(CXX) $(CXXFLAGS) $(INCLUDES) -shared $^ -o $@
	rm $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm CICADAModel_v2.so