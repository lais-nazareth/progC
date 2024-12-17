#include <stdio.h>
#include <stdlib.h>

struct LISTA{
    int info;
    struct LISTA* prox;
};

typedef struct LISTA Lista;

Lista* CriaLista(Lista* L){
    int dado;
    Lista* elem, *aux;
    
    printf("Digite o elemento: ");
    scanf("%d", &dado);
    while(dado >= 0){
        elem = (Lista*)malloc(sizeof(Lista));
        elem ->info = dado;
        elem ->prox = NULL;
        if (L == NULL){
            L = elem;
        }
        else{
            aux = L;
            while (aux -> prox != NULL){
                aux = aux -> prox;
            }
            aux -> prox = elem;
        }
        printf("Digite o elemento: ");
        scanf("%d", &dado);
    }
    return L;
}

void ImprimeLista(Lista* L){
    Lista* aux;
    aux = L;
    while (aux != NULL){
        printf("%d ", aux->info);
        aux = aux -> prox;
    }
}

Lista* Intercala(Lista *L1, Lista *L2){
    Lista* aux1, *aux2;
    aux1 = L1;
    while (aux1 != NULL){
        aux2 = L2;
        L2 = L2 -> prox;
        aux2 -> prox = aux1 -> prox;
        aux1 -> prox = aux2;
        aux1 = aux2->prox;
    }
    return L1;
}

int main(void){
    Lista *L1 = NULL, *L2 = NULL;
    L1 = CriaLista(L1);
    L2 = CriaLista(L2);

    printf("Lista 1:\n");
    ImprimeLista(L1);
    printf("\n");
    printf("Lista 2:\n");
    ImprimeLista(L2);

    L1 = Intercala(L1, L2);
    printf("\nLista Intercalada: \n");
    ImprimeLista(L1);

    return 0;
}