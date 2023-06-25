#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// 7.1
int verifiy(int v[], int na, int n){
    for(int i = 0; i <= na; i++){
        if(v[i] == n){ 
            return 1;
        }       
    }
    return 0;
}

int naoRepetidos(){
    int n, atuais[100], atuaisi = 0;
    scanf("%d", &n);
    atuais[atuaisi] = n;
    atuaisi++;
    printf("%d ", n);
    while(n != -1){
        
    }
    
    
    
}

// 7.2
void letrasRepetidas(){
    int letras[26], n, letra;
    for(int i = 0; i < 26; i++){
        letras[i] = 0;
    }
    char l2;
    letra = toupper(getchar());
    letras[letra-65]++;
    while(letra != '\n'){
        letra = toupper(getchar());
        if (isalpha(letra)){
            letras[letra-65]++;
        }
    }
    for(int i = 0; i < 26; i++){
        putchar(i+65);
        printf(": %d\n", letras[i]);
    }    
}


int main() {
    letrasRepetidas();
}