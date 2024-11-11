#include <stdio.h>

int main(void){
    float a, peso = 0.0;
    int i;
    for(i = 1; i <= 25; i++) {
        printf("Digite o peso da caixa %d: ", i);
        scanf("%f", &a);
        peso += a;
    }
    printf("O peso total eh: %.2f\n", peso);
    return 0;
}