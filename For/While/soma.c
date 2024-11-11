#include <stdio.h>

int main(void){
    int A, B, i, soma = 0;
    printf("Digite o valor de A: \n");
    scanf("%d", &A);
    printf("Digite o valor de B: \n");
    scanf("%d", &B);
    if (A > B){
        printf("A soma nao sera realizada");
    }
    else{
        for (i=A+1; i<B; i++){
        soma += i;
    }
    printf("A soma eh: %d", soma);
    }
    

    return 0;

}