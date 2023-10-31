#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    double preco, dinheiro, troco;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (quantidade * preco);
    printf("TROCO = %.2lf", troco);

    return 0;
}
