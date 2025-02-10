/* 1) Roberto possui dois arquivos de texto (.txt) nos quais estão armazenadas as quantidades
de estoque de certos itens em duas filiais diferentes. Ele requisitou a criação de um
programa que gere um terceiro arquivo, o qual deve armazenar a quantidade de estoque de
cada item em sua empresa, sem considerar a filial. Consequentemente, esse terceiro arquivo
deve ser preenchido com a soma dos valores presentes nos dois arquivos anteriores, tal
como exemplificado a seguir: */

#include <stdio.h>
#include <stdlib.h>

void lerArquivos(char* nomeArquivo1, char* nomeArquivo2, char* nomeArquivo3) {
    FILE *arquivo1 = fopen(nomeArquivo1, "r");
    FILE *arquivo2 = fopen(nomeArquivo2, "r");
    FILE *arquivo3 = fopen(nomeArquivo3, "w");

    if (arquivo1 == NULL || arquivo2 == NULL || arquivo3 == NULL) {
        printf("Erro ao abrir os arquivos!\n");
        exit(1);
    }

    int estoque1, estoque2, soma;

    while(fscanf(arquivo1, "%d", &estoque1) != EOF && fscanf(arquivo2, "%d", &estoque2) != EOF) {
        soma = estoque1 + estoque2;
        fprintf(arquivo3, "%d\n", soma);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

}

int main() {
    char* nomeArquivo1 = "arquivo1.txt";
    char* nomeArquivo2 = "arquivo2.txt";
    char* nomeArquivo3 = "arquivo3.txt";
    lerArquivos(nomeArquivo1, nomeArquivo2, nomeArquivo3);
    return 0;
}