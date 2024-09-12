#include<stdio.h>
#include<stdbool.h>         //NOVA BIBLIOTECA INCLUIDA (NAO ESQUECER DE INCLUIR ELA)
                            // Dá pra brincar muito com isso, quando entender.
int main(){

    bool estudar = true;   
    bool jogar = false;

    if (estudar && jogar)   //Aqui utiliza o raciocinio da TABELA VERDADE  
    {
        printf("Vou tirar 10 na prova\n");
    }else{
        printf("Nao vou tirar 10 na prova\n");
    }    
    if (jogar || estudar)
    {
        printf("Vou tirar 10 na prova\n");
    }else{
        printf("Nao vou tirar 10 na prova\n");
    }
    
    return 0;
}