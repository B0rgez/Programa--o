#include <stdio.h>
#include <math.h>
.
int main()
{

    int num, resultado;

    printf("Informe qualquer numero inteiro: ");
    scanf("%d", &num);

    // divisores de 12 = {1,2,3,4,6,12}
    // Divisores de 9 = {1,3,9}

    for (int i = 2; i < sqrt(num); i++) // condição de parada?
    {
        printf("\n%d / %d", num, i);

        if (num % i == 0)
        {
        }
        resultado = i;
    }
    printf("\nOs divisores de %d sao: %d", num, resultado);

    return 0;
}