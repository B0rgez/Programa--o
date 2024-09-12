#include<stdio.h>

int main(){

    char nota;

    printf("Selecione a Letra correta das alternativa A ao D:\n");
    scanf("%c", &nota);
    switch (nota)
    {
    case'A':                                /* constant-expression */
        printf("Alternativa errada");        /* code */
        break;                              //nao esquecer o break, ou dará infinitos resultados
    case 'B':
        printf("Alternativa Certa");
        break;
    case 'C':
        printf("Alternativa Errada");
        break;
    case 'D':
        printf("Alternativa Errada");
        break;
    default:            // identificar o que nao existe no 'case'
        printf("Fora de cogitação");
        break;
    }

    return 0;
}