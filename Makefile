CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

all: linear_regression

linear_regression: main.o
	$(CXX) $(CXXFLAGS) -o linear_regression main.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f *.o linear_regression

