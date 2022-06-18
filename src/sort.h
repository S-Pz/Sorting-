#ifndef _SORT_H
#define _SORT_H


typedef int *( *generate_vector) (int n);

void swap(int *, int *);

int *generate_random_vet(int);
int *generate_crescent_vet(int);
int *generate_descendent_vet(int);

void print_array(int *, int);

int selection_sort(int *, int);
int insertion_sort(int *, int);

int merge(int *, int, int, int);
int mergeSort(int *, int, int);

int quick_Partition(int *, int, int, int *);
int quickSort(int *, int, int);

int shellSort(int *, int);

int criaHeap(int *, int, int);
int heapSort(int *, int);

#endif