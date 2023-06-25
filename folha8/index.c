#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void decompor(int total_seg, int *horas, int *mins, int *segs){
    *segs = total_seg % 60;
    *mins = total_seg / 60;
    *horas = total_seg / 3600;
}

// void reduzir(int *pnum, int *pdenom){
//     for(int i = &pnum + pdenom; i > &pnum && i > &pdenom; i++){
//         if((&pnum % i) && (&pdenom % i)){
//             *pdenom
//         }
        
//     }
    
// }

int main(){
    return 0;
}
