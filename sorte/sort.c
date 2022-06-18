#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "sort.h"


static int generate_random_number(int min, int max) {
	float scale = rand() / (float) RAND_MAX;
	return min + scale * (max - min);
}

void swap(int* vector, int i, int j) {
	int temp = vector[i];
	vector[i] = vector[j];
	vector[j] = temp;
}

int *generate_random_vector(int n) {
	int* vector = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		vector[i] = generate_random_number(-n, n);
	}

	return vector;
}

int* generate_crescent_vector(int n) {
	int* vector = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		vector[i] = i;
	}

	return vector;
}

int* generate_descendent_vector(int n) {
	int* vector = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		vector[i] = n - i;
	}

	return vector;
}

void print_vector(int* vector, int n) {
	printf("Vetor de %d entradas\n", n);
	for (int i = 0; i < n; i++) {
		printf("% 3d ", vector[i]);
	}
	printf("\n");
}

bool check_sorted_vector(int *vector, int n) {
	for (int i = 1; i < n; i++) {
		if (vector[i] < vector[i - 1]) {
			return false;
		}
	}

	return true;
}

void test_sort(int* vector, int n, sort algorithm, char* algorithm_name, bool should_print) {
	int* copy_vector = malloc(n * sizeof(int));
	copy_vector = memcpy(copy_vector, vector, n * sizeof(int));

	if (should_print) {
		printf("Algoritmo: %s\n", algorithm_name);
		print_vector(copy_vector, n);
	}

	int iterations = algorithm(copy_vector, n);

	if (!check_sorted_vector(copy_vector, n)) {
		print_vector(copy_vector, n);
		printf("Problemas apos %d iteracoes\n", iterations);
		printf("Problema ao ordenar o vetor. Saindo do programa\n");
		exit(EXIT_FAILURE);
	}

	if (should_print) {
		print_vector(copy_vector, n);
		printf("Ordenado em %d iteracoes\n", iterations);
	}

	free(copy_vector);
}


int selection_sort(int* vector, int size) {
	int iterations = 0;

	for (int i = 0; i < size - 1; i++) {
		int min_index = i;
		for (int j = i; j < size; j++) {
			iterations += 1;

			if (vector[j] < vector[min_index]) {
				min_index = j;
			}
		}

		swap(vector, min_index, i);
	}
	
	return iterations;
}


int insertion_sort(int* vector, int size);


int shell_sort(int* vector, int size);


int quick_sort(int* vector, int size);


int heap_sort(int* vector, int size);


int merge_sort(int* vector, int size);

