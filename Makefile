CC=gcc
CFLAGS=-Wall 
TARGET=test
.PHONY=all build clean

all: build

build: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	-rm *.o $(TARGET) 

