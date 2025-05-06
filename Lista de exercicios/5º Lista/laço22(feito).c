#include <stdio.h>

int main()
{

    int numero, sequencia;
    float valor_S = 0;

    printf("Informe o numero: ");
    scanf("%d", &numero); 

    sequencia = numero;

    for (int i = 0; i < numero; i++)
    {
        valor_S += (float)i /(float) sequencia;
        printf("\n%d / %d", i, sequencia);
        sequencia--; //usado para auxiliar na contagem.
    }
    printf("Valor: %.2f", valor_S);
    
       
    return 0;
}