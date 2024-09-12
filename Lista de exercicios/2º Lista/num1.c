#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor = 100;
    float raio, altura, preco, area_lata, area_base, area_lado;
    const float PI = 3.1415;

    printf("Inserir raio do cilindro:\n");
    scanf("%f", &raio);

    printf("Insira altura do cilindro:\n");
    scanf("%f", &altura);

    area_base = (PI * pow(raio, 2)) * 2;
    area_lado = ((2 * PI) * raio) * altura;
    area_lata = area_base + area_lado;
    preco = area_lata * valor;

    printf("O valor da area da lata e:%.2f\n", area_lata);
    printf("O preco do aluminio e de: R$ %.2f por metro quadrado", preco);

    return 0;
}