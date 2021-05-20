CXX=c++
CXXFLAGS=-O0 -g -Wall -Wextra 

all: getters.x formatter.x uniq.x uom.x

%.x:%.cc
	$(CXX) $(CXXFLAGS) -o $@ $<


.PHONY: clean

clean:
	rm -f *.x 
