#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// 8.3
void decompor(int total_seg, int *horas, int *mins, int *segs){
    *segs = total_seg % 60;
    *mins = total_seg / 60;
    *horas = total_seg / 3600;
}

// 8.5
void reduzir(int *pnum, int *pdenom){
    int maior;
    if(*pnum > *pdenom){
        maior = *pnum;
    }else{
        maior = *pdenom;
    }
    for(int i = maior; i > 1; i--){
        if((*pnum % i == 0) && (*pdenom % i == 0)){
            *pnum = *pnum / i;
            *pdenom = *pdenom / i;
            return;
        }
    }
}

int main(){
    int *pn, *pd, p1, p2;
    p1 = 6;
    p2 = 8;
    pn = &p1;
    pd = &p2;
    reduzir(pn, pd);
    printf("%d\n%d\n", *pn, *pd);
    return 0;
}
