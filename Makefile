GCC=g++
GCCFLAGS=-Iinclude -std=c++11
TARGET=HMM_mapmatching

all: match

match: $(TARGET)

$(TARGET): $(TARGET).cpp $(wildcard *.cpp)
	$(GCC) $(GCCFLAGS) -o $@ $^

.PHONY: clean
clean:
	@echo Removing Executables...
	@rm bin/$(TARGET)
