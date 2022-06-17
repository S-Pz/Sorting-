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

void merge(int *, int, int, int);
void mergeSort(int *, int, int);

int quick_Partition(int *, int, int);
void quickSort(int *, int, int);

void shellSort(int *, int);

#endif