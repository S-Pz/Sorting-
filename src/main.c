#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"sort.h"
#include"menus.h"


int main(){

    int size, aux, compara,*array;
    double cpu_time_used;
    clock_t start,end;

    size = menu1();
    aux = menu2();
    
    switch (aux){
    case 1 :
        array = generate_random_vet(size);
        break;
    case 2 :
        array = generate_crescent_vet(size);
        break;
    case 3 :
        array = generate_descendent_vet(size);
        break;
    default:
        break;
    }
    
    start = clock();
    compara = selection_sort(array,size);
    printf("SelectionSort\n");
    //print_array(array,size);
    end = clock();

    cpu_time_used = (end - start)/CLOCKS_PER_SEC;

    printf("O tempo foi de %.4fms \n",  cpu_time_used );
    printf("O número de comparações foi de %d \n", compara );
    printf("######################################################################## \n");

/* *
 *
 * */

    start = clock();
    compara =insertion_sort(array, size);
    printf("InsertionSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = (end - start)/CLOCKS_PER_SEC;

    printf("O tempo foi de %.4fms \n", cpu_time_used);
    printf("O número  de comparações foi de %d \n", compara );
    printf("######################################################################## \n");

/* *
 *
 * */

    start = clock();
    quickSort(array, 0, size - 1);
    printf("QuickSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = (end - start)/CLOCKS_PER_SEC;

    printf("O tempo foi de %.4fms \n", cpu_time_used);
    printf("O número  de comparações foi de %d \n", compara_quick);
    printf("######################################################################## \n");

/* *
 *
 * */

    start = clock();
    compara = mergeSort(array, 0, size - 1);
    printf("MergeSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = (end - start)/CLOCKS_PER_SEC;

    printf("O tempo foi de %.4fms \n", cpu_time_used);
    printf("O número  de comparações foi de %d \n", compara );
    printf("######################################################################## \n");

/* *
 *
 * */

    start = clock();
    compara = shellSort(array, size);
    printf("ShellSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = (end - start)/CLOCKS_PER_SEC;

    printf("O tempo foi de %.4fms \n", cpu_time_used);
    printf("O número  de comparações foi de %d \n", compara );
    printf("######################################################################## \n");

/* *
 *
 * */

    start = clock();
    compara = heapSort(array, size);
    printf("HeapSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = (end - start)/CLOCKS_PER_SEC;

    printf("O tempo foi de %.4fms \n", cpu_time_used);
    printf("O número de comparações foi de %d \n", compara );
    printf("######################################################################## \n");


    return 0;

}