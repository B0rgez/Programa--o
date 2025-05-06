#include <stdio.h>
#include <math.h>

int main()
{
    double raio, area, pi = 3.14159;  

    printf("Informe o valor do raio: ");
    scanf("%lf", &raio);

    area = pi * pow(raio, 2);

    printf("Area da Circunferencia: %.4lf", area);

    return 0;
}