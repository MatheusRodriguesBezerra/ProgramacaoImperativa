#include <stdio.h>
#include <ctype.h>


int todos_letras(char str[]){
    int i;
    int resultado = 1;

    // verifica se todos os str[i] são alfanumericos(a...b ou A...B)
    for (i = 0; str[i] != '\0'; i++){
        if (isalpha(str[i])){
            
        }else{
            resultado = 0;
        }    
    }

    //imprimir resultado
    printf("%d", resultado);
}


int main() {
    char str[50];

    printf("palavra: ");
    gets(str);

    todos_letras(str);
}