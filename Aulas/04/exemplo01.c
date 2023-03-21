#include <stdio.h>

#define BIT_SIZE 4

struct minha_estrutura
{
    int bit01 : BIT_SIZE;
    int bit02 : BIT_SIZE;
    unsigned int bit03 : BIT_SIZE;
};

void main()
{
    struct minha_estrutura teste01;
    
    teste01.bit01 = 14;
    teste01.bit01++;

    teste01.bit02 = 2;

    teste01.bit03 = 14;
    teste01.bit03++;

    printf("Número 1: %d\n", teste01.bit01);
    printf("Número 2: %d\n", teste01.bit02);
    printf("Número 3: %d\n", teste01.bit03);
}