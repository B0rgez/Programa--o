/*Lista 2 Questao 12*/

#include <stdio.h>

int main(){

    int publico;
    float popular, geral, arquibancada, cadeira, total;

    printf("Informe o publico total: ");
    scanf("%d", &publico);

    popular = 0.1 * 1;
    geral = 0.5 * 5;
    arquibancada = 0.3 * 10;
    cadeira = 0.1 * 20;

    total = publico * (popular + geral + arquibancada + cadeira);

    printf("Renda: R$ %.2f", total);






    return 0;
}