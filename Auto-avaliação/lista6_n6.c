#include <stdio.h>
#define TAM 6
int main()
{

    int valores[TAM];

    for (int i = 1; i < TAM; i++)
    {
    printf("Preencha o vetor [%d]: ", i);
    scanf("%d", &valores[i]);
    }

    printf("Ordem Inversa:\n");
    for (int i = 6; i > 0; i--) //para ordem inversa, começa do final para terminar do começo.s
    {
        printf("[%d]", i);
    }

    return 0;
}