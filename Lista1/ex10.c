#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x[4]; //tipo int ocupa 4 bytes

    printf("%d\n", x);
    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);

    char x[4]; //tipo char ocupa 1 byte

    printf("%d\n", x); 
    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);

    float x[4]; //tipo float ocupa 4 bytes

    printf("%d\n", x); 

    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);

    double x[4]; //tipo double ocupa 8 bytes

    printf("%d\n", x);
    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);

    return 0;
}

// os valores supostos coincidiriam com as saídas