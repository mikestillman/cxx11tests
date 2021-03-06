ifeq "1" "1"
CC = gcc
CXX = g++
LOADLIBES = -lstdc++
CXXFLAGS = -std=c++11 -O2 -Wall -Werror
else
CC = clang
CXX = clang++
CXXFLAGS = -std=c++11 -stdlib=libc++
LOADLIBES = -lc++
endif

all: test-auto test-range hello-thread

test-auto: test-auto.o
test-range : test-range.o
hello-thread: hello-thread.o

clean:
	rm -rf *.o test-auto test-range hello-thread

