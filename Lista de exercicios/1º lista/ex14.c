// Crie um programa que leia um número no formado CDU e o imprima invertido: UDC
//CONSEGUI
#include<stdio.h>

int main(){

    int valor, centena, dezena, unidade, invertido;

    printf("Informe os tres numeros no formato CDU:  \n");
    scanf("%d", &valor);
 
    centena = valor / 100; // quebrei o numero para saber a centena
    dezena = (valor/ 10) % 10; // para dezena
    unidade = valor % 10; // para unidade

    printf("\nSeus valores sao: %d %d %d", centena, dezena, unidade);

    invertido = (unidade * 100) + (dezena * 10) + centena;

    printf (" o resultado foi : %d", invertido);
    return 0;
}

// PASSO A PASSO
// 1 - separe os nuemros;
// 2 - divisao (/) e resto (%)