#include<stdio.h>

int main(){

    int nota;

    printf("Insira a nota do aluno: \n");
    scanf("%d", &nota); 

    if (nota >= 6)      //nesse exemplo usou if..else que são condiçoes onde um nao for true substituir o outro.
    {
        printf("Aprovado");     
    }else{
        printf("Reprovado");
    }
    
    return 0;
}