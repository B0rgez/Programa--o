/*FEITA*/
#include <stdio.h>
#include <math.h>

int main()
{
    float diaria, promocao, v_sem_p, v_com_p, lucro, prejuizo;

    printf("Informe o valor da diaria: \nR$ ");
    scanf("%f", &diaria);

    promocao = diaria * (1 - 0.22);

    printf("\nPromocao: R$ %.2f", promocao);

    v_sem_p = diaria / 30;

    printf("\nO valor medio sem promocao: R$ %.2f", v_sem_p);

    v_com_p = (diaria * (1 - 0.4) / 30);

    printf("\nO valor media com promocaoo : R$ %.2f\n", v_com_p);

    lucro = (1 - 0.7) + promocao;
    prejuizo = (1 - 0.3) + promocao;

    printf("\nLucro: R$ %.2f\nPrejuizo: R$ %.2f\nValor da Diaria: R$ %.2f",lucro, prejuizo, diaria);

    return 0;
}