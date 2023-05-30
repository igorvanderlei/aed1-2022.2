#include <stdio.h>
#include <stdlib.h>
#include "lista_sequencial.h"

int main(int argc, char *argv) {

    //declaração da lista
    struct lista *l1, *l2;
    l1 = (struct lista *) malloc(sizeof(struct lista));
    l2 = (struct lista *) malloc(sizeof(struct lista));
    inicializar(l1);
    inicializar(l2);


    inserir_fim(l1, 10);
    inserir_fim(l1, 15);
    inserir_fim(l1, 20);
    inserir_inicio(l1, 7);

    inserir_fim(l2, 11);
    inserir_fim(l2, 12);

    concatenar(l2, l1);

    exibir_lista(l2);


    exit(0);
}
