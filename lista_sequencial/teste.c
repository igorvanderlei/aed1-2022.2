#include <stdio.h>
#include <stdlib.h>
#include "lista_sequencial.h"

int main(int argc, char *argv) {

    //declaração da lista
    struct lista l1;
    inicializar(&l1);
    inserir_inicio(&l1, 7);
    inserir_inicio(&l1, 17);
    inserir_inicio(&l1, 1);

    insertion_sort(&l1);

    exibir_lista(&l1);


    exit(0);
}
