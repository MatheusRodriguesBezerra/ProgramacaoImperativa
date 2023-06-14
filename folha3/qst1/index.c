#include <stdio.h>

int main(){
    int x, resultado;
    printf("x: ");
    scanf("%d", &x);  
    resultado = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6;
    printf("%d", resultado);
    return 0;
}