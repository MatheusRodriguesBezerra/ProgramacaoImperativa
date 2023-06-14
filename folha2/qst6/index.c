#include <stdio.h>

int main() {
    int contador, somador, x, resultado;
    printf("valor: ");
    scanf("%d", x);
    contador = 0;
    somador = 0;
    while (x != 0)
    {
        contador = contador + 1;
        somador = somador + x;
    }

    resultado = somador / contador;

    printf("%d", resultado);
    return 0;
}