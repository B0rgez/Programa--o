/*Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprima 
todos os números pares no intervalo aberto e seu somatório. Suponha que os dados 
digitados são para um intervalo crescente, ou seja, o primeiro valor é menor que o 
segundo.*/

#include<stdio.h>

int main(){
    int inferior, superior, soma = 0;

    printf("digite o limite inferior: ");
    scanf("%d", &inferior);

    printf("digite o limite superior: ");
    scanf("%d", &superior);

    for(int i = inferior; i <= superior;i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
            printf("\n%d + anterior = %d",i, soma);
        }

    }

    return 0;
}