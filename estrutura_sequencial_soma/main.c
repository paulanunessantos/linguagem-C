#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, soma;

    printf("Digite o valor de X: ");
    scanf("%d", &X);
    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    soma = Y + X;
    printf("SOMA = %d\n", soma);

    return 0;
}
