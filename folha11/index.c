#include <stdio.h>

void qst1(){
    FILE *mensagem;
    int linhas;

    printf("Numero de linhas: ");
    scanf("%d", &linhas);

    mensagem=fopen("main.txt","w");

    for (int i = 0; i < linhas; i++){
        fprintf(mensagem,"linha %d\n", i+1);      
    }

    fclose(mensagem);
}


int numero_linhas(){
    FILE *mensagem;
    int soma = 0;
    char buffer[100];

    mensagem = fopen("main.txt", "r");

    while (fgets(buffer, 100, mensagem) ){
        soma++;
    }
    
    fclose(mensagem);
    printf("%d", soma);

}

int qst4(){
    FILE *mensagem;
    int soma = 0;
    char buffer, old= ' ' ;

    mensagem = fopen("main.txt", "r");

    while ((buffer = fgetc(mensagem)) != EOF){
        printf("%c", buffer);
        //token = strtok
        if ((buffer == '\n' || buffer == ' ') && (old != ' ')){            
            soma++;
        }
        old = buffer;
    }
    
    fclose(mensagem);
    printf("%d", soma);

}

int main() {
    qst4();
}

