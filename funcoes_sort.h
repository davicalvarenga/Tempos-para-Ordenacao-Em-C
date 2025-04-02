#ifndef FUNCOES_SORT_H
#define FUNCOES_SORT_H

// Ponteiro para função de ordenação
typedef void (*SortFunction)(int *, int);
typedef void (*SortFunctionType)(int *, int);
typedef void (*SortFunctionMergeIQuick)(int *, int, int);

double timer(int *vet, int tamanho, SortFunction sortfunc, SortFunctionType functype);
double timerMergeIQuick(int *vet, int tamanho, int inicio, int fim, SortFunctionType functype, SortFunctionMergeIQuick sortfunc);
double timerCounting(int *vet, int tamanho, int k, SortFunctionType sorttype);
void vetorAleatorio(int *vetor, int tamanho);
void vetorImprimir(int *vetor, int tamanho);
void vetorDecrescente(int *vetor, int tamanho);
void vetorCrescente(int *vetor, int tamanho);

// Funções de ordenação
void swap(int *a, int *b);
void selectionsort(int*v, int N);
void insertionsort(int*v, int N);
void bubblesort(int*v, int N);
void merge(int *v, int in, int M, int f);
void mergesort(int *V, int i, int f);
void heapify(int*v, int N, int i);
void buildheap(int*v, int N);
void heapsort(int*v, int N);
int partition(int*v, int p, int r);
void quicksort(int*v, int p, int r);
void countingsort(int *T, int N, int k, int *V);
void radixsort(int *V, int N);






#endif
