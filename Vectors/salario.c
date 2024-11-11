#include <stdio.h>

int main(void){
    float salarios[10], media = 0, qtd = 0, salario;
    for (int i = 0; i<10; i++){
        printf("Digite o salario do funcionario: \n");
        scanf("%f", &salario);
        salarios[i] = salario;
        media += salario;
    }
    media /= 10;
    for (int i=0; i<10; i++){
        if (salarios[i] > media){
            qtd += 1;
        }
    }
    printf("Quantidade acima da media: %.0f", qtd);
    return 0;
}