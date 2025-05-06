// Faça um programa que imprima todos os números ímpares de 50 a 300.
#include <stdio.h>
// feita
int main()
{

    for (int i = 50; i <= 300; i++)
    {

        // agora quero que o programa identifica quem sao impares.

        if (i % 2 != 0)
        {
            printf("\nOs impares : %d", i);
        }

        // printf("\nOs numeros %d: %d",i, impar);
    }

    return 0;
}