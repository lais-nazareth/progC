#include <stdio.h>

int main(void){

    int num[100], maior = 0;

    for (int i=0; i<100; i++){
        num[i] = i+1;
    }

    for (int i = 0; i<100; i++){
        if (num[i] % 2 == 0){
            num[i] /= 2;
        }
        else{
            num[i] *= 3;
        }
    }

    for (int i=0; i<100; i++){
        if (num[i] > maior){
            maior = num[i];
        }
    }

    printf("%d", maior);
    return 0 ;
}