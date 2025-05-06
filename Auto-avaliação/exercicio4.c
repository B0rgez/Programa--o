/*Lista 3 Questao 08*/

#include <stdio.h>

int main (){

    int n1, n2, resultado;
    char operacao;

    printf("Insira dois numero inteiros: ");
    scanf("%d %d", &n1, &n2);

    fflush(stdin);
    printf("Qual operacao vai usar?\n");
    scanf("%c", &operacao);


    switch (operacao)
    {
    case '+':
        resultado = n1 + n2;
        printf("Soma: %d", resultado);
        break;
    case '-':
        resultado = n1 - n2;
        printf("Subtrair: %d", resultado);
        break;
    case '*':
        resultado = n1 * n2;
        printf("Multiplicacao: %d", resultado);
        break;
    case '/':
        resultado = n1 / n2;
        printf("Dividir: %d", resultado);
        break;
    
    default:
        printf("\nOperacao invalida");
        break;
    }

    return 0;
}