#include <stdio.h>

int mediana(int a, int b, int c){   
    if ((a > b && a < c) || (a < b && a > c))
    {
        printf("mediana: &d", a);
    }

    else if ((b > a && b < c) || (b < a && b > c))
    {
        printf("mediana: &d", b);
    }

    else if ((c > b && c < a) || (c < b && c > a))
    {
        printf("mediana: &d", c);
    }

    return 0;
}
