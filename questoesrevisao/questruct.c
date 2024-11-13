#include <stdio.h>
#include <stdlib.h>

struct turma{
    char nome[40];
    float nota[4];
    int ano;
    float media;
};

typedef struct turma Aluno;

void preencher(Aluno *vet, int n){
    float med;
    for (int i = 0; i < n; i++){
        printf("Digite o nome do aluno: \n");
        scanf(" %[^\n]s", vet[i].nome);
        printf("Digite a nota 1 do aluno: \n");
        scanf("%f", &vet[i].nota[0]);
        printf("Digite a nota 2 do aluno: \n");
        scanf("%f", &vet[i].nota[1]);
        printf("Digite a nota 3 do aluno: \n");
        scanf("%f", &vet[i].nota[2]);
        printf("Digite a nota 4 do aluno: \n");
        scanf("%f", &vet[i].nota[3]);
        printf("Digite o ano de ingresso do aluno: \n");
        scanf("%d", &vet[i].ano);
    }
    for (int i = 0; i < n; i++){
        med = (vet[i].nota[0] + vet[i].nota[1] + vet[i].nota[2] + vet[i].nota[3])/4;
        vet[i].media = med;
    }
}

float maior_media(Aluno *vet, int n){
    float maior = 0.0;
    for (int i = 0; i < n; i++){
        if (vet[i].media > maior){
            maior = vet[i].media;
        }
    }
    return maior;
}

int main(void){
    int n;
    float maior;
    printf("Digite o numero de alunos: \n");
    scanf("%d", &n);
    Aluno *vet = (Aluno*)malloc(n*sizeof(Aluno));
    preencher(vet, n);
    maior = maior_media(vet, n);
    for (int i = 0; i < n; i++){
        if (vet[i].media >= maior){
            printf("Maior media: %s", vet[i].nome);
        }
    }
    return 0;
}