#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes_sort.h"

#define vet1k 1000
#define vet10k 10000
#define vet100k 100000


int main() {
    
    srand(time(NULL));
    
    int *vet1 = (int *)malloc(sizeof(int) * vet1k);
    int *vet2 = (int *)malloc(sizeof(int) * vet10k);
    int *vet3 = (int *)malloc(sizeof(int) * vet100k);
   
    printf("------------------------------------------------------------------- Selection Sort Aleatório -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, selectionsort, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, selectionsort, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, selectionsort, vetorAleatorio));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Selection Sort Decrescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, selectionsort, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, selectionsort, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, selectionsort, vetorDecrescente));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Selection Sort Crescente ---------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, selectionsort, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, selectionsort, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, selectionsort, vetorCrescente));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");
    
    printf("------------------------------------------------------------------- Inserction Sort Aleatório -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, insertionsort, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, insertionsort, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, insertionsort, vetorAleatorio));
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Inserction Sort Decrescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, insertionsort, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, insertionsort, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, insertionsort, vetorDecrescente));
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Inserction Sort Crescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, insertionsort, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, insertionsort, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, insertionsort, vetorCrescente));
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");   
    
    printf("------------------------------------------------------------------- Bubble Sort Aleatório -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, bubblesort, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, bubblesort, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, bubblesort, vetorAleatorio));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Bubble Sort Decrescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, bubblesort, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, bubblesort, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, bubblesort, vetorDecrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Bubble Sort Crescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, bubblesort, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, bubblesort, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, bubblesort, vetorCrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Merge Sort Aleatório -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorAleatorio, mergesort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorAleatorio, mergesort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorAleatorio, mergesort));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Merge Sort Decrescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorDecrescente, mergesort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorDecrescente, mergesort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorDecrescente, mergesort));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Merge Sort Crescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorCrescente, mergesort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorCrescente, mergesort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorCrescente, mergesort));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Heap Sort Aleatório -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, heapsort, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, heapsort, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, heapsort, vetorAleatorio));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Heap Sort Decrescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, heapsort, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, heapsort, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, heapsort, vetorDecrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Heap Sort Crescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, heapsort, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, heapsort, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, heapsort, vetorCrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Quick Sort Aleatório -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorAleatorio, quicksort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorAleatorio, quicksort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorAleatorio, quicksort));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Quick Sort Decrescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorDecrescente, quicksort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorDecrescente, quicksort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorDecrescente, quicksort));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Quick Sort Crescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorCrescente, quicksort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorCrescente, quicksort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorCrescente, quicksort));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Counting Sort Aleatório -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerCounting(vet1, vet1k, 99, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerCounting(vet2, vet10k, 99, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerCounting(vet3, vet100k, 99, vetorAleatorio));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Counting Sort Decrescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerCounting(vet1, vet1k, 99, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerCounting(vet2, vet10k, 99, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerCounting(vet3, vet100k, 99, vetorDecrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Counting Sort Crescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerCounting(vet1, vet1k, 99, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerCounting(vet2, vet10k, 99, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerCounting(vet3, vet100k, 99, vetorCrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Radix Sort Aleatório -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, radixsort, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, radixsort, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, radixsort, vetorAleatorio));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Radix Sort Decrescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, radixsort, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, radixsort, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, radixsort, vetorDecrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Radix Sort Crescente -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, radixsort, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, radixsort, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, radixsort, vetorCrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    free(vet1);
    free(vet2);
    free(vet3);
    
}