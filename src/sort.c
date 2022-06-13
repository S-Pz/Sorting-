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

int selection_sort(int *array, int size){
    int aux;

    // realiza a comparação da primeira posição do vetor com a próxima
    for(int j=0; j < size-1; j++){
        int mim_index = j; // o mínimo começa sendo a primeira posição do vetor
           
        for(int i=0; i<size; i++){

            if(array[i] < array[mim_index]){
                mim_index = i; // pega onde se encontra a menor posição do vetor
            }
        }
        //|12|2|3|4|5|6|7|
        // j
        if(array[j] > array[mim_index]){// realiza a troca se o a posição do valor for maior que a do mim
        
           aux = array[mim_index];
           array[j] = array[mim_index];

           array[mim_index] = aux; 
               
        }
    }
}