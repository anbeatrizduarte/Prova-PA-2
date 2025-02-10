/* 2) Juliana possui várias turmas, e ela armazena as informações dos alunos em diversos
arquivos .txt, seguindo o formato "NOME: JOÃO NOTA: 8", com um aluno por linha. Ela
solicitou a criação de um programa que lendo um arquivo .txt qualquer no formato dela
exiba na tela o nome e a nota do aluno que obteve a maior pontuação. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificarAlunos(char* nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");

    if(arquivo == NULL) {
        printf("Erro ao abrir arquivo");
        exit(1);
    }

    char nomeAluno[100];
    int nota;
    int maiorNota = -1;
    char nomeMaiorNota[100];

    while(fscanf(arquivo, "NOME: %s NOTA: %d", nomeAluno, &nota) != EOF) {
        if (nota > maiorNota) {
            maiorNota = nota;
            strcpy(nomeMaiorNota, nomeAluno);
        }
    }

    if (maiorNota != - 1) {
        printf("Aluno com maior nota: %s", nomeMaiorNota);
        printf("Nota: %d", maiorNota);
    } else {
        printf("Nenhum aluno encontrado.\n");
    }
    fclose(arquivo);
}

int main() {
    char* nomeArquivo = "arquivo.txt";
    
    verificarAlunos(nomeArquivo);
    return 0;
}