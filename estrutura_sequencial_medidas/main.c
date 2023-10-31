#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C, quadrado, triangulo, trapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Digite a medida C: ");
    scanf("%lf", &C);

    quadrado = A * A;
    printf("AREA DO QUADRADO = %.4lf\n", quadrado);

    triangulo = A * B / 2;
    printf("AREA DO TRIANGULO = %.4lf\n", triangulo);

    trapezio = ( A + B) * C / 2;
    printf("AREA DO TRAPEZIO = %.4lf\n", trapezio);


    return 0;
}
