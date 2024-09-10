#include "FilaPrioridade.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FilaPrio fila;
    fila.qtd = 0;
    int tamanho;
    char paciente[20];

    if (insere_FilaPrio(&fila, "José Alves", 3))
        printf("Elemento inserido com sucesso!\n");
    
    if(insere_FilaPrio(&fila, "Osmar Macedo", 2))
        printf("Elemento inserido com sucesso!\n");
    

    tamanho = tamanho_filaPrio(&fila);
    printf("%d\n", tamanho);

    if(estaCheia_FilaPrio(&fila) == 1)
    {
        printf("A fila esta cheia!\n");
    } 

    else 
    {
        printf("A fila NAO esta cheia!\n");
    }

    return 0;

}