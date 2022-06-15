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
void swap(int *array, int index, int j){

    int temp = array[index];
    array[index] = array[j];
    array[j] = temp;
}

void print_array(int* vector, int n) {
	printf("Vetor de %d entradas\n", n);
	for (int i = 0; i < n; i++) {
		printf("% 3d ", vector[i]);
	}
	printf("\n");
}

int selection_sort(int *array, int size){
    int aux, mim_index;
      print_array(array,size);

    // realiza a comparação da primeira posição do vetor com a próxima
    for(int j=0; j < size-1; j++){ //roda 4x
        mim_index = j; // o mínimo começa sendo a primeira posição do vetor

        for(int i=0; i<size; i++){//roda 5x

            if(array[i] < array[mim_index]){
                mim_index = i; // pega onde se encontra a menor posição do vetor
            }
        }
        swap(array, mim_index, j);
    }
}
int insertion_sort(int *array, int size){


}