#include <stdio.h>
int main(void){
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite o peso 1: ");
    scanf("%f", &peso1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite o peso 2: ");
    scanf("%f", &peso2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite o peso 3: ");
    scanf("%f", &peso3);
    media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1 + peso2 + peso3);
    printf("A media ponderada eh %.2f", media);
}