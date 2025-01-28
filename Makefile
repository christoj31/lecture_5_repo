CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

all: test

test: functions_to_implement.o test.o
	$(CXX) $(CXXFLAGS) -o test functions_to_implement.o test.o

functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

test.o: test.cpp catch.hpp
	$(CXX) $(CXXFLAGS) -c test.cpp

clean:
	rm -f *.o test