// Crie um programa que leia a base e a altura de um retângulo e imprima o valor do perímetro e área.
// SUCESSO!!
#include<stdio.h>

int main(){

    printf("*\n");
    printf("**\n");
    printf("* *\n");
    printf("*  *\n");
    printf("*   *\n");
    printf("*    *\n");
    printf("*     *\n");
    printf("********\n");
    
    int base, area, perimetro;
    float altura;

    printf("Informe o valor da base: \n");
    scanf("%d", &base);

    printf("Informe o valor da altura:  \n");
    scanf("%f", &altura);

    area = base * altura;

    perimetro = base + altura;

    printf("O valor da area e: %d, ja do perimetro e: %d", area, perimetro);

    return 0;
}