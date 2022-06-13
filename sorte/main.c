#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"


int main() {
	srand(time(0));

	int n = 10;
	int* vector = generate_random_vector(n);

	printf("Randomico\n");
	test_sort(vector, n, selection_sort, "Selecao", true);
	// test_sort(vector, n, insertion_sort, true);

	free(vector);


	printf("\n\nCrescente\n");
	vector = generate_crescent_vector(n);

	test_sort(vector, n, selection_sort, "Selecao", true);
	// test_sort(vector, n, insertion_sort, true);

	free(vector);


	printf("\n\nDecrescente\n");
	vector = generate_descendent_vector(n);

	test_sort(vector, n, selection_sort, "Selecao", true);
	// test_sort(vector, n, insertion_sort, true);

	free(vector);

	return 0;
}