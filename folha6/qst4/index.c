#include <stdio.h>


int segundo_menor(int vec[], int size){
    int a, b;
    for (a = 0; a < size; a++){
        int imin = a;
        for (b = a+1; b < size; b++){
            if (vec[b] < vec[imin]){
                imin = b;
            }
        }
        // torcar o minimo por vec[i]
        if(imin!= a){
            int temp = vec[a];
            vec[a] = vec[imin];
            vec[imin] = temp;
        }
    }

    // imprimir vec[1]
    printf("%d", vec[1]);
    
}

int main(){
    int size = 7;

    int vec[] = {1,7,4,2,9,3,5};
   
   segundo_menor(vec, size);
}