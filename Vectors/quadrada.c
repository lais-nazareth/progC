#include <stdio.h>

int main(void){
    int matriz[5][5], v, dp = 0, ds = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j <5; j++){
            printf("Digite o valor do elemento [%d][%d]: \n", i+1, j+1);
            scanf("%d", &v);
            matriz[i][j] = v;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j <5; j++){
            if (matriz[i][j] != matriz[j][i]){
                printf("A matriz nao eh simetrica!\n");
                break;
            }
            else if(matriz[i][j] == matriz[j][i] && i == 4 && j == 4){
                printf("A matriz eh simetrica");
            }
        }
    }

    for (int i = 0; i < 5; i++){
        dp += matriz[i][i];
    }
    printf("A soma da DP eh: %d\n", dp);
    for (int i = 0; i < 5; i++){
        ds = matriz[i][4-i];
    }
    printf("A soma da DS eh: %d\n", ds);


}