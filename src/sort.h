#ifndef _SORT_H
#define _SORT_H



void print_array(int *, int);
void swap(int *, int *);

int selection_sort(int *, int);
int insertion_sort(int *, int);

int quick_Partition(int *, int, int);
void quickSort(int *, int, int);

void merge(int *, int, int, int);
void mergeSort(int *, int, int);


#endif