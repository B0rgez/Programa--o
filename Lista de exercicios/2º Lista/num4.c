#include <stdio.h>
#include <math.h>
// Dada a base e a altura de uma pirâmide, fazer um algoritmo que calcule e escreva o seu volume
int main() // feito
{

    double base, altura, volume;

    printf("Informe a Base:\n");
    scanf("%lf", &base);

    printf("Informe a altura:\n");
    scanf("%lf", &altura);
   
    volume = (base * altura)* 1/3; //o problema dqaqui foi a ordem de procedencia, tome cuidado

    printf("O seu volume e: %.2lf metros cubicos\n", volume);
    printf("Valor arrendonda pra cima: %.lf\n", ceil(volume));
    printf("Valor arrendondado pra baixo: %.lf", floor(volume));
    
    return 0;
}