#include <stdio.h>
#define N 4


int identidade(int mat[N][N]){
    int i, j;
    int resultado = 1;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if ((i == j) && (mat[i][j] == 1)){
                
            }else if ((i != j) && (mat[i][j] == 0)){

            }else{
                resultado = 0;
            }           
        }        
    } 
    printf("%d", resultado);   
}

int main(){
    int mat[N][N] = {{1,0,0,0}, {0,1,7,0}, {0,0,1,0}, {0,0,0,1}};

    identidade(mat);

}