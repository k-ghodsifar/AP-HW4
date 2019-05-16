CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o shape.o twoD.o threeD.o square.o circle.o cube.o sphere.o point.o
TARGET = main  


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
shape.o: shape.cpp shape.h
	$(CXX) $(CXXFLAGS) shape.cpp
twoD.o: twoD.cpp twoD.h shape.h
	$(CXX) $(CXXFLAGS) twoD.cpp
threeD.o: threeD.cpp threeD.h shape.h
	$(CXX) $(CXXFLAGS) threeD.cpp
square.o: square.cpp square.h twoD.h
	$(CXX) $(CXXFLAGS) square.cpp
circle.o: circle.cpp circle.h twoD.h
	$(CXX) $(CXXFLAGS) circle.cpp
cube.o: cube.cpp cube.h threeD.h
	$(CXX) $(CXXFLAGS) cube.cpp
sphere.o: sphere.cpp sphere.h threeD.h
	$(CXX) $(CXXFLAGS) sphere.cpp
point.o: point.cpp point.h
	$(CXX) $(CXXFLAGS) point.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
