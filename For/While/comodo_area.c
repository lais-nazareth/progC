#include <stdio.h>

int main(void){
    float lado1 = 0.0, lado2 = 0.0, area = 0.0;
    while(lado1 >= 0.0 && lado2 >= 0.0){
        printf("Digite a largura do comodo: \n");
        scanf("%f", &lado1);
        printf("Digite o comprimento do comodo: \n");
        scanf("%f", &lado2);
        area += lado1*lado2;
    }
    printf("A area total da casa eh: %d", area);
    return 0;
}