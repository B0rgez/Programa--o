#include <stdio.h>
#define VETOR 5

int main()
{
    float posicao[VETOR];
    int codigo;

    // Leitura dos números reais
    for (int i = 0; i < VETOR; i++)
    {
        printf("Inserir o %d numero: \n", i + 1);
        scanf("%f", &posicao[i]);
    }

    printf("Informe o codigo: (0 - Sair) (1 - Ordem Direta) (2 - Ordem Inversa):\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 0:
        printf("\nFinalizado\n");
        break;
    case 1:
        printf("\nOrdem Direta\n");
        for(int i = 0; i < VETOR;i++){ //Direta
            printf("[%.0f]", posicao[i]);
        }
        break;
    case 2:
        printf("\nOrdem Inversa\n");
        for(int i = VETOR; i > 0; i--){ //Inversão
            printf("[%.0f]", posicao[i]);
        }
        break;
    default:
        printf("\nCodigo Invalido\n");
        break;
    }

    return 0;
}