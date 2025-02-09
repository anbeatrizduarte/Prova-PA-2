    /* 4) Maria tem como tarefa semanal verificar se um número 'x' é primo. Para evitar ter que pedir
    ajuda toda vez, ela pediu que você crie uma função que, ao receber um número 'x', retorne se
    'x' é primo ou não. Em seguida, crie um pequeno programa que utilize essa função para testar e
    imprimir se cada número de 1 a 1000 é primo ou não. */

    #include <stdio.h>
    #include <stdlib.h>

    int calcularNumeroPrimo(int num) {
        if (num <= 1) {
            return 0;
        }
        if (num == 2) {
            return 1;
        }
        if (num % 2 == 0) {
            return 0;
        }

        for(int i = 3; i * i <= num; i++) {
            if (num % i == 0) {
                return 0;
            }
        }

        return 1;
    }

    int main() {

        for (int i = 1; i <= 1000; i++) {
            if (calcularNumeroPrimo(i)) {
                printf("%d e um numero primo\n", i);
            } else {
                printf("%d nao e um numero primo\n", i);
            }
        }

        return 0;
    }

