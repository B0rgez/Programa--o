/*Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a média geral.*/

#include <stdio.h>
#define TAM 5

int main()
{
    float contador = 0, acumulador = 0;
    float nota[TAM];
    double media;

    for (int i = 0; i < TAM; i++)
    {
        // atribuindo a quantidade de notas do aluno
        printf("\nInserir a nota do %d aluno: ", i);
        scanf("%f", &nota[i]);

        acumulador += nota[i];
        contador += 1;
    }
    media = acumulador / contador;
    printf("A media geral foi %.2lf", media);

    return 0;
}