#include <stdio.h>
#include <ctype.h>


int decimal(char str[]){
    int i;
    // tamanho de str[]
    int rangeStr = 0;
    for (i = 0; str[i] != '\0'; i++){
        rangeStr ++;
    }

    //cria outra array de inteiros
    int str2[rangeStr];
    for (i = 0; i < rangeStr; i++){
        switch (str[i]){
            case '1':
                str2[i] = 1;
                break;
            case '2':
                str2[i] = 2;
                break;
            case '3':
                str2[i] = 3;
                break;
            case '4':
                str2[i] = 4;
                break;
            case '5':
                str2[i] = 5;
                break;
            case '6':
                str2[i] = 6;
                break;
            case '7':
                str2[i] = 7;
                break;
            case '8':
                str2[i] = 8;
                break;
            case '9':
                str2[i] = 9;
                break;
            default:
                break;
        }
    }


    // imprimir esta nova array
    for (i = 0; i < rangeStr; i++){
        printf("%d", str2[i]);
    }
    
}


int main() {
    char str[50];

    printf("palavra: ");
    gets(str);

    decimal(str);
}