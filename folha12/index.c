#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *next;    
};

struct node *novo_ele(int info){
    struct node *p = (struct node *)malloc(sizeof(struct node));

    if (p != NULL){
        p->info = info;
        p->next = NULL;

    return p;
    };   
};

struct node *procura(struct node *first, int info){
    struct node *p = NULL;

    for(p=first; p!=NULL; p=p->next){
        if(p->info == info){
            return p;
        }
    }

    return NULL;

}

struct node *procura(struct node *first, int info){
    for(; first!=NULL && first->info!=info; first=first->next);

    return first;

}

struct node *ins_fim(struct node *first, int info){
    struct node *p = novo_elemento(info);

    struct node *curr = NULL;
    
    if(p==NULL){
        return first;
        // caso especial: lista vazia
    }else if(first==NULL){
        first = p;
        return first;
    }else{
        // procura o último elemento da lista
        for(curr=first; curr->next!=NULL;curr=curr->next);
        curr->next=p;
        return first;
    }
}

int main() {
    int numero;
    scanf("%d", &numero);
    struct node *novo_ele(numero);
}
