#include <stdio.h>


void range(int vec[], unsigned size, int inicio, int incr){
    for (int i = 0; i < size; i++){
        vec[i] = inicio + (i * incr); 
    }
    
    for (int i = 0; i < size; i++){
        printf("%d ", vec[i]); 
    }
}

int main(){
    int a[5];
    range(a, 5, 3, 2);
}

