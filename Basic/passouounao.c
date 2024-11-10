#include <stdio.h>
int main(void){
    float n1, n2, n3, media;
    printf("Digite as notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1+n2+n3)/3;
    if(media >= 6)
        printf("Aprovado");
    else if(media < 4) 
        printf("Reprovado");
    else
        printf("VS");
    return 0;
}