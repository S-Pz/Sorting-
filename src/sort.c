#include<stdio.h>
#include<stdlib.h>

#include "sort.h"

#define MAX_TAM 10


/*typedef int ChaveTipo; // Tipo int com nome de ChaveTipo como o inteiro tem nome de chave inteira
typedef char charnome;

typedef struct Item {
    int chave;
} Item;

typedef Item Vetor[MAX_TAM + 1];
Vetor A;


void selecao(Vetor a, int *n) {
    int i, j, min;
    Item x;
    Item c[MAX_TAM];

    for (i = 1; i <= *n - 1; i++) {
        min = i;
        for (j = i + 1; j <= *n; j++) {
            if (a[j].chave < a[min].chave) {
                min = j;
            }
        }
        x = a[min];
        a[min] = a[i];
        a[i] = x;
    }
}*/
void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int* vector, int n) {
	printf("Vetor de %d entradas\n", n);
	for (int i = 0; i < n; i++) {
		printf("% 3d ", vector[i]);
	}
	printf("\n");
}

int selection_sort(int *array, int size){
    int mim_index;

    // realiza a comparação da primeira posição do vetor com a próxima
    for(int j=0; j < size-1; j++){ //roda 4x
        mim_index = j; // o mínimo começa sendo a primeira posição do vetor

        for(int i=0; i<size; i++){//roda 5x

            if(array[i] < array[mim_index]){
                mim_index = i; // pega onde se encontra a menor posição do vetor
            }
        }
        swap(&array[mim_index], &array[j]);
    }
}
int insertion_sort(int *array, int size){
    int key, j;

    for (int i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }

        array[j + 1] = key;
    }
}
void merge(int *array, int left, int mid, int right){

    int i, j, k;

    int n1 = mid - left + 1;
    int n2 = right - mid;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (int i = 0; i < n1; i++){
        L[i] = array[left + i];
    }
        
    for (j = 0; j < n2; j++){
        R[j] = array[mid + 1 + j];
    }
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int *array, int left, int right){

    if (left < right) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int mid = left + (right - left) / 2;
 
        // Sort first and second halves
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);
 
        merge(array, left, mid, right);
    }
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int quick_Partition(int *array, int low, int high){

    int pivot = array[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++){

        // If current element is smaller than the pivot
        if (array[j] < pivot){

            i++; // increment index of smaller element
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int *array, int low, int high){

    if (low < high){
        /* pi is partitioning index, arr[p] is now
        at right place */
        int partition = quick_Partition(array, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(array, low, partition - 1);
        quickSort(array, partition + 1, high);
    }
}

