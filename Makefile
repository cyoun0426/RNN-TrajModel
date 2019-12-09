GCC=g++
GCCFLAGS=-Wall -std=c++11
TARGET=map

all: $(TARGET)

$(TARGET): $(TARGET).cpp $(wildcard *.cpp)
	$(GCC) $(GCCFLAGS) -o $@ $^

.PHONY: clean
clean:
	@echo Removing Executables...
	@rm bin/$(TARGET)
