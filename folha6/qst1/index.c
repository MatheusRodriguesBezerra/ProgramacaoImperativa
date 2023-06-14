#include <stdio.h>

int ordenada(int vec[], int size){
    int resposta = 1;
    for (int i = 0; i < (size-1); i++){
        if (vec[i] <= vec[i+1]){
            
        }else{
            resposta = 0;
        }
    }
    printf("%d", resposta);
}

int main(){
    int vec[] = {1,2,2,4,3};

    int size = 5;

    ordenada(vec, size);

}