CXX=c++
CXXFLAGS=-O0 -g -Wall -Wextra

all: avoid_repeat.x mean_median.x mat_transpose.x
%.x:%.cc
	$(CXX) $(CXXFLAGS) -o $@ $<


.PHONY: clean

clean:
	rm -f *.x
