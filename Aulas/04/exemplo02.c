#include <stdio.h>

void main()
{
    int a = 8; //(00001000) -> 11110111 -9
               // ||||||||
    int b = 5; //(00000101)
    //printf("%d\n", a&b);

    int c = 9; //(00001001)
    int d = 3; //(00000011)
    //printf("%d\n", c|d);

    int e = 12;
    int f = 5;
    //printf("%d\n", e^f);

    printf("%d\n", a << 10);
}