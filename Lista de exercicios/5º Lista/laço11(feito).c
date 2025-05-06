/*Criar um algoritmo que leia um número (NUM), e depois leia NUM números inteiros
e imprima o maior e o menor deles. Suponha que todos os números lidos serão
positivos*/

#include <stdio.h>

int main() {

    int NUM, numero, maior, menor;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &NUM);

    if (NUM > 0) {
        
        printf("Digite um numero: ");
        scanf("%d", &numero);

        maior = numero;
        menor = numero;

        for (int i = 1; i < NUM; i++) {
            printf("Digite um numero: ");
            scanf("%d", &numero);

            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }

        printf("Maior numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);
    } else {
        printf("Nenhum numero para ler.\n");
    }

    return 0;
}