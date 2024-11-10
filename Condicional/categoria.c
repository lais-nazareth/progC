#include <stdio.h>

int main(void){
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade <= 4){
        printf("Categoria Baby\n");
    }
    else if (idade >= 5 && idade <= 10){
        printf("Categoria Infantil\n");
    }
    else if (idade >= 11 && idade <= 17){
        printf("Categoria Juvenil\n");
    }
    else if (idade >= 18){
        printf("Categoria Master\n");
    }
    return 0;
}