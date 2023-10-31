#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco, dinheiro, troco;
    int qtd;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (qtd * preco);

    if(troco > 0){
        printf("TROCO = %.2lf\n", troco);
    } else {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS.\n", -troco);
    }

    return 0;
}
