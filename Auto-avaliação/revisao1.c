/*Lista 2 nº 01*/

#include <stdio.h>
#include <math.h>

int main (){

    float raio, altura, area_t, valor_aluminio;
    const float custo = 100;
    const float pi = 3.14;

    printf("Valor do raio: ");
    scanf("%f", &raio);

    printf("\nValor da altura: ");
    scanf("%f", &altura);

    area_t = (pi * pow(raio,2) * 2) + (2*pi* raio * altura);
    valor_aluminio = area_t * custo;

    printf("Valor da area: R$ %.2f", area_t);
    printf("\nValor total do aluminio: R$ %.2f", valor_aluminio);

    return 0;
}