#include <stdio.h>

int main()
{
    int num, contador = 0;

    printf("Informe 5 valores inteiros:\n");

    for (int i = 1; i < 5; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            contador += 1;
        }
    }

    printf("Foi identificado %d valores pares", contador);

    return 0;
}