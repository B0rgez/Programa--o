/*Faça um programa que imprima de 50 a 0, diminuindo de 6 em 6*/

#include <stdio.h>

int main()
{

    int i = 50;

    while (i > 0)
    {
        printf("%d\n", i);
        i -= 6;
    }
    return 0;
}