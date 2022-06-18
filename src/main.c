#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#include"sort.h"
#include"menu.h"


int main(){

    
    int size, aux, compara;
    float start, end;
    float cpu_time_used;
    
MENU:    
    size = menu1();
    aux = menu2();
    int array[size], array1[size];
    
    switch (aux){
    case 1 :
        array[size] = generate_random_vet(size);
        break;
    case 2 :
        array[size] = generate_crescent_vet(size);
        break;
    case 3 :
        array[size] = generate_descendent_vet(size);
        break;
    default:
        break;
    }
    
    copy(array1, array, size);
    


/* *
 *
 * */
 
    copy(array, array1, size);
    
    start = clock();
    //printf("antes\n");
    //print_array(array,size);
    compara = insertion_sort(array, size);
    printf("InsertionSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = ((double) (end - start));
    printf("######################################################################## \n");
    printf("O tempo foi de %f ms \n", cpu_time_used/1000);
    printf("O número  de comparações foi de: %d \n", compara );
    printf("######################################################################## \n\n");

/* *
 *
 * */

    copy(array, array1, size);

    start = clock();
    //printf("antes\n");
    //print_array(array,size);
    compara = mergeSort(array, 0, size - 1);
    printf("MergeSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = ((double) (end - start));
    printf("######################################################################## \n");
    printf("O tempo foi de %f ms \n", cpu_time_used/1000);
    printf("O número  de comparações foi de: %d \n", compara );
    printf("######################################################################## \n\n");


/* *
 *
 * */

    copy(array, array1, size);

    start = clock();
    //printf("antes\n");
    //print_array(array,size);
    compara = heapSort(array, size);
    printf("HeapSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = ((double) (end - start));
    printf("######################################################################## \n");
    printf("O tempo foi de %f ms \n", cpu_time_used/1000);
    printf("O número de comparações foi de: %d \n", compara );
    printf("######################################################################## \n\n");


/* *
 *
 * */
 

    start = clock();
    //printf("antes\n");
    //print_array(array,size);
    compara = selection_sort(array,size);
    printf("SelectionSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = ((end - start));
    printf("######################################################################## \n");
    printf("O tempo foi de %f ms \n",  cpu_time_used/1000);
    printf("O número de comparações foi de: %d \n", compara );
    printf("######################################################################## \n\n");


/* *
 *
 * */

    copy(array, array1, size);

    start = clock();
    //printf("antes\n");
    //print_array(array,size);
    compara = shellSort(array, size);
    printf("ShellSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = ((double) (end - start));
    printf("######################################################################## \n");
    printf("O tempo foi de %f ms \n", cpu_time_used/1000);
    printf("O número  de comparações foi de: %d \n", compara );
    printf("######################################################################## \n\n");

/* *
 *
 * */

    copy(array, array1, size);

    start = clock();
    //printf("antes\n");
    //print_array(array,size);
    quickSort(array, 0, size - 1);
    printf("QuickSort\n");
    //print_array(array,size);
    end = clock();
    cpu_time_used = ((double) (end - start));
    compara = quickSort2(array, 0, size - 1);
    printf("######################################################################## \n");
    printf("O tempo foi de %f ms \n", cpu_time_used/1000);
    printf("O número  de comparações foi de: %d \n", compara);
    printf("######################################################################## \n\n");


goto MENU;

return 0;
}