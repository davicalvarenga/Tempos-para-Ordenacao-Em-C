#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include "funcoes_sort.h"


// Função de cronometragem generalizada para qualquer algoritmo de ordenação
double timer(int *vet, int tamanho, SortFunction sortfunc, SortFunctionType functype) { 
    functype(vet, tamanho);  // Gera um vetor aleatório
    clock_t inicio = clock();
    sortfunc(vet, tamanho); // Chama o algoritmo de ordenação passado como parâmetro
    clock_t fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

double timerMergeIQuick(int *vet, int tamanho, int inicio, int fim, SortFunctionType functype, SortFunctionMergeIQuick sortfunc) { 
    functype(vet, tamanho);  // Gera um vetor aleatório
    clock_t inicioClock = clock();
    sortfunc(vet, inicio, fim); // Chama o algoritmo de ordenação passado como parâmetro
    clock_t fimClock = clock();
    return (double)(fimClock - inicioClock) / CLOCKS_PER_SEC;
}

double timerCounting(int *vet, int tamanho, int k, SortFunctionType sorttype) { 
    sorttype(vet, tamanho);
    clock_t inicio = clock();
    countingsort(vet, tamanho, k, vet); // Chama a função de ordenação passada como parâmetro
    clock_t fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

void vetorAleatorio(int *vet, int N) {
    for (int i = 0; i < N; i++) {
        vet[i] = rand() % 100; // Garante valores entre 0 e 99
    }
}

void vetorCrescente(int *vet, int N) {
    for (int i = 0; i < N; i++) {
        vet[i] = i % 100; // Garante que nunca passa de 99
    }
}

void vetorDecrescente(int *vet, int N) {
    for (int i = 0; i < N; i++) {
        vet[i] = 99 - (i % 100); // Garante valores entre 0 e 99
    }
}

// Imprime o vetor
void vetorImprimir(int *vetor, int tamanho) {
    for (int i=0 ; i<tamanho ; i++) {
        printf("%d ",vetor[i]);
    }
    printf("\n");
}

// Função Swap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Selection sort;
void selectionsort(int *v, int N) {
    int i, j, menor, aux;
    for (i = 0; i < N - 1; i++) {
        menor = i;
        for (j = i + 1; j < N; j++) {
            if (v[j] < v[menor]) { 
                menor = j;
            }
        }
            if (menor != i) {
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
}

// Insertion Sort
void insertionsort(int*v, int N) {
    int i, j, aux;
    for(i=1;i<N;i++) {
        aux=v[i];
        for(j=i-1; j>=0 && aux<v[j]; j--) {
            v[j+1]=v[j];
        }
        v[j+1]=aux;
    }
}

// Bubble Sort COM variável de controle
void bubblesortc(int *v, int N) {
    int i, j, aux;
    bool k = true;
    for(i = 0; i < N - 1 && k; i++) {
        k = false;  
        for(j = 0; j < N - 1 - i; j++) { 
            if(v[j] > v[j+1]) {
                k = true;
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}


// Bubble Sort SEM Variavel de controle
void bubblesorts(int *v, int N) {
    int i,j,aux;
    for(i = 0; i < N - 1; i++) {
        for(j = 0; j < N-1; j++) {
            if(v[j]> v [j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

// Merge Sort
void merge(int *v, int in, int M, int f);

void mergesort(int *V, int i, int f) {
    if (i < f) {
        int M = (i + f) / 2;
        mergesort(V, i, M);
        mergesort(V, M + 1, f);
        merge(V, i, M, f);
    }
}

void merge(int *v, int in, int M, int f) {
    int A[f - in + 1];  
    int i, j, K;
    for (i = in, j = M + 1, K = 0; i <= M && j <= f; K++) {
        if (v[i] <= v[j]) {
            A[K] = v[i++];
        } else {
            A[K] = v[j++];
        }
    }
    for (; i <= M; i++, K++) {
        A[K] = v[i];
    }
    for (; j <= f; j++, K++) {
        A[K] = v[j];
    }
    for (K = 0, i = in; i <= f; i++, K++) {
        v[i] = A[K];
    }
}

// Heap Sort
void heapify(int*v, int N, int i) {
    int e=2*i+1;
    int r=2*i+2;
    int maior = i;
    if(e<N && v[e]>v[i]) {
        maior=e;
    }
    else {
        maior=i;
    }
    if(r<N && v[r]>v[maior]) {
        maior=r;
    }
    if(maior!=i) {
        swap(&v[i],&v[maior]);
        heapify(v,N,maior);
    }
}

void buildheap(int*v, int N) {
    for(int i = (N-2)/2; i>=0; i--) {
        heapify(v,N,i);
    }
}

void heapsort(int*v, int N) {
    buildheap(v,N);
    while(N > 1) {
        swap(&v[0],&v[N-1]);
        N--;
        heapify(v,N,0);
    }
}

// Quick Sort
int partition(int*v, int p, int r);

void quicksort(int*v, int p, int r) {
    if(p < r) {
        int q = partition(v,p,r);
        quicksort(v, p, q);
        quicksort(v, q+1, r);
    }
}

int partition(int*v, int p, int r) {
    int x = v[p];
    int i = p-1;
    int j = r+1;
    while(1) {
        do {
            j--;
        } while(v[j]>x);
        do {
            i++;
        } while(v[i]<x);
        if(i<j) {
            swap(&v[i],&v[j]);
        }
        else {
            return j;
        }
    }
}

// Função Counting Sort
void countingsort(int *T, int N, int k, int *V) {
    int i;

    // Aloca dinamicamente os vetores
    int *C = (int *)calloc(k + 1, sizeof(int)); 
    int *A = (int *)malloc(N * sizeof(int));

    if (C == NULL || A == NULL) {
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    // Contagem das ocorrências
    for (i = 0; i < N; i++) {
        if (T[i] < 0 || T[i] > k) { // Verifica se T[i] está dentro do intervalo válido
            printf("Erro: índice T[%d] = %d está fora do intervalo 0 a %d\n", i, T[i], k);
            exit(1);
        }
        C[T[i]]++;
    }

    // Faz o acúmulo em ordem decrescente
    for (i = k - 1; i >= 0; i--) {
        C[i] += C[i + 1];
    }

    // Ordena no vetor A
    for (i = 0; i < N; i++) {
        A[C[T[i]] - 1] = V[i];
        C[T[i]]--;
    }

    // Copia de volta para V
    memcpy(V, A, N * sizeof(int));

    // Libera a memória alocada
    free(C);
    free(A);
}

// Radix Sort
void radixsort(int *V, int N) {
    int maior = V[0];
    for (int i = 1; i < N; i++) {
        if (V[i] > maior) {
            maior = V[i];
        }
    }
    
    for (int exp = 1; maior / exp > 0; exp *= 10) {
        int T[N];
        for (int i = 0; i < N; i++) {
            T[i] = (V[i] / exp) % 10;
        }
        countingsort(T, N, 9, V);
    }
}