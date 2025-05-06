#include <stdio.h>
#define TAM 5

int main()
{
    int i, codigo;
    float num[TAM];

    for (i = 1; i < TAM; i++)
    {
        printf("Preencha o vetor[%d]: ", i);
        scanf("%f", &num[i]);
    }

    printf("Escolha entre 1,2 ou 0: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 0:
        printf("Codigo Finalizado");
        break;
    case 1:
        printf("Ordem Direta:");
        for (i = 1; i < TAM; i++)
        {
            printf("[%.0f]", num[i]);
        }
        break;
    case 2:
        printf("Ordem Inversa:");

        for (i = num[i]; i > 0; i--)
        {
            printf("[%.0f]", num[i]);
        }
        break;

    default:
        printf("Codigo Invalido");
        break;
    }

    return 0;
}