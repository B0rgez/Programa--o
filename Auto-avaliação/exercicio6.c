/*Lista 3 questao 04*/
#include <stdio.h>

int main()
{

    int x, y;

    printf("informe o X e Y: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("Primeiro Quadrante");
    }
    else if (x < 0 && y > 0)
    {
        printf("Segundo Quadrante");
    }
    else if (x < 0 && y < 0)
    {
        printf("Terceiro Quadrante");
    }
    else if (x > 0 && y < 0)
    {
        printf("Quarto quadrante");
    }
    else
    {
        printf("Operacao invalida");
    }

    return 0;
}