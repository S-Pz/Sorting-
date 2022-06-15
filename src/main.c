#include<stdio.h>
#include<stdlib.h>

#include"sort.h"

int main(){

    int array[]={21,12,3,4,1};
    int size = sizeof(array)/sizeof(int);

    selection_sort(array,size);
    
    print_array(array,size);

    return 0;
}