#include <stdio.h>
#include <stdlib.h>

struct ordens {
    int OS;
    float valor;
    char tipo[50];
    char nome[50];
};

typedef struct ordens tOrdens;

void preencher(tOrdens *vet, int N) {
    for (int i = 0; i < N; i++) {
        printf("Digite a ordem de servico: \n");
        scanf("%d", &vet[i].OS);
        printf("Digite o valor do servico: \n");
        scanf("%f", &vet[i].valor);
        printf("Digite o tipo de servico: \n");
        scanf("%s", vet[i].tipo);
        printf("Digite o nome do cliente: \n");
        scanf(" %[^\n]s", vet[i].nome);
    }
}

float media_valor(tOrdens *vet, int N) {
    float media = 0;
    for (int i = 0; i < N; i++) {
        media += vet[i].valor;
    }
    media /= (float)N;
    return media;
}

void clientes_acima(tOrdens *vet, int N, float media) {
    printf("Clientes que gastaram acima da media:\n");
    for (int i = 0; i < N; i++) {
        if (vet[i].valor > media) {
            printf("%s\n", vet[i].nome);
        }
    }
}

void cliente_maior(tOrdens *vet, int N) {
    float maiorvalor = 0;
    int indice = 0;
    for (int i = 0; i < N; i++) {
        if (vet[i].valor > maiorvalor) {
            maiorvalor = vet[i].valor;
            indice = i;
        }
    }
    printf("O cliente que mais gastou foi: %s\n", vet[indice].nome);
}

int main(void) {
    int N;
    float media;
    printf("Digite o numero de OS: \n");
    scanf("%d", &N);
    
    tOrdens *vet = (tOrdens*)malloc(N * sizeof(tOrdens));
    
    if (vet == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    preencher(vet, N);
    media = media_valor(vet, N);
    
    printf("A media de valor eh de: R$%.2f\n", media);
    
    clientes_acima(vet, N, media);
    cliente_maior(vet, N);
    
    return 0;
}
