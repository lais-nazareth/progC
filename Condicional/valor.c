#include <stdio.h>

int main(void){
    float preco;
    printf("Digite o preco do produto: \n");
    scanf("%f", &preco);
    if (preco <= 50.0){
        preco += preco * 0.05;
    }
    else if (preco > 50.0 && preco <= 100){
        preco += preco * 0.1;
    }
    else if (preco > 100.0){
        preco += preco * 0.15;
    }
    if (preco <= 80.0){
        printf("Barato\n");
    }
    else if (preco > 80.0 && preco <= 120.0){
        printf("Normal\n");
    }
    else if (preco > 120.0 && preco <= 200.0){
        printf("Caro\n");
    }
    else if (preco > 200.0){
        printf("Muito caro\n");
    }
    return 0;
}