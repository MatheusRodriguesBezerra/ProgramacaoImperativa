#include <stdio.h>
#include <math.h>

typedef struct ponto{
    double x, y;
} Ponto;

double distancia(Ponto a, Ponto b){
    int resposta;
    resposta = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));

    printf("%d", resposta);

}

int mesmo_ponto(Ponto a, Ponto b){
    if((a.x == b.x) && (a.y == b.y)){
        printf("1");
    }else{
        printf("0");
    }
    
}

int main(){
    Ponto a = {4,1};
    Ponto b = {6,1};

    mesmo_ponto(a, b);
}