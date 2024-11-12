#include <stdio.h>
#include <stdlib.h>

struct Populacao{
    float salario;
    int idade;
    int filhos;
};

typedef struct Populacao populacao;

void preencher(populacao *vetor, int N){
    for (int i=0;i<N;i++){
        printf("Digite o salario do habitante %d:\n", i+1);
        scanf("%f", &vetor[i].salario);
        printf("Digite a idade do habitante %d:\n", i+1);
        scanf("%d", &vetor[i].idade);
        printf("Digite o numero de filhos do habitante %d:\n", i+1);
        scanf("%d", &vetor[i].filhos);
    }
}

int media_salario(populacao *vetor, int N){
    int media = 0;
    for (int i=0; i<N; i++){
        media += vetor[i].salario;
    }
    media /= N;
    return media;
}

int media_filhos(populacao *vetor, int N){
    int mediaf = 0;
    for (int i=0; i<N; i++){
        mediaf += vetor[i].filhos;
    }
    mediaf /= N;
    return mediaf;
}

float maior_salario(populacao *vetor, int N){
    float maior = 0;
    for (int i=0; i<N; i++){
        if (vetor[i].salario > maior){
            maior = vetor[i].salario;
        }
    }
    return maior;
}

int main(void){
    int N = 20;
    int ms, mf, maiors;
    populacao *vetor;
    vetor = (populacao*)malloc(N*sizeof(populacao));
    preencher(vetor, N);
    ms = media_salario(vetor, N);
    mf = media_filhos(vetor, N);
    maiors = maior_salario(vetor, N);
    printf("A media salarial eh: %d\n", ms);
    printf("A media de filhos eh: %d\n", mf);
    printf("O maior salario eh de: R$%.2f", maiors);
    return 0;
}