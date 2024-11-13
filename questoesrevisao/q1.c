#include <stdio.h>
#include <string.h>

int main(void){
    char num[20] = "I";
    int keep = 1;
    while (keep == 1) {
        int pal = 1;
        printf("Digite um numero: \n");
        scanf("%s", num);
        int len = strlen(num);
        for (int i = 0; i<len; i++){
            if (num[i] == '-'){
                keep = 0;
            }
        }
        for (int i = 0; i<len; i++){
            if (num[i] != num[len-i-1]){
                pal = 0;
            }
        }
       if (pal == 0){
            printf("O numero nao eh palindromo!\n");
        } else{
            printf("O numero eh palindromo!\n");
        }
    }
    
}