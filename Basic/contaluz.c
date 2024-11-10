#include <stdio.h>
int main(void) {
    char nome[100];
    float consumo, valor, total;
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("Digite o consumo mensal em kW: ");
    scanf("%f", &consumo);
    printf("Digite o preco em reais de 1 kW: ");
    scanf("%f", &valor);
    total = consumo*valor;
    printf("O total que %s deve pagar na conta de luz eh %.2f", nome, total);
    return 0;
}