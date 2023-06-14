#include <stdio.h>
#define _USE_MATH_DEFINES // for C
#include <math.h>

int main() {
    int v, raio;
    printf("raio: ");
    scanf("%d", &raio);
    v = (float)4 / 3 * M_PI * raio * raio * raio;
    printf("%d", v);

    return 0;
}