#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipoAluno{
    char mat[8];
    char nome[40];
    float CR;
};

typedef struct tipoAluno Aluno;

void preencher(Aluno *vetor, int N){
    for (int i=0;i<N;i++){
        printf("Digite o nome do aluno: \n");
        scanf(" %[^\n]s", vetor[i].nome);

        printf("Digite a matricula: \n");
        scanf("%s", vetor[i].mat);

        printf("Digite o CR do aluno: \n");
        scanf("%f", &vetor[i].CR);
    }
}

int semestre120(Aluno *vetor, int num){
    int cont = 0;
    for(int i=0;i<num;i++){
        if(strncmp(vetor[i].mat, "120", 3) == 0){
            cont++;
        }
    }
    return cont;
}



int main(void){
    int N, total;
    Aluno *vet;
    printf("Digite o numero de alunos: \n");
    scanf("%d", &N);
    vet = (Aluno*)malloc(N*sizeof(Aluno));
    preencher(vet, N);
    total = semestre120(vet, N);
    printf("%d alunos se matricularam no primeiro semestre de 2020", &total);
    return 0;
}