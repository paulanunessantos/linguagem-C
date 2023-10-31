#include <stdio.h>
#include <stdlib.h>

void limpar_entrada(){
    char c;
    while((c = getchar()) != '\n' && c != EOF){}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int N, cont, i;
    double soma, media, porcentagem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];

    for(i = 0; i < N; i++) {
        printf("Dados da %da pessoa:", i+1);
        printf("\nNome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    soma = 0;
    cont = 0;
    for(i = 0; i < N; i++) {
        if (idade[i] < 16) {
            cont++;
        }
        soma = soma + altura[i];
    }

    media = soma / N;
    printf("\nAltura media: %.2lf", media);

    porcentagem = (double) cont * 100.0 / N;
    printf("\nPessoas com menos de 16 anos: %.2lf %%", porcentagem);

    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            printf("\n %s", nome[i]);
        }
    }

    return 0;
}
