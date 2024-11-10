#include <stdio.h>

void soma(int a, int b){
    printf("A soma eh: %d\n", a + b);
}

void sub(int a, int b){
    printf("A subtracao eh %d\n", a - b);
}

void mult(int a, int b){
    printf("A multiplicacao eh %d\n", a * b);
}

void div(int a, int b){
    if(b == 0){
        printf("Nao eh possivel dividir por 0\n");
    }
    else{
        printf("A divisao eh %d\n", a/b);
    }
}

int main(void){
    int a, b;
    printf("Digite os valores de a e b:\n");
    scanf("%d %d", &a, &b);
    soma(a, b);
    sub(a, b);
    mult(a, b);
    div(a, b);
    return 0;
}