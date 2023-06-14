#include <stdio.h>


void sort_desc(int vec[], int n){
    int a, b;
    for (a = 0; a < n; a++){
        int imin = a;
        for (b = a+1; b < n; b++){
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

    // imprimir vec[i] de forma decrescente
    for (a = n-1; a >= 0; a--){
        printf("%d ", vec[a]);
    }   
}

int main(){
    int size = 7;

    int vec[] = {1,7,4,2,9,3,5};
   
    sort_desc(vec, size);
}