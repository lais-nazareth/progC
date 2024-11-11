#include <stdio.h>

int main(void){
    int qtd = 1, i;
    float preco, total = 0.0;

    for (i=0; i < 50; i++){
        printf("Digite a quantidade do produto %d:\n", (i+1));
        scanf("%f", &qtd);
        printf("Digite o preco do produto %d:\n", (i+1));
        scanf("%d", &preco);
        total += preco*qtd;
    }
    printf("O total foi: %.2f", total);
    return 0;
}