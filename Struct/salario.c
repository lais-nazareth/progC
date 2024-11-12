#include <stdio.h>
#include <stdlib.h>

struct funcionario{
    float salario;
    float vendas;
    float salario_final;
};

typedef struct funcionario Funcionarios;

void preencher(Funcionarios *vet, int N){
    for (int i=0; i<N; i++){
        printf("Digite o salario do funcionario %d: \n", i+1);
        scanf("%f", &vet[i].salario);
        printf("Digite as vendas do funcionario %d: \n", i+1);
        scanf("%f", &vet[i].vendas);
        vet[i].salario_final = vet[i].salario + (vet[i].vendas * 0.06); 
    }
}

int main(void){
    int N;
    printf("Digite o numero de funcionarios: \n");
    scanf("%d", &N);
    Funcionarios *vet = (Funcionarios*)malloc(N * sizeof(Funcionarios));
    preencher(vet, N);
    for (int i = 0; i < N; i++){
        printf("O salario do funcionario %d eh: R$%.2f\n", i+1, vet[i].salario_final);
    }
    return 0;
}