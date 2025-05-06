/* Faça um programa para ler 10 números DIFERENTES a serem armazenados em
um vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo
lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente,
o programa deverá pedir para ele digitar outro número. Note que
cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele
existe entre os números que já foram fornecidos. Exibir na tela o vetor final que
foi digitado, ou seja, sem nenhuma repetição */

#include <stdio.h>
#define TAM 10

int main()
{
    double numeros[TAM], substituto[TAM];

    // alimentando os vetores
    for (int i = 0; i < TAM; i++)
    {
        printf("Insira os 10 valores: ");
        scanf("%lf", numeros[i]);        
    }
    //Verificar se o numero vai repetir
    


    

    return 0;
}