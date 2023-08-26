#include "listasequencial.h" 
#include <stdio.h>  


void inicializar (struct lista_sequencial * l){
    l->tamanho = 0;
}

int inserir (struct lista_sequencial * l, int n){
    if(l->tamanho < MAX) {
        l->valores[l->tamanho] = n;
        l->tamanho++;
        return 1;
    } else {
        return 0;
    }
}

void exibir (struct lista_sequencial * l) {
    int i;
    for(i=0; i < l->tamanho; i++) {
        printf("%d ", l->valores[i]);
    }
    printf("\n");
}

void merge_sort(struct lista_sequencial * l, 
                int inicio, int fim) {s
     //tratar caso base
    if( ) {

    } else {
        int meio = (inicio + fim) / 2;
        merge_sort(l, inicio, meio);
        merge_sort(l, meio, fim);
        merge(l, inicio, meio, fim);
    }
}

void merge(struct lista_sequencial * l, int inicio, int meio, int fim){
    
    //Alocar dinamicamente espaço temporário para armazenar a quantidade de itens das duas listas
    int *temp; 
    int i,j,k;
    temp = (int *) malloc (sizeof(int) * (tamanho das duas listas juntas));

    for(i=inicio, j = meio, k=0; i<meio && j < fim; k++ ) {
        //escolher entre os elementos das posições i ou j
        //para copiar para a lista temp, na posição k
        //o escolhido (i ou j) será incrementado
    }
    
     //Verificar se ainda existem elementos na primeira lista para copiar para a saída temp


    //Verificar se ainda existem elementos na segunda lista para copiar para a saída temp

    //Copia de temp de volta para a lista l
    for(i=inicio, k=0; k < tamanho; k++, i++) {
        l->valores[i] = temp[k];
       
    }
     //memcpy
    //liberar a memória de temp
    free(temp):


}
