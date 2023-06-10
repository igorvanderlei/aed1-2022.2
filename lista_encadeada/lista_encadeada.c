#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

lista inserir_inicio(lista l, int valor) {
    //Aloca espaço para o novo nó
    lista novo = (lista) malloc(sizeof(no));
    //inicializan o valor do novo a parir do parâmetro passado para função
    novo->valor = valor;
    //O próximo do novo aponta para o inicio da lista, ou seja, o antigo início passa a ser o segundo elemento (proximo do primeiro)
    novo->proximo = l;
    //Atualização da lista, através do retorno do ponteiro do novo início
    return novo;
}

void exibir_lista(lista l){
    lista aux = l;
    while(aux != NULL) {
        printf("[%d]", aux->valor);
        aux = aux->proximo;
    }

    /*
    for(aux=l; aux != NULL; aux = aux->proximo) {
        printf("[%d]", aux->valor);
    }*/
    printf("\n");
}

void exibir_lista_r(lista l){
    //caso base
    if(l == NULL) {
        printf("\n");
        return ;
    }
    //caso recursivo

    exibir_lista_r(l->proximo);
    printf("[%d]", l->valor);

}

lista inserir_fim(lista l, int valor) {
    lista aux = l;
    if(l == NULL) {
        return inserir_inicio(l, valor);
    }

    while(aux->proximo != NULL) {
        aux = aux->proximo;
    }
    //aqui aux == último
    lista novo = (lista) malloc(sizeof(no));
    novo->valor = valor;
    novo->proximo = NULL;

    //último aponte para o novo
    aux->proximo = novo;
    return l;
}

lista remover_inicio(lista l) {
    if(l==NULL)
        return NULL;
    lista aux = l->proximo;
    free(l);
    return aux;
}

lista remover_fim(lista l) {
    if(l==NULL)
        return NULL;

    if(l->proximo == NULL)
       return remover_inicio(l);

    lista aux = l;
    while(aux->proximo->proximo != NULL) {
        aux = aux->proximo;
    }
    free(aux->proximo);
    aux->proximo = NULL;
    return l;


}
