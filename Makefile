CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = src/main.cpp src/SIMCard.cpp src/Network.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = SIMCardSimulator

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ) $(TARGET)
