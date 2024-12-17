#include <stdio.h>
#include <stdlib.h>

struct Node{
    int dado;
    struct Node* prox;
};
typedef struct Node node;

int BuscaElem(node* L, int elem, node** pre){
    node *aux, *preL;
    aux = L;
    preL = NULL;
    while (aux->prox != NULL && elem > aux->dado){
        preL = aux;
        aux = aux -> prox;
    }
    (*pre) = preL;
    if (aux != NULL && elem == aux->dado){
        return 1;
    }
    else return 0;
}

void *InsereElem(node* L, int elem){
    node *pre, *el;
    if (!BuscaElem(L,elem,&pre)){
        el = (node*)malloc(sizeof(node));
        el -> dado = elem;
        if (L == NULL || pre = NULL){
            el -> prox = L;
            L = el;
        }
        el -> prox = pre -> prox;
        pre ->prox = el;
        
    }
    }
