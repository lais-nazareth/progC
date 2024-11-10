#include <stdio.h>

int main(void){

    float a, b, c;

    printf("Digite os tres lados de um triangulo: \n");
    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c || a + c > b || b + c > a){
        if(a == b && b == c){
            printf("O triangulo eh equilatero");
        }
        else if(a != b && b != c){
            printf("O triangulo eh escaleno");
        }
        else{printf("O triangulo eh isosceles");}
    }
    else{printf("Nao eh triangulo");}
}