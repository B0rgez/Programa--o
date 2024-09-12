// Escrever um programa que leia o código de um aluno e suas três notas. Calcule a média
// ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas
// restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e uma
// mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" caso contrário.

#include <stdio.h>
//CORRETO
int main()
{

    float n1, n2, n3, media_ponderada;

    printf("Digite sua N1:\n");
    scanf("%f", &n1);

    printf("Digite sua N2:\n");
    scanf("%f", &n2);

    printf("Digite sua N3:\n");
    scanf("%f", &n3);

    // A nota media é 5, entao para valores maior que 5 recebe o peso 4, abaixo deles recebem 3?

    if (n1 > n2 && n1 > n3){
        media_ponderada = (n1 * 0.4) + (n2 * 0.3) + (n3 * 0.3) / 10;
    }
    else if (n2 > n1 && n2 > n3){
        media_ponderada = (n2 * 4) + (n1 * 0.3) + (n3 * 0.3) / 10;
    }
    else{
        media_ponderada = (n3 * 4) + (n2 * 0.3) + (n1 * 0.3) / 10;
    }
    if (media_ponderada >= 5){
        printf("APROVADO!\n");
    }
    else{
        printf("REPROVADO!\n");
    }
    printf("A nota do foi na N1: %f\nN2: %f\nN3: %f\n Sua media:%f\n",n1,n2,n3,media_ponderada);

    return 0;
}