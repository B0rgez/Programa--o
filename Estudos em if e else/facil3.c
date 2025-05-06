/*3- Faça um programa que verifique (usando if e else) se uma letra digitada é “F” ou “M”. Conforme a letra escrever: F – Feminino, M- Masculino, Sexo inválido.*/
#include <stdio.h>

int main()
{

    char sexo;

    printf("Informe a incial do seu sexo: ");
    scanf("%c", &sexo);

    if (sexo == 'F' || sexo == 'f')
    {
        printf("Feminino\n");
    }
    else if (sexo == 'M' || sexo == 'm')
    {
        printf("Masculino\n");
    }
    else
    {
        printf("Sexo inválido\n");
    }
    return 0;
}