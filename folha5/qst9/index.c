#include <stdio.h>


int filtrar_positivos(int vec[], int size){
    int somador = 0;
    for (int i = 0; i < size; i++){
        if (vec[i] >= 0){
            somador ++;
        }        
    }
    printf("%d", somador);    
}


int main(){
    char vec[] = {1,2,3,-2,-4,-1,0,1};

    int size = 8;

    filtrar_positivos(vec, size);
}