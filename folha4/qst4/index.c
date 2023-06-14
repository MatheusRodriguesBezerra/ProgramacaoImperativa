#include <stdio.h>

int main(){
    char palavra[100];
    int resultado = 0;
    int i = 0;

    printf("palavra: ");
    gets(palavra);

    while (palavra[i] != '\0'){
        switch (palavra[i]){
            case 'A':case 'E':case 'I':case 'L':case 'N':case 'O':case 'R':case 'T':case 'S':case 'U':
                resultado = resultado + 1;
                break;
            case 'D':case 'G':
                resultado = resultado + 2;
                break;
            case 'B':case 'C':case 'M':case 'P':
                resultado = resultado + 3;
                break;
            case 'F':case 'H':case 'V':case 'W':case 'Y':
                resultado = resultado + 4;
                break;
            case 'K':
                resultado = resultado + 5;
                break;
            case 'J':case 'X':
                resultado = resultado + 8;
                break;
            case 'Q':case 'Z':
                resultado = resultado + 10;
                break;        
            default:
                break;
        }
        i = i + 1;        
    }
    
    printf("resultado: %d pontos", resultado);
}