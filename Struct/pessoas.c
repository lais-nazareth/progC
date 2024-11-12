#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    float altura;
    int idade;
    char olhos;
};

typedef struct pessoa tPessoa;

void preencher(tPessoa *vet, int N){
    for (int i = 0; i < N; i++){
        printf("Digite a altura da pessoa %d: \n", i+1);
        scanf("%f", &vet[i].altura);
        printf("Digite a idade da pessoa %d: \n", i+1);
        scanf("%d", &vet[i].idade);
        printf("Digite a cor dos olhos da pessoa %d: \n", i+1);
        scanf(" %c", &vet[i].olhos);
    }
}

int media_idades(tPessoa *vet, int N){
    int mediaidade = 0;
    for (int i = 0; i < N; i++){
        mediaidade += vet[i].idade;
    }
    mediaidade /= N;
    return mediaidade;
}

float maior(tPessoa *vet, int N){
    float maior = 0.0;
    for (int i = 0; i < N; i++){
        if (vet[i].altura > maior){
            maior = vet[i].altura;
        }
    }
    return maior;
}

float menor(tPessoa *vet, int N){
    float menor = vet[0].altura;
    for (int i = 0; i < N; i++){
        if (vet[i].altura < menor){
            menor = vet[i].altura;
        }
    }
    return menor;
}

int castanho(tPessoa *vet, int N, float media){
    int c = 0;
    for (int i = 0; i < N; i++){
        if (vet[i].altura > media && vet[i].olhos == 'C'){
            c++;
        }
    }
    return c;
}

int main(void){
    int N, cas, media_id;
    float maior_al, menor_al;
    printf("Digite o numero de pessoas: \n");
    scanf("%d", &N);

    tPessoa *vet = (tPessoa*)malloc(N * sizeof(tPessoa));

    preencher(vet, N);

    media_id = media_idades(vet, N);
    maior_al = maior(vet, N);
    menor_al = menor(vet, N);
    cas = castanho(vet, N, media_id);

    printf("A media das idades eh de: %d\n", media_id);
    printf("A maior altura eh de: %.2f\n", maior_al);
    printf("A menor altura eh de: %.2f\n", menor_al);
    printf("A qtd de pessoas que tem olhos castanhos e idade acima da media eh de: %d\n", cas);
    return 0;

}