/* 4) Bruno trabalha em um escritório e recebeu a tarefa de organizar vários arquivos .txt da
empresa com base na quantidade de linhas. Como essa tarefa é longa e tediosa, ele pediu
que fosse feito um programa capaz de indicar quantas linhas um determinado arquivo .txt
possui, para auxiliá-lo na organização. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificarLinhas(char* nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }

    int linhas = 0;
    char caractereInicial[100];

    while(fscanf(arquivo, "%s", &caractereInicial) != EOF) {
        linhas++;
    }

    printf("O numero de linhas do arquivo e igual a: %d", linhas);
    fclose(arquivo);
}

int main() {
    char* nomeArquivo = "arquivo.txt";
    verificarLinhas(nomeArquivo);
    return 0;
}