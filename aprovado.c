#include <stdio.h>

int main(void){
    char nomes[10][50];
    int notas_aluno[10][2];
    int media[10];
    int i = 0;

    for (i=0; i<10; i++){
        printf("Digite o nome do aluno %d: \n", i+1);
        scanf("%49s", &nomes[i]);

        for (int j=0; j<2; j++){
            printf("Digite a nota %d do aluno %d: \n", j+1, i+1);
            scanf("%d", &notas_aluno[i][j]);
        }
    }
    for (i=0; i<10; i++){
        media[i] = (notas_aluno[i][0]+notas_aluno[i][1])/2;
        
    }
    for (i=0; i<10; i++){
        if (media[i] >= 6){
            printf("Aluno aprovado: %s\n", nomes[i]);
        }
    }
    return 0;
}