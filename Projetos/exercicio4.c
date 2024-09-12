# include <stdio.h> 
// Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda.
// SUCESSO
int main(){

    float nota1, nota2, media_ponderada;

printf("Digite a primeira nota: \n");
scanf("%f", &nota1);

printf ("Digite a segunda nota: \n");
scanf("%f", &nota2);

 media_ponderada = (nota1 * 2 + nota2 * 3) / 5;

printf (" A media ponderada deles: %.1f \n", media_ponderada);

    return 0;
}
