#if 0

square.o:
	cc -c -o square.o square.c

main.o:
	cc -c -o main.o main.c

all: square.o main.o
	cc -o a.out main.o square.o

run: all
	./a.out

ifeq (${THISVARDOESNTEXIST},DUMMYVALUE)
#endif

#include <stdio.h>
#include "square.h"

int main(void) { 
    printf("square(10.11) is %.2f\n", square(10.11));
    return 0;
}

#if 0
endif
#endif
