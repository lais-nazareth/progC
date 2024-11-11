#include <stdio.h>

int main (void){
    float altura, peso;
    char sexo;

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);
    printf("Digite o sexo (M/F): \n");
    scanf(" %c", &sexo);

    if (sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh %f", peso);
    }
    else if (sexo == 'M'){
        peso = (72.7 * altura) - 58.0;
        printf("Seu peso ideal eh %f", peso);
    }
    return 0;
}