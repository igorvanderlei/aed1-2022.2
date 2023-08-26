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

void merge_sort(struct lista_sequencial * l, int inicio, int fim);

void merge(struct lista_sequencial * l, int inicio, int meio, int fim);

#endif
