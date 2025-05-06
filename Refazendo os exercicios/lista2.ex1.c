#include <stdio.h>
#include <math.h>

int main (){

    float raio, altura_lata, area_lata, custo; 
    const float preco_aluminio = 100;
    const float pi = 3.14;

    printf("Informe o raio: ");
    scanf("%f", &raio);

    printf("Informe a altura: ");
    scanf("%f", &altura_lata);

    area_lata = (pi * pow(raio,2)* 2) + (2 * pi * raio * altura_lata);

    printf("Resultado deu: %.2f", area_lata);

    custo = area_lata * preco_aluminio;

    printf("\nSeu preco: R$ %.2f", custo);

    return 0;
}
