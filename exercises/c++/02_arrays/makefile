CXX=c++
CXXFLAGS=-O0 -g -Wall -Wextra 

all: primes.x reverse.x soe.x vector.x 

%.x:%.cc
	$(CXX) $(CXXFLAGS) -o $@ $<


.PHONY: clean

clean:
	rm -f *.x
