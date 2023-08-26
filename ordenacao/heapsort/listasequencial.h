#ifndef LISTA_SEQUENCIAL
#define LISTA_SEQUENCIAL

#define MAX 100

struct lista_sequencial {
    int valores[MAX];
    int tamanho;
};

void inicializar (struct lista_sequencial * l);
int inserir (struct lista_sequencial * l, int n);
void exibir (struct lista_sequencial * l);

void heap_sort(struct lista_sequencial * l);

void heapfy(struct lista_sequencial * l);
void re_heap(struct lista_sequencial * l, int limite);
int pai(int n);
void trocar(struct lista_sequencial * l, int i, int j);



#endif
