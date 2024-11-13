#include <stdio.h>

void imprimeSerie(int i, int j, int k) {
    if (i<=j) {
    printf("%d\n", i);
    imprimeSerie(i+k,j,k);
    }

}
int main(void){
    int numi, numj, numk;
    printf("Digite o numero i: \n");
    scanf("%d", &numi);
    printf("Digite o numero j: \n");
    scanf("%d", &numj);
    printf("Digite o numero k: \n");
    scanf("%d", &numk);

    imprimeSerie(numi, numj, numk);
}