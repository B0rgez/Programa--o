#include <stdio.h>
#define A 6 // posições do vetor

int main()
{

    // dados do vetor
    int vetor[A] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = vetor[0] + vetor[1] + vetor[5]; // soma das posições [0] = 1,[1] = 0,[5] = 7;

    vetor[4] = 100;               // modificando a posição 4
    printf("\nA soma: %d", soma); 

    for (int i = 0; i < A; i++){

    printf("\nOs valores de A: %d",vetor[i]);
    }

    return 0;
}