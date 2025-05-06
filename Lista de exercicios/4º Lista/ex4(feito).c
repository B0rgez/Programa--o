/*Ler um número qualquer, inteiro e positivo, e calcular o seu fatorial. */
#include <stdio.h>

int main()
{
    int numero, fatorial = 1;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);
    
    for (int i = 1; i <= numero; i++)
    {
        fatorial *= i;
        printf("\n%d", fatorial);
    }
    printf("O valor fatorial de %d! e %d", numero, fatorial);
    return 0;
}