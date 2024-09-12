#include <stdio.h>

int main()
{

    int numero;
    
    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1: // ao usar numero no case, nao sua aspas ("" e '')
        printf("SEGUNDA");
        break;
    case 2:
        printf("TERCA");
        break;
    case 3:
        printf("QUARTA");
        break;
    case 4:
        printf("QUINTA");
        break;
    case 5:
        printf("SEXTA");
        break;
    default:
        printf("Erro");
        break;
    }

    return 0;
}