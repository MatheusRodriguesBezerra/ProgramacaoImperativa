#include <stdio.h>

int main(){
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c); // ler 3 valors
    maior = a;
    if(b > maior){
        b = maior;
    }

    else if (c > maior){
        c = maior;
    }
    printf("%d\n", maior); // imprimir o resultado
    return 0;
}
