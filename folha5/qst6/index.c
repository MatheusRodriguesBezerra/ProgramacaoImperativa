#include <stdio.h>
#include <ctype.h>


int forte(char str[]){
    int i;
    int minuscula = 0;
    int maiuscula = 0;
    int digito = 0;

    // tamanho de str[]
    int rangeStr = 0;
    for (i = 0; str[i] != '\0'; i++){
        rangeStr ++;
    }

    // verifica se há minuscula em str[]
    for (i = 0; str[i] != '\0'; i++){
        if (islower(str[i])){
            minuscula = 1;
        }
    }

    // verifica se há maiuscula em str[]
    for (i = 0; str[i] != '\0'; i++){
        if (isupper(str[i])){
            maiuscula = 1;
        }
    }

    // verifica se há digito em str[]
    for (i = 0; str[i] != '\0'; i++){
        if (isdigit(str[i])){
            digito = 1;
        }
    }

    // verifica se satisfaz todas as condições e dá o resultado
    if ((rangeStr >= 6) && (minuscula == 1) && (maiuscula == 1) && (digito == 1)){
        return 1;
    }else{
        return 0;
    }
}


int main() {
    char str[50];

    printf("palavra: ");
    gets(str);

    forte(str);
}