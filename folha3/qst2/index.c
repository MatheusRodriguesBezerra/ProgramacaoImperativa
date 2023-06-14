#include <stdio.h>

int main(){
    int x, resultado;
    printf("x: ");
    scanf("%d", &x);  
    resultado = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("%d", resultado);
    return 0;
}