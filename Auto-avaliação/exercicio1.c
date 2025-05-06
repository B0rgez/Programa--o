/*Lista 3  exercicio 2*/
#include <stdio.h>

int main(){

    int codigo;
    float n1, n2, n3, media;

    printf("Codigo do aluno: ");
    scanf("%d", &codigo);

    printf("\nDigite as 3 notas: ");
    scanf("%f %f %f", &n1,&n2,&n3);

    if (n1 > n2 && n1 > n3)
    {
        media = ((n1 * 4) + (n2 * 3) + (n3 * 3)) / 10;
        printf("\nSua media: %.2f, pois N1 foi alta", media);
    }else if (n2 > n1 && n2 > n3)
    {
        media = ((n1 * 3) + (n2 * 4) + (n3 * 3)) / 10;
        printf("\nSua media: %.2f, pois a N2 foi alta", media);
    }else{
        media = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10;
        printf("\nSua media: %.2f, pois a N3 foi alta", media);
    }
    printf("\nInformacoes:\nCodigo: %d\nNotas: %.1f, %.1f, %.1f\nSua media: %.2f\nE o aluno esta: ", codigo, n1,n2,n3, media);

    if (media >= 5)
    {
        printf("\nAPROVADO");
    }else{
        printf("\nREPROVADO");
    }
    
    
    return 0;
}
