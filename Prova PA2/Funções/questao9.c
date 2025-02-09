/* 9) Outro tópico é sobre os divisores de um número. Ele pediu que você criasse uma função que,
dado um número 'x', informe quantos e quais são os divisores inteiros desse número. */

#include <stdio.h>
#include <stdlib.h>

int divisores(int x) {
    printf("Os divisores de %d são: ", x);
    for (int i = 1; i < x; i++){
        if (x % i == 0) {
            printf("\nO %d e divisor de %d.", i, x);
        }
    }
    printf("\n");
    return 0;
}

int main() {
    int x;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    divisores(x);
    return 0;
}