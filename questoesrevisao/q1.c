#include <stdio.h>
#include <string.h>

int palim(int num){

    char charnum[6];
    int tamChar;
    sprintf(charnum, "%d", num); // array, tipo, conjunto

    tamChar = strlen(charnum);

    for (int i = 0; i < tamChar; i++){
        if (charnum[i] != charnum[tamChar-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int n;
    printf("Digite o numero: \n");
    scanf("%d", &n);

    if (palin(n)){
        printf("%d eh palindromo!", n);
    }
    else {
        printf("%d nao eh palindromo")
    }

    return 0;
}