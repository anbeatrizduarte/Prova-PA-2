/* 4) Nesse sistema, há uma função que está apresentando problemas e os
contratantes pediram que você a refaça. Essa função deve receber por parâmetro
dois inteiros A e B e realizar a soma de ambos, armazenando o resultado na
variável A. No entanto, devido às limitações do sistema, essa função não pode ter
nenhum retorno, sendo necessário o uso de lógica de ponteiros. Além disso, na
função ‘main’, deve-se ler A e B do teclado e imprimir o valor atualizado de A e B
após o uso da função criada, a fim de testá-la. */

#include <stdio.h>

void calcularSoma(int *A, int B) {
    int resultadoSoma = *A + B;
    *A = resultadoSoma;
    printf("Valor da soma: %d\n", resultadoSoma);
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    calcularSoma(&A, B);
    printf("Valor de A após a soma: %d", A);
    return 0;
}