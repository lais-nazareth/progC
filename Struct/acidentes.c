#include <stdio.h>
#include <stdlib.h>

struct acidentes {
    char sigla[3];
    int num_veiculos;
    int qtd;
};

typedef struct acidentes Acidentes;

void preencher(Acidentes *vet, int N) {
    for (int i = 0; i < N; i++) {
        printf("Digite a sigla do estado: \n");
        scanf("%s", vet[i].sigla);
        printf("Digite o numero de veiculos do estado: \n");
        scanf("%d", &vet[i].num_veiculos);
        printf("Digite o numero de acidentes do estado: \n");
        scanf("%d", &vet[i].qtd);
    }
}

char* sigla_maior(Acidentes *vet, int N) {
    int maior = 0;
    char* sigla = vet[0].sigla;
    for (int i = 0; i < N; i++) {
        if (vet[i].num_veiculos > maior) {
            maior = vet[i].num_veiculos;
            sigla = vet[i].sigla;
        }
    }
    return sigla;
}

char* menor_indice(Acidentes *vet, int N) {
    float indice = (float)vet[0].qtd / vet[0].num_veiculos;
    char* sigla = vet[0].sigla;
    for (int i = 1; i < N; i++) {
        float novo_indice = (float)vet[i].qtd / vet[i].num_veiculos;
        if (novo_indice < indice) {
            indice = novo_indice;
            sigla = vet[i].sigla;
        }
    }
    return sigla;
}

int total_acidentes(Acidentes *vet, int N) {
    int total = 0;
    for (int i = 0; i < N; i++) {
        total += vet[i].qtd;
    }
    return total;
}

int main(void) {
    int total = 0, N = 5;
    char* siglam, *sigla_menor;
    Acidentes* vet = (Acidentes*)malloc(N * sizeof(Acidentes));

    if (vet == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    preencher(vet, N);

    siglam = sigla_maior(vet, N);
    sigla_menor = menor_indice(vet, N);
    total = total_acidentes(vet, N);

    printf("O estado que possui maior numero de carros eh: %s\n", siglam);
    printf("O estado que possui menor indice de acidentes eh: %s\n", sigla_menor);
    printf("O total de acidentes eh: %d\n", total);

    return 0;
}
