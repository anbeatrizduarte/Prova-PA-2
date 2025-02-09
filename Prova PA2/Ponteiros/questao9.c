/* 9) Para atender à demanda de modificar uma função no sistema para que ela
receba os parâmetros por referência, foi solicitado que você refaça essa função que
inverte um número dado (231 vira 132) com essa nova exigência. */

#include <stdio.h>
#include <stdlib.h>

void inverterNum(int *num) {
    int inverter = 0;
    while(*num != 0) {
        inverter = inverter * 10 + (*num % 10);
        *num = *num / 10;
    }
    printf("Número invertido: %d\n", inverter);
}

int main() {
    int num;

    printf("Digite o número deseja: ");
    scanf("%d", &num);

    inverterNum(&num);
    return 0;
}