CXX = g++
CXXFLAGS = -Wall -g

TARGET = Problem1

SRCS = BilanganTerbesar.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

clean_all:
	rm -f $(TARGET) *.o