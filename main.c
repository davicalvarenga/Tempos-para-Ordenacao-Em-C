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
   
    printf("------------------------------------------------------------------- Selection Sort Aleatório (Caso Médio O(n2)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, selectionsort, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, selectionsort, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, selectionsort, vetorAleatorio));
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Selection Sort Decrescente (Pior Caso O(n2)) ---------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, selectionsort, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, selectionsort, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, selectionsort, vetorDecrescente));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Selection Sort Crescente (Melhor Caso O(n2)) ---------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, selectionsort, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, selectionsort, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, selectionsort, vetorCrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");
    
    printf("------------------------------------------------------------------- Inserction Sort Aleatório (Caso Médio O(n2)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, insertionsort, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, insertionsort, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, insertionsort, vetorAleatorio));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Inserction Sort Decrescente (Pior Caso O(n2)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, insertionsort, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, insertionsort, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, insertionsort, vetorDecrescente));
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Inserction Sort Crescente (Melhor Caso O(n)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, insertionsort, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, insertionsort, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, insertionsort, vetorCrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");   
    
    printf("------------------------------------------------------------------- Bubble Sort C/ Variavel Aleatório (Caso Médio O(n2)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, bubblesortc, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, bubblesortc, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, bubblesortc, vetorAleatorio));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Bubble Sort C/ Variavel Decrescente (Pior Caso O(n2)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, bubblesortc, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, bubblesortc, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, bubblesortc, vetorDecrescente));
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Bubble Sort C/ Variavel Crescente (Melhor Caso O(n)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, bubblesortc, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, bubblesortc, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, bubblesortc, vetorCrescente));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
        
    printf("------------------------------------------------------------------- Bubble Sort S/ Variavel Aleatório (Caso Médio O(n2)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, bubblesorts, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, bubblesorts, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, bubblesorts, vetorAleatorio));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Bubble Sort S/ Variavel Decrescente (Pior Caso O(n2)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, bubblesorts, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, bubblesorts, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, bubblesorts, vetorDecrescente));
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Bubble Sort S/ Variavel Crescente (Melhor Caso O(n2)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, bubblesorts, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, bubblesorts, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, bubblesorts, vetorCrescente));
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Merge Sort Aleatório (Caso Médio Caso O(n log n)) -----------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorAleatorio, mergesort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorAleatorio, mergesort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorAleatorio, mergesort));
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Merge Sort Decrescente (Melhor Caso O(n log n)) ---------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorDecrescente, mergesort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorDecrescente, mergesort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorDecrescente, mergesort));
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Merge Sort Crescente (Melhor Caso O(n log n)) ---------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorCrescente, mergesort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorCrescente, mergesort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorCrescente, mergesort));
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Heap Sort Aleatório (Caso Médio Caso O(n log n)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, heapsort, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, heapsort, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, heapsort, vetorAleatorio));
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Heap Sort Decrescente (Pior Caso O(n log n)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, heapsort, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, heapsort, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, heapsort, vetorDecrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Heap Sort Crescente (Melhor Caso O(n log n)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, heapsort, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, heapsort, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, heapsort, vetorCrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Quick Sort Aleatório (Caso Médio Caso O(n log n)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorAleatorio, quicksort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorAleatorio, quicksort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorAleatorio, quicksort));
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Quick Sort Decrescente (Pior Caso O(n2)) ----------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorDecrescente, quicksort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorDecrescente, quicksort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorDecrescente, quicksort));
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Quick Sort Crescente (Melhor Caso O(n log n/Se pivo bom))-------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerMergeIQuick(vet1, vet1k, 0, vet1k, vetorCrescente, quicksort)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerMergeIQuick(vet2, vet10k, 0, vet10k, vetorCrescente, quicksort));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerMergeIQuick(vet3, vet100k, 0, vet100k, vetorCrescente, quicksort));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Counting Sort Aleatório (Caso Médio O(n+k)) --------------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerCounting(vet1, vet1k, 99, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerCounting(vet2, vet10k, 99, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerCounting(vet3, vet100k, 99, vetorAleatorio));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Counting Sort Decrescente (Pior Caso O(n+k)) -------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerCounting(vet1, vet1k, 99, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerCounting(vet2, vet10k, 99, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerCounting(vet3, vet100k, 99, vetorDecrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Counting Sort Crescente (Melhor Caso O(n+k)) ----------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timerCounting(vet1, vet1k, 99, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timerCounting(vet2, vet10k, 99, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timerCounting(vet3, vet100k, 99, vetorCrescente));
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("------------------------------------------------------------------- Radix Sort Aleatório (Caso Médio O(nk)) -------------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, radixsort, vetorAleatorio)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, radixsort, vetorAleatorio));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, radixsort, vetorAleatorio));
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Radix Sort Decrescente (Pior Caso O(nk)) -----------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, radixsort, vetorDecrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, radixsort, vetorDecrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, radixsort, vetorDecrescente));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("------------------------------------------------------------------- Radix Sort Crescente (Melhor Caso O(nk)) -------------------------------------------------------------------------\n");
    printf("tempo necessario para realizacao de 1k: %lf\n", timer(vet1, vet1k, radixsort, vetorCrescente)); 
    printf("tempo necessario para realizacao de 10k: %lf\n", timer(vet2, vet10k, radixsort, vetorCrescente));
    printf("tempo necessario para realizacao de 100k: %lf\n", timer(vet3, vet100k, radixsort, vetorCrescente));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    
    free(vet1);
    free(vet2);
    free(vet3);
    
}