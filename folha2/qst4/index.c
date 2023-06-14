#include <stdio.h>

int main(){
    int valor1, valor2, valor3;
    printf("Primeiro valor: ");
    scanf("&d \n", valor1);
    printf("Segundo valor: ");
    scanf("&d \n", valor2);
    printf("Terceiro valor: ");
    scanf("&d \n", valor3);

    if ((valor1 > valor2 && valor1 < valor3) || (valor1 < valor2 && valor1 > valor3))
    {
        printf("mediana: &d", valor1);
    }

    else if ((valor2 > valor1 && valor2 < valor3) || (valor2 < valor1 && valor2 > valor3))
    {
        printf("mediana: &d", valor2);
    }

    else if ((valor3 > valor2 && valor3 < valor1) || (valor3 < valor2 && valor3 > valor1))
    {
        printf("mediana: &d", valor3);
    }
    
    return 0;
}