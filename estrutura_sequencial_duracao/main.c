#include <stdio.h>
#include <stdlib.h>

int main()
{
    int duracao, horas, restoHora, minutos, segundos;


    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    restoHora = duracao % 3600;

    minutos = restoHora / 60;
    segundos = restoHora % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
