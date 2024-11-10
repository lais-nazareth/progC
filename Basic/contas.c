#include <stdio.h>
int main(void){
    float salario, conta1, conta2;
    printf("Digite o valor do salario de Joao: ");
    scanf("%f", &salario);
    printf("Digite o valor da primeira conta de Joao: ");
    scanf("%f", &conta1);
    printf("Digite o valor da segunda conta de Joao: ");
    scanf("%f", &conta2);
    salario -= (conta1*1.02 + conta2*1.02);
    printf("O restante do salario eh: %.2f", salario);
    return 0;
    }