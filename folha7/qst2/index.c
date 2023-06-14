#include <stdio.h>
#include <ctype.h>

int main(void) {
    int count = 0;
    char msg[1000];
    int alfa[26] = {0};

    printf("mensagem: ");
    gets(msg);

    msg[1000] = toupper(msg); 

    for (int i = 0; msg[i] != '\n'; i++){
        alfa[msg[i] - 'A'] ++;
    }
    

    for (int i = 0; i < 26; i++){
        printf("%c:%d\n",'A'+i, alfa[i]);
    }
    
  
}