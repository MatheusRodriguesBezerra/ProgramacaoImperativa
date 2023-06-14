#include <stdio.h>

int palindromo(char str[]){
    //saber o tamanho da string
    int i = 0;
    int range = 0;
    while(str[i] != '\0'){
        range ++;
        i ++;    
    }

    // avaliar str[0] == str[range - 1] ... 
    int a;
    int b = range - 1;
    int resultado = 1;

    for(a = 0; a < range; a++){
        if (str[a] == str[b]){
            
        }else{
            resultado = 0;
        }
        b--;
    }

    // imprimir resultado
    if (resultado == 1){
        printf("True");
    }else{
        printf("False");
    } 
}


int main(){
    char str[50];

    printf("palavra: ");
    gets(str);

    palindromo(str);
}