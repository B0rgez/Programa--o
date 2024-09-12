// Crie um programa que leia o nome, endereço e telefone e imprima-os
// n - 1
// SUCESSO
#include <stdio.h>

int main(){

    char nome [100], endereco[150], telefone[100];

    printf("Informe seu nome completo: \n");
    scanf("%99[^\n]", nome);
    fflush (stdin);

    printf ("Seu numero de telefone e: \n");
    scanf("%149[^\n]", telefone);
    fflush(stdin);

    printf("Seu endereco completo: \n");
    scanf("%99[^\n]", endereco);
    fflush(stdin);
    
    printf("Seus dados agora sao \n Nome: %s \n Telefone: %s\n Endereco: %s\n",nome, telefone, endereco);

    return 0;
}

// O fgets pode tbm ser feito da seguinte forma (telefone, sizeof(telefone), stdin);