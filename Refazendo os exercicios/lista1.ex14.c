#include <stdio.h>

int main(){

    int numero, centena, dezena, unidade, inverso;

    printf("Informe o numero: \n");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;
    inverso = (unidade * 100) + (dezena * 10) + (centena);

    printf("\nCentena: %d", centena);
    printf("\nDezena: %d", dezena);
    printf("\nUnidade: %d", unidade);
    
    printf("\nSeu inverso: %d", inverso);
    
    return 0;
}