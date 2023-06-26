#include <stdio.h>

#define MAX 10000

int numeroLinhas(char *nomeFicheiro){
    FILE *fptr;
    int sum = 0;
    fptr = fopen(nomeFicheiro, "r");
    char myString[MAX];
    while(fgets(myString, MAX, fptr)) {
        sum++;
    }
    return sum;
}

int countWords(char *nomeFicheiro){
    FILE *fptr;
    int sum = 0;
    fptr = fopen(nomeFicheiro, "r");
    char myString[MAX];
    while(fgets(myString, MAX, fptr)) {
        for(int i = 0; myString[i] != '\0'; i++){
            if(myString[i] == ' ' || myString[i] == '\t' || myString[i] == '\n'){
                sum++;
            }
        }   
    }
    return sum;
}

int main(){
    printf("%d\n", countWords("main.txt"));
    return 0;
}

