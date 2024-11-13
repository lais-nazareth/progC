#include <stdio.h>

int caracteres(char *array){
    if (*array == '0'){
        return 0;
    }
    else{
        return caracteres(array+1)+1;
    }
}

int main(void){
    char letras[30];
    int ch;
    printf("Digite o array: \n");
    scanf(" %s", letras);
    ch = caracteres(letras);
    printf("A string tem %d caracteres!\n", ch);
    return 0;
}