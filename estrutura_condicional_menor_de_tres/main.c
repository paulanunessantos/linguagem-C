#include <stdio.h>

int main() {
    int x1, x2, x3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &x1);

    printf("Segundo valor: ");
    scanf("%d", &x2);

    printf("Terceiro valor: ");
    scanf("%d", &x3);

    menor = x1;

    if (menor > x2) {
        menor = x2;
    }
    else if (menor > x3){
        menor = x3;
    }


    //if (x1 < x2 && x1 < x3) {
    //    menor = x1;
    //}
    //else if (x2 < x3) {
    //    menor = x2;
    //}
    //else {
    //    menor = x3;
    //}

    printf("MENOR = %d\n", menor);

    return 0;
}
