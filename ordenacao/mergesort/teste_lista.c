#include "listasequencial.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    int valor, i;

    struct lista_sequencial lista;
    inicializar(&lista);

    for(i=0; i<10; i++) {
        printf("Digite o valor %d:", i);
        scanf("%d", &valor);
        inserir(&lista, valor);
    }

    exibir(&lista);
    merge_sort(&lista, 0, lista->tamanho);
    exibir(&lista);
}
