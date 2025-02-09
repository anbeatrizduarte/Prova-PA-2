/* 6) A fim de testes do sistema, foi pedido que você faça 2 vetores de pontos
flutuantes de tamanho 10, utilizando 2 abordagens: alocação estática e alocação
dinâmica. Após a criação, imprima o endereço de memória de cada elemento de
ambos os vetores. Não se esqueça de que a memória dinâmica deve ser liberada
após o uso. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, vetor1[10], *p1, *p2;

    // preenchendo o vetor1
    for(int i = 0; i < 10; i++) {
        vetor1[i] = i + 1;
    }

    p1 = vetor1;

    printf("=== Enderecos do vetor 1 ===\n");
    for (int i = 0; i < 10; i++) {
        printf("Endereco do elemento %d: %p\n", i + 1, &p1[i]);
    }

    printf("Digite o numero de elementos do vetor 2: ");
    scanf("%d", &n);

    p2 = (int*)malloc(n * sizeof(int));

    printf("\n=== Enderecos do vetor 2 ===\n");
    for (int i = 0; i < n; i++) {
        printf("Endereco do elemento %d: %p\n", i + 1, &p2[i]);
    }

    free(p2);
    return 0;


}