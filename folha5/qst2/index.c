#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


char capitalizar(char str[]) {
    for (int i = 0; str[i] != '\0'; i++){
        if (islower(str[i])){
            str[i] = toupper(str[i]);
        }        
    }   

    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);        
    }
     
}


int main(){
    char str[5000];
    printf("mensagem: ");
    gets(str);
    printf("%s", capitalizar(str));
}