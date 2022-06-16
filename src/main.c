#include<stdio.h>
#include<stdlib.h>

#include"sort.h"

int main(){

    int array[]={21,12,3,4,1};
    int size = sizeof(array)/sizeof(array[0]);

    selection_sort(array,size);
    printf("Selection Sort algoritm \n");
    print_array(array,size);

    insertion_sort(array, size);
    printf("Insertion Sort algoritm \n");
    print_array(array,size);

    quickSort(array, 0, size - 1);
    printf("quickSort algoritm \n");
    print_array(array,size);

    mergeSort(array, 0, size - 1);
    printf("MergeSort algoritm \n");
    print_array(array,size);

    return 0;
}