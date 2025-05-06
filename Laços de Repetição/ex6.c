/*Escreva um algoritmo que calcule a média dos números digitados pelo usuário,
se eles forem pares. Termine a leitura se o usuário digitar zero (0).*/

#include <stdio.h>

int main()
{
    float media;
    int numero;
    int contador = 0;
    int aux = 0;

    do
    {
        printf("\nInforme o numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            aux += numero; //o 'aux' foi implementado como auxiliar no contador
            contador++;
        }

    } while (numero != 0);

    media = aux / (contador - 1) ;

    printf("\nAuxiliar: %d", aux);
    printf("\nContador: %d", contador);
    printf("\nResultados: %.2f", media);

    return 0;
}