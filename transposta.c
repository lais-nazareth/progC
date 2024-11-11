#include <stdio.h>

int main(void){
    int matriz[10][5], transposta[5][10], c;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 5; j++){
            matriz[i][j] = c;
            c++;
        }
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 10; j++){
            transposta[i][j] = matriz[j][i];
        }
    }
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 10; j++){
            printf("%d ", transposta[i][j]);
        }
    }
    return 0;
}