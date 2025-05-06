/* Implemente um algoritmo em C para calcular e imprimir a média de
cada aluno em uma classe de 6 alunos com 4 provas por aluno, as
notas devem ser lidas a partir do usuário.*/

#include <stdio.h>
#define LINHAS 6  // alunos
#define COLUNAS 4 // notas

int main()
{
    int i, j;
    float medias[LINHAS]; //a media fara linha por linha
    float soma;
    float notas[LINHAS][COLUNAS]; //as notas serao preenchidas na matriz

    // Inserindo os valores
    for (i = 0; i < LINHAS; i++)
    {
        soma = 0;
        for (j = 0; j < COLUNAS; j++)
        {
            printf("\nInforme o valor [%d] do aluno [%d]: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]); // Entrada dos dados dos 6 alunos
            soma += notas[i][j];       // Somará as notas de entrada
        }
        medias[i] = soma / COLUNAS; // fará a media entre as notas
    }
    // Imprimindo os valores
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("\nAlunos [%d] | Media :%.1f\n", j + 1, medias);
        }
        printf("\n");
    }

    return 0;
}