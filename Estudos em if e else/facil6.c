/*Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.*/
//CLASSICO

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("\nNumero (%d) par", numero);
    }else{
        printf("\nNumero (%d) Impar",numero);
    }
    

    return 0;
}