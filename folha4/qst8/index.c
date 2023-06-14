#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, resposta;
    int tentativas = 1;

    srand(time(NULL));
    numero = 1 + rand() % 1000;

    printf("resposta: ");
    scanf("%d", &resposta);

    while (resposta != numero){
        if (resposta > numero){
            printf("Demasiado alto!\n");
        }else{
            printf("Demasiado baixo!\n");
        }
        printf("resposta: ");
        scanf("%d", &resposta);
        tentativas ++;        
    }
    printf("acertou em %d tentativas!", tentativas);
    
}