/*Crie um programa que leia 6 valores inteiros e, em seguida, mostre na tela os
valores lidos na ordem inversa. Utilizar laço de repetição e vetor.*/

#include <stdio.h>
#define TAM 6
//gostei
int main()
{
    int inverso = 0, valores[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Informe o %d valor: ", i);
        scanf("%d", &valores[i]);
    }
    printf("\nValores na ordem inversa: ");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d", valores[i]);
    }
    
    return 0;
}