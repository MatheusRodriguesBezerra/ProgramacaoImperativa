#include <stdio.h>

/*

qst1 = FINALIZADO
qst2 = FINALIZADO
qst3 = FINALIZADO
qst4 = FINALIZADO
qst5 = FINALIZADO
qst6 = FINALIZADO
qst7 = *PENDENTE
qst8 = FINALIZADO
qst9 = FINALIZADO
qst10 = *PENDENTE
qst11 = FINALIZADO
qst12 = FINALIZADO

*/

// Questao 1 -- FINALIZADO
int calculo(){
	int x, resultado;
	printf("x: ");
	scanf("%d", &x);  
	resultado = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6;
	printf("%d", resultado);
	return 0;
}


// Questao 2 -- FINALIZADO
int calculoAprimorado(){
    int x, resultado;
    printf("x: ");
    scanf("%d", &x);  
    resultado = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("%d", resultado);
    return 0;
}


// Questao 3 -- FINALIZADO
int questao3(){
    printf("3.1 = 1(TRUE)\n3.2 = 1 INTEIRO\n3.3 = 1(TRUE)\n3.4 = 1(TRUE)\n3.5 = 13 4 5 (1(TRUE)++3 4 5 (INTEIRO))\n3.6 = 0 7 8 9(0(FALSE)++ 7 8 9 (INTEIRO))");
}


// Questao 4 -- Não precisa fazer


// Questao 5 -- FINALIZADO
int soma_divisores(int n){
    int i;
    int somador = 0;
    for (i = 1; i < n; i++){
        if (n % i == 0){
            somador = somador + i;
        }
    } 

    printf("%d", somador);
} 


// Questao 6 -- FINALIZADO
int mdc(){
    int n, d, mdc, i;
    printf("Numerador: ");
    scanf("%d", &n);
    printf("Denominador: ");
    scanf("%d", &d); 
    const int numerador = n;
    const int denominador = d;  
    while (n != d){
        if (n > d){
            n = n - d;
        }else{
            d = d - n;
        }
        mdc = d; 
    }
    
    n = numerador / mdc;
    d = denominador / mdc;

    printf("A fracao %d/%d eh equivalente a %d/%d", numerador, denominador, n, d);
            
}


// Questao 7 -- PENDENTE


// Questao 8 -- FINALIZADO
int quadrado(){
    int n, i, contador;
    contador = 0;
    printf("Numero: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++){
        if (i % 2 != 0){
            contador = contador + i;
        }else if (n == contador){
            break;
        }        
    }

    if (contador == n){
        printf("1");
    }else{
        printf("0");
    }     
}


// Questao 9 -- FINALIZADO
int mdc2(){
    int n, d, mdc, i;
    printf("Numerador: ");
    scanf("%d", &n);
    printf("Denominador: ");
    scanf("%d", &d); 
    printf("mdc(%d,%d) = ", n, d);
    i = 1;

    while (n != d){
        if (n > d){
            n = n - d;
        }else{
            d = d - n;
        }
        printf("mdc(%d,%d) = ", n, d);
        i = i + 1; 
    }

    printf("%d \n", n);
    printf("%d iteracoes", i);

}


// Questao 10 -- PENDENTE


// Questao 11 -- FINALIZADO
int fibonacci(int n){
    if (n == 0){
        return 0; 
    }else if (n == 1){
        return 1;
    }else if (n > 1){
        return fibonacci(n-1) + fibonacci(n-2);
    }   
}


// Questao 12 -- FINALIZADO
int soma_digitos(int n){
    int somador = 0;
    if (n / 10 == 0){
        return n + somador;
    }else{
        return (n % 10) + soma_digitos(n / 10);
    }   
}


int main() {
    int n, a;
    printf("Funcoes da folha 3:\n\n1.Questao 1 - calculo\n2.Questao 2 - calculo aprimorado\n3.Questao 3 - respostas\n4.Questao 4 - soma dos divisores\n5.Questao 5 - ???\n6.Questao 6 - fracao simplificada\n7.Questao 7 - ???\n8.Questao 8 - quadrado\n9.Questao 9 - mdc com interacoes\n10.Questao 10 - ???\n11.Questao 11 - fibonacci\n12.Questao 12 - somar digitos\n\nQual queres usar? ");
    scanf("%d", &n);

    switch (n){
        case 1:
            calculo();
            break;
        case 2:
            calculoAprimorado();
            break;
        case 3:
            questao3();
            break;
        case 4:
            printf("Nao precisa fazer");
            break;
        case 5:
            printf("Digite o numero: ");
            scanf("%d", &a);
            soma_divisores(a);
            break;
        case 6:
            mdc();
            break;
        case 7:
            printf("PENDENTE");
            break;
        case 8:
            quadrado();
            break;   
        case 9:
            mdc2();
            break; 
        case 10:
            printf("PENDENTE");
            break;
        case 11:
            printf("Digite o numero: ");
            scanf("%d", &a);
            printf("%d", fibonacci(a));
            break;
        case 12:
            printf("Digite o numero: ");
            scanf("%d", &a);
            printf("%d", soma_digitos(a));
            break;       
        default:
            break;
    }
}