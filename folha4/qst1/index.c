#include <stdio.h>
#include <math.h>

double sqr(int a){
    double xn, xn1, eps=0.01;
    xn1 = a/2;
    while (exp2(fabs(xn - xn1))>exp2(eps))
    {
        xn = xn1;
        xn1 = 0.5 *(xn + a/xn);
    }

    return xn1;
    
}