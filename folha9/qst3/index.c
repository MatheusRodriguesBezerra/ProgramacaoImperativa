#include <stdio.h>
#include <math.h>

typedef struct ponto{
    double x, y;
} Ponto;

double distancia(Ponto a, Ponto b){
    double xn, yn;
    xn = (a.x-b.x) * (a.x-b.x);
    yn = (a.y-b.y) * (a.y-b.y);
    return sqrt(xn+yn);
}

int mesmoPonto(Ponto a, Ponto b){
    if((a.x == b.x) && (a.y == b.y)){
        return 1;
    }else{
        return 0;
    }   
}

int main(){
    Ponto a = {4,1};
    Ponto b = {4,1};

    printf("%d", mesmoPonto(a, b));
    return 0;
}