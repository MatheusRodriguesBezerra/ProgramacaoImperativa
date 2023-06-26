#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "data.h"

// 10.1
void procura(char palavranome[]){
    for(int i = 0; i < NAlunos; i++){
        if(strstr(Alunos[i].nome, palavranome)){
            printf("%s %s\n", Alunos[i].codigo, Alunos[i].nome);
        }                
    }
}

// 10.2
int codigo2Aluno(char codigo[],char nome[]){
    for(int i = 0; i < NAlunos; i++){
        if(strstr(Alunos[i].codigo, codigo) && strstr(Alunos[i].nome, nome)){
            return 1;
        }                
    }
    return 0;
}

// 10.3
int disciplinasAluno(char nome[]){
    for(int i = 0; i < NAlunos; i++){
        if(strstr(Alunos[i].nome, nome)){
            printf("%s\n", Alunos[i].nome);
            for(int n = 0; n < Alunos[i].nd; n++){
                printf("%s\n", Disc[Alunos[i].disc[n]].nome);
            }
            return Alunos[i].nd;
        }                
    }
    return 0;
}

// 10.4
int alunosDaDisciplina(char disciplina[]){
    int idisciplina, sum = 0;
    for(int i = 0; i < NDisc; i++){
        if(strstr(Disc[i].nome, disciplina)){
            idisciplina = i;
        }
    }
    for(int i = 0; i < NAlunos; i++){
        for(int j = 0; j < Alunos[i].nd; j++){
            if(Alunos[i].disc[j] == idisciplina){
                printf("%s\n", Alunos[i].nome);
                sum++;
            }
        }
    }
    return sum;
}


int main(){
    char nome[MAXNOME] = "Elementos de Algebra Linear";
    char codigo[MAX] = "2004010099";

    alunosDaDisciplina(nome);
}
