#include <stdio.h>

int mdc(int x, int y){
    if (y <= x && x % y == 0){
        return y;
    }
    if (x < y){
        return mdc(y, x);
    }
    else {
        return mdc(y, x % y);
    }
}

int main(void){
    int x, y, m;
    printf("Digite o numero x: \n");
    scanf("%d", &x);
    
    printf("Digite o numero y: \n");
    scanf("%d", &y);

    m = mdc(x, y);

    printf("%d", m);
}