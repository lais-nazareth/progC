#include <stdio.h>
int main(void){
    int hora, minutos;
    printf("Digite a hora: ");
    scanf("%d", &hora);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    hora *= 60;
    minutos *= 60;
    hora += minutos/60;
    minutos %= 60;
    printf("O tempo eh de %d minutos e %d segundos", hora, minutos);
    return 0;
}