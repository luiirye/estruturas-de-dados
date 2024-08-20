#include <stdio.h>
#include <stdlib.h>

int main () {
    int x, *p;
    
    x = 10;
    p = &x;
    *p = x + 20;
    
    printf("%d\n", x);
    printf("%p\n", p);
    printf("%d\n", *p);

    return 0;
}