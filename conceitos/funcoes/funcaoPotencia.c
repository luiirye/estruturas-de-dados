#include <stdio.h>

double potencia(double x, int a)
{
    double res = 1.0;
    int i;

    for(i = 1; i <= a; i++)
    {
        res = res*a;
    }

    return res;

}
    
int main ()
{
    double potencia();
    
    
    return 0;
}