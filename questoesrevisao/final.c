#include <stdio.h>

void preencher(float *x, float *y){
    for (int i = 0; i < 10; i++){
        printf("Digite um valor para x[%d]: \n", i);
        scanf("%f", &x[i]);
        printf("Digite um valor para y[%d]: \n", i);
        scanf("%f", &y[i]);
    }
}

void soma(float *x, float *y, float *z){
    for (int i = 0; i < 10; i++){
        z[i] = (x[i] + y[i]);
    }
}

void sub(float *x, float *y, float *z){
    for (int i = 0; i < 10; i++){
        z[i] = (x[i] - y[i]);
    }
}

void verificar(float *x, float *y, float el){
    for (int i = 0; i < 10; i++){
        if (el == x[i] || el == y[i]){
            printf("Elemento está nos vetores");
            return;
        }
    }
    printf("\nElemento nao encontrado\n");
}

void mostrar(float *x, float *y){
    printf("x = ");
    for (int i = 0; i < 10; i++){
        printf("%.2f ", x[i]);
    }
    printf("\n");
    printf("y = ");
    for (int i = 0; i < 10; i++){
        printf("%.2f", y[i]);
    }
}

int main(void){
    int op;
    float vet1[10], vet2[10], vetsoma[10], vetsub[10];
    float el;
    while (1){
    printf("-------------------------MENU-------------------------\n");
    printf("Digite uma opcao:\n1 - preencher\n2 - mostrar\n3 - buscar elemento\n4 - somar\n5 - subtrair\n6 - sair\n");
    scanf("%d", &op);
    if (op == 1){
        preencher(vet1, vet2);
    }
    else if (op == 2){
        mostrar(vet1, vet2);
        printf("\n");
    }
    else if (op == 3){
        printf("\nDigite o elemento que voce quer buscar: \n");
        scanf("%f", &el);
        verificar(vet1, vet2, el);
        printf("\n");
    }
    else if (op == 4){
        soma(vet1, vet2, vetsoma);
        for (int i = 0; i < 10; i++){
            printf("%f ", vetsoma[i]);
        }
        printf("\n");
    }
    else if (op == 5){
        sub(vet1, vet2, vetsub);
        for (int i = 0; i < 10; i++){
            printf("%f ", vetsub[i]);
        }
        printf("\n");
    }
    else if (op == 6){
        break;
    }
    }
    return 0;
}