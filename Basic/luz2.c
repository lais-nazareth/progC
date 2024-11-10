#include <stdio.h>
int main(void){
    float salario = 0.0f; // Inicialização
    float quant = 0.0f;   // Inicialização
    float valorluz = 0.0f; // Inicialização
    float valorkw = 0.0f;  // Inicialização
    printf("Valor do salario minimo: ");
    scanf("%f", &salario);
    printf("Quantidade de kW gasta: ");
    scanf("%f", &quant);
    valorkw = 0.1 * salario;
    valorluz = valorkw * quant;
    printf("O valor de um kw eh: %.2f\nO valor da conta de luz eh: %.2f", valorkw, valorluz);
    return 0;
}
