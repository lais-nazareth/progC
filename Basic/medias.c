#include <stdio.h>

int main(void) {
    // declarar variaveis
    float nota1, nota2, nota3, media;
    // ler as notas
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    // calcular
    media = (nota1+nota2+nota3)/3;
    // saida
    printf("a media eh %.2f", media);
    return 0;
}