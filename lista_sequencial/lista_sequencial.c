#include <stdio.h>
#include <stdlib.h>
#include "lista_sequencial.h"

#define MAX 1000



void inicializar(struct lista *l) {
    l->particao = 0;
}

int inserir_fim(struct lista *l, int valor) {
    if(l->particao < MAX) {
        l->elementos[l->particao] = valor;
        l->particao++;
        return 1;
    } else {
        return 0;
    }
}


int inserir_inicio(struct lista *l, int valor) {
    //movimentação de todos os valores para a direita
    //repetição do fim para o início
    int i;
    if(l->particao < MAX) {
        for(i=l->particao; i >0; i--) {
        l->elementos[i] = l->elementos[i-1];
        }

        l->elementos[0] = valor;
        l->particao++;

        return 1;
    } else {
        return 0;
    }
}

void exibir_lista(struct lista *l){
    int i;
    for(i=0; i < l->particao; i++) {
        printf("[%d]", l->elementos[i]);
    }
    printf("\n");
}

int concatenar(struct lista *l1, struct lista *l2){
    int i;
    if(l1->particao + l2->particao < MAX) {
        for(i=0; i < l2->particao; i++) {
            inserir_fim(l1, l2->elementos[i]);
        }
        return 1;
    } else {
        return 0;
    }
}


