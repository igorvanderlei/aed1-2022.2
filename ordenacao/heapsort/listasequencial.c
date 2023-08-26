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


void heapfy(struct lista_sequencial * l){
    int i, p, j;
    //A variável i delimita o espaço do heap (esquerda do i) e o array que ainda não foi trabalhado
    for(i=1; i<l->tamanho; i++) {
        //i++ é equivalente a "inserir" um elemento no fim do head
        for(j = i; j > 0; j = pai(j)) { //reposiciona o elemento que foi "inserido", seguindo a regra do heap de máximo
            p = pai(j);
            if(l->valores[j] > l->valores[p]) {
                trocar(l, j, p); 
            } else {
                break;
            }
        }
    }
}

void heap_sort(struct lista_sequencial * l) {
    //primeira parte do algoritmo consiste em organizar o heap
    int i;
    heapfy(l);
    
    //Sequencia de trocas e reorganizações
    //Percorrer a lista do fim ao início,  chamando os métodos troca e re_heap
    for(i=l->tamanho-1; i>0; i--) {
        troca(l, 0, i);
        re_heap(l, i);
    }
}

void re_heap(struct lista_sequencial * l, int limite){
    //Percorrer da raiz aos filhos...
    //Seleciona a posição do maior filho
    //Se o maior filho for maior que o elemento, troca a posição deles e continua a verificação, a partir do maior filho
    //Atenção!!! Cuidado com o limite...Saber se existe zero, um ou dois filhos.

}


int pai(int n) {
    if(n > 0) {
       return (n-1) / 2; 
    } else {
        return -1;
    }
}


//Todo
void trocar(struct lista_sequencial * l, int i, int j){

}

