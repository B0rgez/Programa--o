#include <stdio.h>

int main (){

    float numero, metade;

    for (int i = 1; i <= 10; i++)
    {
        printf("\nDigite 10 numeros: ");
        scanf("%f", &numero);

        metade = numero / 2;

        printf("Resultado [%d]: %.2f", i, metade);
    }
    


    return 0;
}