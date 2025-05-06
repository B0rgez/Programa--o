#include <stdio.h>
#include <math.h>
//ha um problema no reconehcimento do numero fatorial e o valor de x (quero que eles contem entre si)
int main()
{
    int x, fatorial,potencia, j = 1, i = 1;
    float soma;
    
    
    printf("Informe o valor de X: ");
    scanf("%d", &x);

    do
    {
        fatorial *= i; //(denominador)
        i++;
        printf("\nDenominador: %d!", i);

        potencia = x * j; //(potencia do X)
        j++;
        printf("\nPotencia: %d", j);

        soma += (1 + (potencia/fatorial));

        printf("\nResultado: %.2f", soma);

    } while (soma = 0);
    

    /*int valor_x, fatorial = 1, j = 1;
    float soma;

    printf("Digite o valor de X: ");
    scanf("%d", &valor_x);

        for (int i = 1; i <= valor_x; i++)
        {
            fatorial *= i;
            printf("\nEstrutura:\nValor de x: %d\nPotenciacao de x:%d\nFatorial: %d!", valor_x, i,j);
            soma += (pow(valor_x, j) / (fatorial));
        }
        printf("\nResultado: %.2f", soma);*/

    return 0;
}