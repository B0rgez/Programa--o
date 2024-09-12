// Crie um programa que leia dois números inteiros e imprima o dividendo, divisor, quociente e resto.
// SUCESSO
#include<stdio.h>

int main (){

    int dividendo, divisor, quociente, resto;

    printf ("Digite o dividendo:  \n");
    scanf("%d", &dividendo);

    printf ("Digite o divisor:  \n");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("O resultado do quociente e: %d, com resto %d", quociente, resto);

    return 0;
}