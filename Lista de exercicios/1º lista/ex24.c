//DIFICIL - SUCESSO
#include <stdio.h>

int main(){

    int valor, soma, verificador, invertido, unidade,centena,dezena, uni1, cen1, dez1;

    printf("Informe os 3 digitos: \n "); 
    scanf ("%d", &valor);

    centena = valor  / 100;
    dezena = (valor / 10) % 10;
    unidade = valor % 10;

    printf("Seus digitos sao: %d %d %d", centena, dezena, unidade);

    invertido = (unidade * 100) + (dezena * 10) + centena;

    printf("\nO seu numero invertido e esse: %d", invertido);

    soma = invertido + valor;

    printf("\nA soma deles: %d ", soma);

    cen1 = soma / 100;
    dez1 = (soma / 10) % 10;
    uni1 = soma % 10;

    verificador = (uni1 * 1) + (dez1 * 2) + cen1 * 3;

    printf ("\nOs ultimos digitos sao: %d", verificador);
    
    return 0;
}