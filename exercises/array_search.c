//
// Created by yapan on 4/10/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "array_search.h"


int binary_search(int *array, int len,int data) {

    int low = 0;
    int high = len-1;
    int midPoint;
    while (low < high) {
        midPoint = (low+high)/2;
        if (data > array[midPoint]) {
            low=midPoint+1;
        } else {
            high = midPoint;
        }
        printf("low=%d, high=%d\n", low,high);
    }
    return low;
}


void binary_search_test() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int idx;
    int data =7;
    idx = binary_search(arr, 10 ,data);
    printf("data %d in array[%d]\n", data,idx);
}
