/* 5) O sistema está enfrentando problemas com a memória e precisa de um
programa para ajudar a resolver. Após a leitura de 2 variáveis do teclado, a variável
com o maior endereço de memória sempre está incorreta. Sendo assim, foi pedido
que você faça um programa que, ao comparar essas 2 variáveis após a leitura,
informe qual delas possui o maior endereço e qual é esse endereço. */

#include <stdio.h>

void compararEndereco(int *pA, int *pB) {

    if (pA > pB) {
        printf("O maior endereco e o da variavel A\n");
        printf("Seu endereco e: %p", (void *)pA);
    } else if  (pA < pB) {
        printf("O maior endereco e o da variavel B\n");
        printf("Seu endereco e: %p", (void *)pB); 
    } else {
        printf("Os enderecos sao iguais");
    }
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    compararEndereco(&A, &B);
    return 0;
}