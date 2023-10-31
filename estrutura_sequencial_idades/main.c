#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

int main() {

    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fgets(nome1, 50, stdin);
    strtok(nome1, "\n");
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa: ");
    printf("\nNome: ");

    limpar_entrada();
    fgets(nome2, 50, stdin);
    strtok(nome2, "\n");
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double)(idade1 + idade2) / 2; //ou 2.0 para entender double

    printf("A media de %s e %s e de %.1lf anos\n", nome1, nome2, media);

    return 0;
}
