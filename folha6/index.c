#include <stdio.h>
#include <ctype.h>

// 6.1
int ordenada(int vec[], int size){
    for(int i = 0; i < size-1; i++){
        if(vec[i] > vec[i+1]){
            return 0;
        }       
    }
    return 1;
}

// 6.2
int desordem(int vec[], int size){
    int sum = 0;
    for(int i = 0; i < size-1; i++){
        if(vec[i] > vec[i+1]){
            sum = sum + 1;
        }       
    }
    return sum;
}

// 6.3
int mySort(){
    int n, j, vec[100], size = 0;
    scanf("%d", &n);
    while(n != 0){
        vec[size] = n; 
        size++;
        scanf("%d", &n);
    }

    for(int i = 0; i < size; i++){
        int x = vec[i];
        j = i-1;
        while(j>=0 && vec[j] > x){
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = x;
    }

    for (int i = 0; i < size; i++){
        printf("%d ", vec[i]);
    }
    return 0;
}

// 6.4
int segundoMenor(int vec[], int size){
    int i, j, imin, temp;
    for(i = 0; i < 2; i++){
        imin = i;
        for(j = i+1; j < size; j++){
            if (vec[j] < vec[imin]){
                imin = j;
            }
        }
        
        if(imin != i){
            temp = vec[i];
            vec[i] = vec[imin];
            vec[imin] = temp;
        }
    }
    return vec[1];
}

// 6.5
// void sortDesc(int vec[], int n){
//     int i, j, imin, temp, vec2[1000];
//     for(i = 0; i < n; i++){
//         imin = i;
//         for(j = i+1; j < n; j++){
//             if (vec[j] < vec[imin]){
//                 imin = j;
//             }
//         }
        
//         if(imin != i){
//             temp = vec[i];
//             vec[i] = vec[imin];
//             vec[imin] = temp;
//         }
//     }

//     j = 0;
//     for (i = n-1; i >= 0; i--){
//         vec2[j] = 
//     }
    
// }



int main(){
    int a[200] = {3,1,2,2,4,0,0};
    printf("%d", segundoMenor(a, 7));
    return 0;
    
}