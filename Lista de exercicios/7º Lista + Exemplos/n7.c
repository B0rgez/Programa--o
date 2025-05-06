/*Implemente um programa que leia uma matriz 5 x 10 que se refere as respostas de
10 questões de múltipla escolha, referentes a 5 alunos. Leia também um vetor de
10 posições contendo o gabarito de respostas que podem ser A, B, C, D ou E. Seu
programa deverá comparar as respostas de cada candidato com o gabarito e emitir
um vetor denominado resultado, contendo a pontuação correspondente a cada
aluno. */

#include <stdio.h>
#define LINHAS 5
#define COLUNAS 10
#define TAM 10

int main()
{

    int i, j;
    char respostas[5][10];  // Matriz para armazenar as respostas dos alunos
    char gabarito[10];      // Vetor para armazenar o gabarito
    int resultado[5] = {0}; // Vetor para armazenar a pontuação de cada aluno

    // Entrada do gabarito
    printf("Insira o gabarito das 10 questoes (A, B, C, D ou E):\n");
    for ( i = 0; i < 10; i++)
    {
        printf("Gabarito da questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    // Entrada das respostas dos alunos
    for (int aluno = 0; aluno < 5; aluno++)
    {
        printf("\nInsira as respostas do aluno %d:\n", aluno + 1);
        for (int questao = 0; questao < 10; questao++)
        {
            printf("Resposta da questao %d: ", questao + 1);
            scanf("%c", &respostas[aluno][questao]);
        }
    }

    // Comparação das respostas com o gabarito
    for (int aluno = 0; aluno < 5; aluno++)
    {
        for (int questao = 0; questao < 10; questao++)
        {
            if (respostas[aluno][questao] == gabarito[questao])
            {
                resultado[aluno]++; // Incrementa a pontuação se a resposta estiver correta
            }
        }
    }

    // Exibição dos resultados
    printf("\nPontuação dos alunos:\n");
    for (int aluno = 0; aluno < 5; aluno++)
    {
        printf("Aluno %d: %d pontos\n", aluno + 1, resultado[aluno]);
    }

    return 0;
}