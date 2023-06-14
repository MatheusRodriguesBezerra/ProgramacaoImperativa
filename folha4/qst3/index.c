#include <stdio.h>

int main(){
    char palavra[100];
    int contador = 1;
    int i = 0;

    printf("palavra: ");
    gets(palavra);

    while (palavra[i] != '\0'){
        if ((palavra[i] == ' ') || (palavra[i] == '\n') || (palavra[i] == '\t')){
            contador = contador + 1;
        }
        i = i + 1;        
    }
    
    printf("%d palavras", contador);
}