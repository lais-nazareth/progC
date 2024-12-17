#include <stdio.h>

void escreve_lista(int total, int* p){
    for (int i = 0; i < total; i++){
        p[i] = i*10;
    }
}

void insere_elem(int* p, int elem, int total){
    for (int i = 0; i < total; i++){
        if (elem < p[i]){
            
        }
    }
}

int main(void){
    int op = 0;
    int total = 20;
    int lista[total];
    int* p = &lista;

    while(op != 4){
    printf("--------MENU--------\n");
    printf("1- Escreve Lista\n");
    printf("2- Insere Elemento\n");
    printf("3- Remove Elemento\n");
    printf("4- FIM\n");
    scanf("%d", &op);

    switch (op){
        case 1:
            escreve_lista(total, p);
            break;
        case 2:
        
    }
    }
    return 0;
    
}