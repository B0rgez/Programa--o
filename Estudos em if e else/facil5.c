/* Faça um programa que receba três inteiros e diga qual deles é o maior e qual o menor.
Consegue criar mais de uma solução?*/

#include <stdio.h>

int main()
{

    int n1, n2, n3;

    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3){
        printf("\nN1 e o maior\n");
    }
    else if (n2 > n1 && n2 > n3){
        printf("\nN2 e o maior\n");
    }
    else{
        printf("\nN3 e o maior\n");
    }

    printf("\nSeus valores: ");
    printf("\nN1: %d\nN2: %d\nN3: %d", n1, n2, n3);

    return 0;
}
