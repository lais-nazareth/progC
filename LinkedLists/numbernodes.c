#include <stdio.h>
#include <stdlib.h>

struct Node{
    int dado;
    struct Node* prox;
};

typedef struct Node node;

int numnodes(node* p){
    int counter = 0;
    while (p != NULL){
        counter++;
        p = p->prox;
    }
    return counter;
}

int main(void){
    node* A = NULL;
    node* p;
    p = A;
    int c, d = 0;
    while (d >= 0){
        printf("Digite o elemento: ");
        scanf("%d", &d);
        if (d < 0){
            break;
        }
        node* elem;
        elem = (node*)malloc(sizeof(node));
        elem -> dado = d;
        elem -> prox = NULL;
        if (A == NULL){
            A = elem;
        }
        else{
            node* aux = A;
            while (aux->prox != NULL){
                aux = aux -> prox;
            }
            aux -> prox = elem;
        }
    }
    c = numnodes(A);
    printf("\nO numero de elementos na lista eh: %d", c);
}