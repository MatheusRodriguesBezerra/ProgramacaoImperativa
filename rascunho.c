#include <stdio.h>
#define NUM_BITS 32 // número máximo de bits
int main(void) {
    unsigned n, size, bit[NUM_BITS] = {0};
    scanf("%u", &n); // inteiro sem sinal
    /* obter os algarismos binários */
    size = 0;
    while (n > 0) {
        bit[size++] = n%2;
        n = n/2;
    }
    /* imprimir por ordem contrária */
    while(size > 0) {
        printf("%u", bit[--size]);
    }
    putchar('\n'); // terminar a linha
}