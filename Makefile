CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = app

SRC = main.cpp \
      dataStructureCodes/DoublyLinkedList.cpp \
      dataStructureCodes/PlateStack.cpp \
      dataStructureCodes/StudentQueue.cpp \
      dataStructureCodes/TrendingFood.cpp \
      dataStructureCodes/ParkingSystem.cpp \
      dataStructureCodes/CategoryTree.cpp

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
