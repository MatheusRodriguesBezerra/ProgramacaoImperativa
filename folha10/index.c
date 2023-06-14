#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "data.h"

// Questão 3.1
void procura(char palavranome[]){
    for (int i = 0; i < NAlunos; i++){
        if (strstr(Alunos[i].nome, palavranome) != NULL){
            printf("%s  %s\n", Alunos[i].codigo, Alunos[i].nome);
        }        
    }   
} 

// Questão 3.2
int codigo2Aluno(char codigo[],char nome[]){
    int i;
    int resultado = 0;
    for (i = 0; i < NAlunos; i++){
        if ((strstr(Alunos[i].codigo, codigo)) != NULL && (strstr(Alunos[i].nome, nome)) != NULL){
            resultado = 1;
        }       
    }
    printf("%d", resultado);   
} 

// Questão 3.3
int disciplinas_de_Aluno(char nome[]){
    int j = 0;
    for (int i = 0; i < NAlunos; i++){      // Percorrer toda a array Alunos[]
        if (strstr(Alunos[i].nome, nome) != NULL){      // verificar se há alguma palavra com este valor
            while (j < Alunos[i].nd){
                printf("%s\n", Disc[Alunos[i].disc[j]-1].nome);
                ++j;
            }            
        }        
    }  
}

//int numero_medio(char curso[]) {
//    int somadordisc = 0;
//    int quantidade = 0;
//    for (int i = 0; i < NAlunos; i++){
//        if (strstr(Alunos[i]., nome) != NULL){
//            /* code */
//        }     
//    }   
//}


int main(){
    char nome[MAXNOME] = "Joao Pereira";
    char codigo[MAX] = "2004010099";


    codigo2Aluno(codigo, nome);
}
