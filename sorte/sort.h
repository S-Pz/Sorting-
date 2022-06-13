#ifndef SORT_H
#define SORT_H


#include <stdbool.h>

typedef int* (*generate_vector) (int n);
typedef int (*sort) (int* vector, int size);


// An utility function to swap two elements within a vector
void swap(int* vector, int i, int j);

int* generate_random_vector(int n);

int* generate_crescent_vector(int n);

int* generate_descendent_vector(int n);

void print_vector(int* vector, int n);

bool check_sorted_vector(int* vector, int n);



// An utility function to test a sort algorithm
// Inside the test_sort function the vector is copied to the memory
void test_sort(int* vector, int n, sort algorithm, char* algorithm_name, bool should_print);

int selection_sort(int* vector, int size);

int insertion_sort(int* vector, int size);

int shell_sort(int* vector, int size);

int quick_sort(int* vector, int size);

int heap_sort(int* vector, int size);

int merge_sort(int* vector, int size);


#endif