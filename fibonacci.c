#include <stdio.h>

int main(void){
    int n, v;
    int fib[n], a = 1, b = 1, c = 0;
    fib[0] = 1;
    fib[1] = 1;
    printf("Digite o numero de fibonacci que voce quer calcular: \n");
    scanf("%d", &n);

    for (int i = 2; i < n; i++){
        c = a;
        a = b;
        b = c + b;
        fib[i] = b;
    }

    printf("Digite o valor para verificacao: \n");
    scanf("%d", &v);

    for (int i = 0; i < n; i++){
        printf("%d ", fib[i]); 
    }
    
    for (int i = 0; i < n; i++){
        if (v == fib[i]){
            printf("\nValor incluso!\n");
            break;
        }
    }
    return 0;
}
