all: build

build:
	g++ -Wall -o main main.cpp
	
clean:
	rm -f *.o main