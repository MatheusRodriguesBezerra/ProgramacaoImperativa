#include <stdio.h>

int main(){
    int valor, vinte, resto, dez, cinco, um;
    printf("Quantia em EUR: ");
    scanf("%d", valor);
    
    //notas de 20
    vinte = valor / 20;
    resto = valor - (20 * vinte);
    printf("notas EUR 20: &d \n", vinte);

    //notas de 10
    dez = resto / 10;
    resto = resto - (10 * dez);
    printf("notas EUR 10: &d \n", dez);

    //notas de 5
    cinco = resto / 10;
    resto = resto - (5 * cinco);
    printf("notas EUR 5: &d \n", cinco);

    //moedas de 1
    um = resto / 10;
    resto = resto - (1 * um);
    printf("moedas EUR 1: &d \n", um);
    
    return 0;
}