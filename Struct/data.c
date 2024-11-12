#include <stdio.h>
#include <stdlib.h>

struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct data tData;

void preencher(tData *vet){
    for (int i = 0; i < 2; i++){
        printf("Digite o dia: \n");
        scanf("%d", &vet[i].dia);
        if (vet[i].dia > 31 || vet[i].dia < 0){
            printf("Data invalida!\n");
            break;
        }
        printf("Digite o mes: \n");
        scanf("%d", &vet[i].mes);
        if (vet[i].mes > 12 || vet[i].mes < 0){
            printf("Data invalida!\n");
            break;
        }
        printf("Digite o ano: \n");
        scanf("%d", &vet[i].ano);
        if (vet[i].ano < 0){
            printf("Data invalida!\n");
            break;
        }
    }
}

int dias(tData *vet){
    int dias1, dias2, diasd;
    dias1 = vet[0].dia + (vet[0].mes * 30) + (vet[0].ano * 365);
    dias2 = vet[1].dia + (vet[1].mes * 30) + (vet[1].ano * 365);
    diasd = dias2 - dias1;
    return diasd;
}

int main(void){
    int dias_passados;
    tData *vet = (tData*)malloc(2 * sizeof(tData));
    preencher(vet);
    dias_passados = dias(vet);
    printf("Passaram %d dias entre %d/%d/%d e %d/%d/%d", dias_passados, vet[0].dia, vet[0].mes, vet[0].ano, vet[1].dia, vet[1].mes, vet[1].ano);
    return 0;
}