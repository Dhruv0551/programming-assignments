CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

TARGET = calculator
OBJS = main.o Calculator.o

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

main.o: main.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Calculator.o: Calculator.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c Calculator.cpp -o Calculator.o

clean:
	rm -f $(OBJS) $(TARGET)