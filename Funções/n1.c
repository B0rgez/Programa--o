/*Implemente uma função chamada somar que receba dois números inteiros como
parâmetros e retorne a soma deles.*/

#include <stdio.h>

// função geral de entrada e saida
int main()
{
    int resultado_local; // variavel local do main
    resultado_local = somar(1, 2);
    printf("Resultado da soma: %d\n", resultado_local);

    return 0;
}
// função soma os dois valores
int somar(int valorA, int valorB)
{
    return valorA + valorB;
}
