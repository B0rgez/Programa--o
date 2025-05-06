/*Implemente um programa que receba 10 números inteiros e mostre:
• Os números pares digitados;
• A soma dos números pares digitados;
• Os números ímpares digitados;
• A quantidade de números ímpares digitados;*/

#include <stdio.h>
#define TAM 10

int main()
{

    int valor[TAM], par = 0, impar = 0, soma , contador;

    for (int i = 1; i < TAM; i++)
    {
        printf("Informe o [%d] valor: ", i);
        scanf("%d", &valor[i]);
    }

    for(int i = 1; i < TAM; i++){

        if (valor[i] % 2 == 0)
        {
            par = valor[i];
            soma += par;
        }else{
            impar = valor[i];
            contador += 1;
        }
    }

    for(int i = 1; i < TAM; i++){
    printf("\nSeus numeros pares: %d",par);
    printf("\nSeus numeros impares: %d",impar);
    }
    printf("\n___________________________________________\n");
    printf("\nA soma dos pares: %d",soma);
    printf("\nQuantidade de numeros impares: %d", contador);
    return 0;
}