#include <stdio.h>

int main(){

    int a, b;

    printf("Insira dois numeros: ");
    scanf("%d %d", &a, &b);


    if (a > b)
    {
        printf("O valor A e maior que B");
    }else if (b > a)
    {
        printf("O valor de B e maior que A");
    }else{
    
        printf("Ambos valores sao iguais");
    }

    return 0;
}