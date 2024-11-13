#include <stdio.h>

int c = 0;

int quociente(int a, int b){
    if (a - b >= 0){
        c++;
        quociente(a-b, b);
        
    }

    return c;
}

int main(void){
    int a, b, q;
    printf("Digite o numerador: \n");
    scanf("%d", &a);
    printf("Digite o denominador: \n");
    scanf("%d", &b);

    q = quociente(a, b);
    printf("%d", q);

    return 0;
}