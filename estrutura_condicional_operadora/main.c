#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutos;
    double valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos <= 100){
        valor = 50.00;
        printf("Valor a pagar: %.2lf", valor);
    } else {
        valor = ((minutos - 100) * 2.00) + 50.00;
        printf("Valor a pagar: %.2lf", valor);
    }

    return 0;
}
