#ifndef LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_H

typedef int tipo;

typedef struct no{
        int valor;
        struct no* proximo;
} no;

typedef no* lista;

lista inserir_fim(lista l, int valor);
lista inserir_inicio(lista l, int valor);
void exibir_lista( lista l);
void exibir_lista_r( lista l);
lista concatenar( lista l1,  lista l2);


#endif
