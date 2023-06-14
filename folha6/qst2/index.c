#include <stdio.h>

int ordenada(int vec[], int size){
    int resposta = 0;
    for (int i = 0; i < (size-1); i++){
        if (vec[i] <= vec[i+1]){
            
        }else{
            resposta++;
        }
    }
    printf("%d", resposta);
}

int main(){
    int vec[] = {3,1,2,2,4,0};

    int size = 6;

    ordenada(vec, size);

}