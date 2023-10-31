#include <stdio.h>

int main() {
    int idade, npessoas, soma;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    soma = 0;
    npessoas = 0;

    while (idade >= 0){
        soma = soma + idade;
        npessoas = npessoas + 1;

        scanf("%d", &idade);
    }

    if (npessoas == 0) {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else {
    media = (double)soma / npessoas;
    printf("MEDIA = %.2lf\n", media);
    }
    return 0;
}
