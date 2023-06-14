#include <stdio.h>
#include <ctype.h>

int main(){
    char palavra[50];
    int contador = 0;
    int i = 0;

    printf("palavra: ");
    gets(palavra);

    while (palavra[i] != '\0'){
        if (isalpha(palavra[i])){
            contador = contador + 1;
        }
        i = i + 1;        
    }
    
    printf("A frase contem %d letras", contador);
}