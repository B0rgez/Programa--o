#include <stdio.h>

int main (){

    float nota1, nota2, nota3, media;

    printf("Informe a nota1: ");
    scanf("%f", &nota1);

    printf("Informe a nota2: ");
    scanf("%f", &nota2);

    printf("Informe a nota3: ");
    scanf("%f", &nota3);

    if(nota1 > 6 && nota2 < 6){
        media = (nota1 * 4) + (nota2 * 3) + (nota3 * 3) / 10;
    }else if(nota2 > 6 && nota1 < 6 ){
        media = (nota1 * 3) + (nota2 * 4) + (nota3 * 3);
    }else if(nota3 > 6 && nota2 < 6){
        media = (nota1 * 3) + (nota2 * 3) + (nota3 * 4);
    }
    if (media > 5)
    {
        printf("Aluno Aprovado");
    }else{
        printf("Aluno Reprovado");
    }

    return 0;
    
}