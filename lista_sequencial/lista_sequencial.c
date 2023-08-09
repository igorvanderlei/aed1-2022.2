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

void troca(struct lista *l, int pos1, int pos2) {
    int temp = l->elementos[pos1];
    l->elementos[pos1] = l->elementos[pos2];
    l->elementos[pos2] = temp;
}

void bubble_sort(struct lista *l){
    int i, j, trocou;
    for(i=0; i < l->particao - 1; i++ ) {
        trocou = 0;
        //Percorrer a lista do fim ao início
        for(j=l->particao - 1; j>i; j--) {
            //comparando o elemento com o seu antecessor
            if(l->elementos[j] < l->elementos[j-1]) {
                //caso estejam fora de ordem, troca os elementos de posição
                troca(l, j, j-1);
                trocou = 1;
            }
        }
        if(!trocou)
            break;
    }
}

void selection_sort(struct lista *l) {
    int i, posicao;
    for(i=0; i < l->particao - 1; i++) {
        posicao = procurar_menor(l, i);
        troca(l, i, posicao);
    }
}


int procurar_menor(struct lista *l, int inicio){
    int pos = inicio, i;
    for(i=inicio+1; i < l->particao; i++) {
        if(l->elementos[i] < l->elementos[pos])
            pos = i;
    }
    return pos;
}

int insertion_sort(struct lista *l) {
    int i;
    for(i=1; i < l->particao; i++) {
        inserir_ordem(l, l->elementos[i], i);
    }
}

//Considera-se que a lista de entrada já se encontra ordenada
void inserir_ordem(struct lista *l, int valor, int limite) {
    int i, posicao;
    //procurar a posição onde o elemento será inserido
    for(i=0; i <= limite; i++) {
        if(valor < l->elementos[i]) {
            posicao = i;
            break;
        }
    }

    //deslocar para direita os elementos a partir daquela posição
    for(i=limite; i > posicao; i--) {
        l->elementos[i] = l->elementos[i-1];
    }

    //insere o elemento na posição encontrada
    l->elementos[posicao] = valor;

}

