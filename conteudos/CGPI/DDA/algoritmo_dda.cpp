#include <stdlib.h>
#include <stdio.h>

void DDA(int x1, int y1, int x2, int y2){
    int step;
    float x, y, xinc, yinc;
    step = fabs(X2 - X1);
    if(fabs(y2 - y1) > step){
        step = fabs(y2-y1);
    }
    xinc = (x2 - x1) / step;
    yinc = (x2 - x1) / step;
    x = x1;
    y = y1;

    while(x < x2){
        putpixel(Round(x), Round(y), 9);
        x = x + xinc;
        y = y + yinc;
    }
}

int main(){
    return 0;
}


