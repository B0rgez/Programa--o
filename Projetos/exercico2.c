#include <stdio.h>
// Crie um programa que leia o nome e idade de 5 pessoas e apresenta em formato de tabela.
// AUSENTE
int main (){

    char nome[30] = "enzo borges";
    printf ("%s\n", nome);

    char novo_nome[30];

    printf("Informe um novo nome: \n");
    scanf("%s", novo_nome);

    printf("O seu novo nome agora e: %s", novo_nome);
    return 0;
}