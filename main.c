#if 0

square.o:
	${CC} -c -o square.o square.c

main.o:
	${CC} -c -o main.o main.c

all: square.o main.o
	${CC} -o a.out main.o square.o

run: all
	./a.out

clean:
	rm a.out main.o square.o

ifeq (A,B)
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
