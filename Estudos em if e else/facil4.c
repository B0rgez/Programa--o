/*4- Faça um programa que verifique (usando if e else) se uma letra digitada é vogal ou consoante.*/

#include <stdio.h>

int main(){

    char letra;

    printf("Escolha uma letra do alfabeto:");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'A':
        printf("E vogal");
        break;
    case 'E':
        printf("E vogal");
        break;
    case 'I':
        printf("E vogal");
        break;
    case 'O':
        printf("E vogal");
        break;
    case 'U':
        printf("E vogal");
        break;
    
    default:
        printf("E consoante");
        break;
    }

    return 0;
}