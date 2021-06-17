EXE = main.x
CXX = g++
IDIR = include
LFLAGS = -lhello -L.


$(EXE): libhello.so main.cc
	$(CXX) main.cc -o $@ $(LFLAGS) -I$(IDIR)

libhello.so: source/hello.o
	$(CXX) -shared -o $@ $^

source/hello.o: source/hello.cc
	$(CXX) -fpic -o $@ -c $< -I$(IDIR)

source/hello.o: include/hello.h


clean:
	rm *.so *.x source/*.o

.PHONY: clean
