#include <stdio.h>
#include <math.h>
int main()
{

    float valor_x, resultado = 0.0;
    int fatorial = 1;
    

    printf("Digite os valores de X: ");
    scanf("%f", &valor_x);


    for (int i = 1; i <= 10; i++)
    {
        fatorial *= i;

        if (i % 2 == 0)
        {

            resultado -= (pow(valor_x, i) / fatorial);
            printf("\nPar, portanto, resultados: %f", resultado);
        }
        else
        {
            resultado += (pow(valor_x, i) / fatorial);
            printf("\nImpar, portanto, resultados: %f", resultado);
        }
    }
    return 0;
}