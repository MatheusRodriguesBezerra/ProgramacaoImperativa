#include <stdio.h>
#include <ctype.h>


int algum_digito(char str[]){
    int i;
    int resultado = 0;

    // verifica se todos os str[i] é digito(0...9)
    for (i = 0; str[i] != '\0'; i++){
        if (isdigit(str[i])){
            resultado = 1;
        }  
    }

    //imprimir resultado
    printf("%d", resultado);
}


int main() {
    char str[50];

    printf("palavra: ");
    gets(str);

    algum_digito(str);
}