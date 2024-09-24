#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    int *p;
    x = 100.25;
    //p = &x;
    y = *p;
    printf("x = %f e y = %f", x, y);
    return 0;
}