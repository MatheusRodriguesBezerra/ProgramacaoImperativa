#include <stdio.h>

int main(){
    int vec[200];
    int i, range;

    // criando a array
    scanf("%d", &vec[0]);
    range = 0;

    for (i = 1; vec[i-1] != 0; i++){
        scanf("%d", &vec[i]);
        range ++;
    }

    // ordenando a array
    int a, b;
    for (a = 0; a < range; a++){
        int imin = a;
        for (b = a+1; b < range; b++){
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

    // imrpimir vec[i]
    for (i = 0; i < range; i++){
        printf("%d ", vec[i]);
    }    
}