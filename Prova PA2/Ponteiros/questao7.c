/* 7) Desejando verificar se o resultado será diferente para uma matriz em vez de um
vetor, realize o mesmo procedimento feito no problema anterior, mas desta vez
utilizando uma matriz 3x3 de pontos flutuantes com as 2 abordagens diferentes. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3], linhas, colunas, *p1, *p2;

    p1 = &matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = (i + 1)*(j + 1);
        }
    } 

    printf("=== Elementos matriz 1 ===\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Linha %d, Coluna %d: %p -> %d\n", i + 1, j + 1, (p1 + i*3 + j), *(p1 + i*3 + j));
        }
        printf("\n");
    }

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    p2 = (int*)malloc(linhas * colunas * sizeof(int));

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            *(p2 + i * colunas + j) = (i + 1) * (j + 1);
            printf("Linha %d, Coluna %d: %p -> %d\n", i + 1, j + 1, (p2 + i * colunas + j), *(p2 + i * colunas + j));
        }
        printf("\n");
        }

    free(p2);
    return 0;
}
