#include <stdio.h>
#include <ctype.h>

// 5.1
void range(int vec[], unsigned size, int inicio, int incr){
    for(int i = 0; i < size; i++){
        vec[i] = inicio + (i * incr);
    }
}

// 5.2
void capitalizar(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }   
}

// 5.3
int palindromo(char str[]){
    int size = 0, n = 0;
    char strInv[200];
    while(str[size] != '\0'){ 
        size = size + 1; 
    }

    for(int i = size-1; i >= 0; i--){
        strInv[n] = str[i];
        n = n + 1;
    }
    
    for (int i = 0; i < size; i++){
        if(str[i] != strInv[i]){
            return 0;
        }
    }
    
    return 1;
}

// 5.4
int todosLetras(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if(isalpha(str[i]) == 0){
            return 0;
        }  
    }
    return 1;
}

// 5.5
int algumDigito(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if(isdigit(str[i]) != 0){
            return 1;
        }  
    }
    return 0;
}

// 5.6
int forte(char str[]){
    int mai = 0, min = 0, alg = 0, size = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if(isdigit(str[i]) != 0){
            alg = 1;
        }else if(islower(str[i]) != 0){
            min = 1;
        }else if(isupper(str[i]) != 0){
            mai = 1;
        }
        size = size + 1;
    }

    if((alg+mai+min == 3) && (size > 5)){
        return 1;
    }else{
        return 0;
    }    
}

// 5.7
int decimal(char str[]){
    int size = 0, number = 0;
    while(str[size] != '\0'){ 
        size = size + 1; 
    }
    for(int i = 0; i < size; i++){
        number = number + ((int)str[size]);
    }
    
}


int main(){
    char a[200] = "h18asadh";
    printf("%d\n", forte(a));
    
}