#include <stdio.h>
#include <string.h>

int compara(char *A, char *B)
{
    int i=0, j, posIgual = 0, ocorre = 0, tamA, tamB;
    tamB = strlen(B);
    tamA = strlen(A);

    for (i; i < tamA; i++){
            for (j=posIgual; j < tamB; j++){
                if (A[i] == B[j]){
                    posIgual = j+1;
                    ocorre++;
                    break;
                }
            }
            if (ocorre != i+1){
                return 0;
            }
        }
        return 1;
}
int main(void){
    char A[40], B[100];
    int vdd =0;

    printf("Digite a palavra A: \n");
    fgets(A, 20, stdin);
    printf("Digite a sequencia B: \n");
    fgets(B, 200, stdin);

    vdd = compara(A, B);

    if (vdd){
        printf("A esta contida em B!\n");
    }
    else {
        printf("A nao esta contida em B!\n");
    }
    return 0;
}