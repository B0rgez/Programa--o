/*Faça um programa que implemente um menu onde o usuário deverá
selecionar 1 ou 0. Caso seja entrado um número diferente, o programa deverá
solicitar uma nova opção.*/

#include <stdio.h>

int main()
{
    //REVER

    int numero;

    printf("Prefere 0 ou 1? ");
    scanf("%d", &numero);

    while (numero != 0 && numero != 1) // esta dando loop infinito
    {
        printf("Prefere 0 ou 1? ");
        scanf("%d", &numero);

        switch (numero)
        {
        case 0:
            printf("Voce prefere doce");
            break;

        case 1:
            printf("Voce prefere salgado");
            break;

        default:
            printf("Tente novamente");
            break;
        }
    }
    return 0;
}