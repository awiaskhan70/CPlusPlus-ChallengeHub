#compliler
CXX = g++

#compiler Flags
CXXFLAGS = -std=c++11

# Source files
SOURCES = main.cpp bankaccount.cpp
#Object files

OBJECTS = $(SOURCES:.cpp=.o)

#Executable name

TARGET = bank_app

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

