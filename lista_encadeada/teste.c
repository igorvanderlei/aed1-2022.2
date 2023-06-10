#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main(int argc, char *argv) {

    //declaração da lista
    lista l1 = NULL;
    l1 = inserir_inicio(l1, 7);
    l1 = inserir_inicio(l1, 17);
    l1 = inserir_inicio(l1, 72);

    exibir_lista_r(l1);


    exit(0);
}
