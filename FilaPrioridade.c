#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FilaPrioridade.h" //incluindo os protótipos

struct paciente{
    char nome[30];
    int prio;
};

struct fila_prioridade{
    int qtd;
    struct paciente dados[MAX];
};

FilaPrio* cria_FilaPrio() {
    FilaPrio *fp;
    fp = (FilaPrio*) malloc(sizeof(struct fila_prioridade));
    if(fp != NULL)
        fp->qtd = 0;
    printf("Fila criada com sucesso!\n");
    return fp;
}

int insere_FilaPrio(FilaPrio* fp, char *nome, int prio){
    if(fp == NULL)
        return 0;
    if(fp->qtd == MAX) //fila cheia
        return 0;

    int i = fp->qtd-1;
    while(i >= 0 && fp->dados[i].prio >= prio){
        fp->dados[i+1] = fp->dados[i];
        i--;
    }

    strcpy(fp->dados[i+1].nome, nome);
    fp->dados[i+1].prio = prio;
    fp->qtd++;
    return 1;
}

int tamanho_filaPrio(FilaPrio* fp){
    if(fp == NULL) //indica um ponteiro nulo, ou, inexistente
        return -1;
    else 
        return fp->qtd;
}

int estaCheia_FilaPrio(FilaPrio* fp){
    if(fp->qtd == MAX){
        return 1;
    }
}


