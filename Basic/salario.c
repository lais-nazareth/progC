#include <stdio.h>
int main(void) {
    float salario, vendas;
    printf("Digite o valor fixo do salario: ");
    scanf("%f", &salario);
    printf("Digite o valor das vendas: ");
    scanf("%f", &vendas);
    salario += 0.04 * vendas;
    printf("O valor total do salario eh: %.2f", salario);
    return 0;
}