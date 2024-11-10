#include <stdio.h>

int main(void){
    float base, altura, area, perimetro;
    // ler valores
    printf("Digite o tamanho da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    area = base * altura;
    perimetro = 2 * base + 2 * altura;
    printf("O valor da area e %.2f m2\n", area);
    printf("O valor do perimetro e %.2f\n", perimetro);
    return 0;
}