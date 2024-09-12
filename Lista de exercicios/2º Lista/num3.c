#include<stdio.h>
#include<math.h>
// Fiz com que o computador realiza-se um calculo da distancia = √(x2 -x1)^2 + √(y2 - y1)^2 -> passando para lingua binaria.
int main(){ 

    double A, B, a1, a2, b1, b2, distancia;

    printf("Informe os dois valor de A:\n");
    scanf("%lf %lf",&a1, &a2);
    printf("Informe os dois valor de B:\n");
    scanf("%lf %lf",&b1, &b2);

    A = pow(a2 - a1, 2);
    B = pow(b2 - b1, 2);
    distancia = sqrt(A + B);  

    printf("O resultado do valor de A: %.2lf\nO resultado de B: %.2lf\nLogo a distancia vale: %.2lf\n", A,B,distancia);   

    return 0;
}