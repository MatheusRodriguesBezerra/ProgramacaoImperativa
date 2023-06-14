#include <stdio.h>

int main(){
    int L, W, H, volume;
    printf("L= ");
    scanf("%d", &L);
    printf("W= ");
    scanf("%d", &W);
    printf("H= ");
    scanf("%d", &H);

    volume = L * W * H;
    printf("Volume: %d", volume);
}
    