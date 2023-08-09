#ifndef LISTA_SEQUENCIAL_H
#define LISTA_SEQUENCIAL_H

#define MAX 1000

struct lista{
        int elementos[MAX];
        int particao;
};

void inicializar(struct lista *l);

int inserir_fim(struct lista *l, int valor);
int inserir_inicio(struct lista *l, int valor);
void exibir_lista(struct lista *l);
int concatenar(struct lista *l1, struct lista *l2);

void troca(struct lista *l, int pos1, int pos2);

void bubble_sort(struct lista *l);
void selection_sort(struct lista *l);
int procurar_menor(struct lista *l, int inicio);
int insertion_sort(struct lista *l);
void inserir_ordem(struct lista *l, int valor, int limite);


#endif
