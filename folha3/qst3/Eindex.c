#include <stdio.h>

int main(){
    int i, j, k;
    i = 3; 
    j = 4; 
    k = 5;
    printf("%d",i < j || ++j < k);
    printf("%d %d %d", i, j, k);
}

//1 == true
//13 4 5