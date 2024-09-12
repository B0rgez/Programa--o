// Faça um programa que leia um numero inteiro e imprima o seu sucessor e o seu antecessor.
#include<stdio.h>

int main(){

    int sucessor, antecessor, numero;

    printf("Informe o numero: \n");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("O sucessor e %d e o Antecessor e %d", sucessor, antecessor);

    return 0;

}
// FEITA COM SUCESSO