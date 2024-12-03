#include <stdio.h>
#include <stdlib.h>

struct Node{
    int dado;
    struct tNode* prox;
};

typedef struct Node tNode;

int BuscaElem(tNode* L, int elem){
    tNode* aux;
    aux = L;
    while (aux != NULL){
        if (aux -> dado == elem){
            return 1;
        }
        aux = aux -> prox;
    }
    return 0;
}

tNode* InsereElem(tNode* L, int elem){
    if (BuscaElem(L, elem) == 1){
        printf("O elemento ja esta na lista\n");
    }
    else {
        tNode* novo = (tNode*)malloc(sizeof(tNode));
        novo -> dado = elem;
        novo -> prox = L;
        L = novo;
        
    }
    return L;
}

void ImprimeLista(tNode* L){
    tNode* aux;
    aux = L;
    while (aux != NULL){
        printf("%d - ", aux->dado);
        aux = aux -> prox;
    }
    printf("\n");
}

void Intersecao(tNode *LA, tNode  *LB){
    tNode* auxA = LA;
    tNode* auxB = LB;
    while (auxA != NULL){
        tNode* auxB = LB;
        while (auxB != NULL){
            if (auxA->dado == auxB->dado){
                printf("%d - ", auxA->dado);
            }
            auxB = auxB -> prox;
        }
        auxA = auxA -> prox;
    }
    printf("\n");
    
}


int main(void){
    tNode *A, *B;
    int elem = 0;
    A = NULL;
    B = NULL;
    
    while (elem >= 0){
        printf("Digite um elemento de A: ");
        scanf("%d", &elem);
        if (elem >= 0){
            A = InsereElem(A, elem);
        }
        
    }
    elem = 0;

    while (elem >= 0){
        printf("Digite um elemento de B: ");
        scanf("%d", &elem);
        if (elem >= 0){
            B = InsereElem(B, elem);
        }
        
    }
    
    printf("Os elementos da lista A sao:\n");
    ImprimeLista(A);

    printf("Os elementos da lista B sao:\n");
    ImprimeLista(B);
    
    printf("Os elementos da intersecao de A e B sao: \n");
    Intersecao(A, B);
    return 0;
}
