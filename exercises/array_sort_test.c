//
// Created by yapan on 4/8/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "arrary_sort.h"
#include "array_sort_test.h"

void array_sort_test () {
    printf("start to do sort array \n");
    int arr[10] = {2,1,4,5,3,9,8,7,6,10};
    int *p;
    p = &arr[0];
    array_sort_bubble(p, 10);
    //array_sort_insert(p, 10);

    printf("sorted array are:\n");
    for (int i=0;i <10;i++) {
        printf("%d\n",arr[i]);
    }

}

