#include <stdio.h>
#include <ctype.h>


int contar_maiores(int vec[], int size, int val){
    int resultado = 0; 
    for (int i = 0; i < size; i++){
        if (vec[i] > val){
            resultado = resultado + 1;
        }     
    }
    
    printf("%d", resultado);
}


int main() {
    int vec[] = {1,2,3,6,3,2,7,7,9,6,4,5};

    int size = 12;
    
    int val = 5;

    contar_maiores(vec, size, val);
}