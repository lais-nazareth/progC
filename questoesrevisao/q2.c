#include <stdio.h>

float media(float nota[]){
    float m, maior = 0.0, menor = 11;
    for (int i = 0; i < 6; i++){
        m += nota[i];
    }
    for (int i = 0; i < 6; i++){
        if (nota[i] > maior){
            maior = nota[i];
        }
    }
    for (int i = 0; i < 6; i++){
        if (nota[i] < menor){
            menor = nota[i];
        }
    }
    m -= maior+menor;
    m /= 4;
    return m;
}


int main(void){
    float notas[6];
    for (int j = 0; j < 30; j++){
        float m = 0;
        for (int i = 0; i < 6; i++){
            printf("Digite a nota %d: ", i+1);
            scanf("%f", &notas[i]);
        }
        m = media(notas);
        printf("A media eh: %.1f\n", m);
    }
    return 0;
}