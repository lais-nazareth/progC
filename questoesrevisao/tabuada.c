#include <stdio.h>

int main(void){
    int tam = 5, n = 1;
    int tabuada[tam][tam];


    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            tabuada[i][j] = (i+1)*(j+1);
        }
    }


    while (n > 0){
        printf("Digite o valor que voce quer saber a tabuada: \n");
        scanf("%d", &n);
        if (n < 0){
            printf("nao eh valido!");
            break;
        }
        for (int i = 0; i < 5; i++){
        printf("%d ", tabuada[n-1][i]);
        }
        printf("\n");
    }

    return 0;
}