#include <stdio.h>

int main(){
    double notaFinal, nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;
    printf("NOTA FINAL = %.1lf\n", notaFinal);

    if (notaFinal < 60.0) {
        printf("REPROVADO\n");
    }

    return 0;
}
