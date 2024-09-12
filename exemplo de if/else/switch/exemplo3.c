#include<stdio.h>

int main(){

    int nota_aluno;     // O EXEMPLO PROPOSTO REFERE AO ANINHADAS DE 'IF', condições em cima de outras condições

    printf("Digite a nota: \n");
    scanf("%d", &nota_aluno);
    if (nota_aluno >= 6){            //aqui vc adicionará a variavel
    }else if(nota_aluno >= 10){      // variavel + operação matematica(condição)
        printf("Aprovado");          // imprimir de acordo com a condição
    }else if(nota_aluno >= 9){
        printf("Aprovado");
    }else if(nota_aluno >= 8){
        printf("Aprovado");
    }else if(nota_aluno >= 7){
        printf("Aprovado");
    }else if(nota_aluno >= 6){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }

    
    return 0;
}