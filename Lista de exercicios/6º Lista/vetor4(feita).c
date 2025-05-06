/*Fazer um programa para ler 15 valores e, em seguida, mostrar o valor e a posição
onde se encontram o maior e o menor valor.*/

#include <stdio.h>
#define TAM 5

int main()
{
    int posicao1,posicao2;            // vetor das posições
    int maior = 0, menor = 10000, valores; // pra identificação do maior e do menor

    for (int i = 0; i < TAM; i++)
    {
        printf("Inserir os valores: ");
        scanf("%d", &valores);

        if (valores > maior)
        {
            posicao1 = i; //quardará a posição
            maior = valores; // armarezará o maior valor
        }
        if(valores < menor)
        {
            posicao2 = i; //vice-versa
            menor = valores;
        }
    }
    // como identificar a posição desejada?
    printf("\nNa posição [%d] O maior: %d", posicao1,maior);
    printf("\nNa posicao [%d] O menor: %d", posicao2,menor);
    return 0;
}