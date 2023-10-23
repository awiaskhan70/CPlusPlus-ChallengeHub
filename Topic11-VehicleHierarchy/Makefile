# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11

# Source files
SOURCES = main.cpp car.cpp bicycle.cpp vehicle.cpp

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Executable name
TARGET = VehicleHierarcy_app

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)
