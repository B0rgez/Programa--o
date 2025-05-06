#include <stdio.h>
#define TAM 10

int main()
{

    int num[TAM], soma = 0, impares = 1, par = 1, contador = 1, acumulador = 0;

    for (int i = 1; i < TAM; i++)
    {
        // INFORMANDO OS VALORES
        printf("\nInforme 10 numeros: ");
        scanf("%d", &num[i]);
    }
    // MANIPULANDO OS VETORES
    for (int i = 0; i < TAM; i++)
    {

        if (num[i] % 2 == 0)
        {
            // quando o valor for par, irá somar
            soma += num[i];
            acumulador += par;
        }
        else
        {
            // quando for impar, imprimirá somente o impar
            contador += impares;
        }
    }
    printf("\n_________________________________________________\n");
    // IMPRIMINDO OS VALORES MANIPULADOS
    printf("\nOs pares digitados: %d", acumulador);
    printf("\nA soma desses pares: %d", soma);
    printf("\nImpares digitados: %d", contador);

    return 0;
}