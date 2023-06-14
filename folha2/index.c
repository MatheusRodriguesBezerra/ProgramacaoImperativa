#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


// Questao 1 -- FINALIZADO
int volumeEsfera(){  
    int raio;
    double v;
    printf("raio: ");
    scanf("%d", &raio);
    v = (4.0 / 3.0) * (M_PI * raio * raio * raio);
    printf("%lf", v);

    return 10;
}


// Questao 2 -- FINALIZADO
int maior(){
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c); // ler 3 valors
    
    if (a >= b && a >= c){
        maior = a;
    } else if (b >= a && b >= c) {
        maior = b;
    } else if (c >= b && c >= a) {
        maior = c;
    }    

    return maior;
}


// Questao 3 -- FINALIZADO
int notas(){
    int valor, vinte, resto, dez, cinco, um;
    printf("Quantia em EUR: ");
    scanf("%d", &valor);
    
    //notas de 20
    vinte = valor / 20;
    resto = valor - (20 * vinte);
    printf("notas EUR 20: %d \n", vinte);

    //notas de 10
    dez = resto / 10;
    resto = resto - (10 * dez);
    printf("notas EUR 10: %d \n", dez);

    //notas de 5
    cinco = resto / 5;
    resto = resto - (5 * cinco);
    printf("notas EUR 5: %d \n", cinco);

    //moedas de 1
    um = resto / 1;
    resto = resto - (1 * um);
    printf("moedas EUR 1: %d \n", um);
    
    return 0;
}


// Questao 4 -- FINALIZADO
int mediana(){
    int valor1, valor2, valor3;

    printf("Primeiro valor: ");
    scanf("%d", &valor1);
    printf("Segundo valor: ");
    scanf("%d", &valor2);
    printf("Terceiro valor: ");
    scanf("%d", &valor3);

    if ((valor1 > valor2 && valor1 < valor3) || (valor1 < valor2 && valor1 > valor3)) {
        printf("Mediana: %d", valor1);
    } else if ((valor2 > valor1 && valor2 < valor3) || (valor2 < valor1 && valor2 > valor3)) {
        printf("Mediana: %d", valor2);
    } else if ((valor3 > valor2 && valor3 < valor1) || (valor3 < valor2 && valor3 > valor1)) {
        printf("Mediana: %d", valor3);
    }
    
    return 0;
}


// Questao 5 -- FINALIZADO
int potencia() {
    int n, x;
    printf("X: ");
    scanf("%d", &x);
    printf("N: ");
    scanf("%d", &n);

    const int xconst = x; 

    if (n == 0) {
        printf("1");
    } else if (n != 0) {
        int i;
        for (i = 0; i < n-1; i++) {
            x = x * xconst;
        }
        printf("%d", x);
    }
}


// Questao 6 -- FINALIZADO
int mediaArit() {
    int x;
    float contador, somador;
    contador = 0;
    somador = 0;
    scanf("%d", &x);
    if (x == 0){
        printf("0");
    }else{
        while (x != 0){
            scanf("%d", &x);
            contador = contador + 1;
            somador = somador + x;
        }    
    }
    
    
    float media = somador/contador;

    printf("%.2f",media);
    return 0;
}


// Questao 9 -- FINALIZADO
int prox_bissexto(int a){
    if (a % 4 == 0){
        if (a % 100 == 0 && a % 400 != 0){
            return a + 4;
        }else{
            return a;
        }        
    }else{
        if (a % 4 == 1){
            return a + 3; 
        }else if (a % 4 == 2){
            return a + 2;
        }else if (a % 4 == 3){
            return a + 1;
        }
        
        
    }
}

int main(){
    printf("tudo bem");
}
