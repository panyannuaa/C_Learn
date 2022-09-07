//
// Created by yapan on 4/8/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "arrary_sort.h"

void array_sort_bubble(int *array, int len) {
    int temp;
    for (int i =len-1; i >= 0; i--) {
        for (int j=0;j<i;j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] =array[j+1];
                array[j+1] =temp;
            }
        }
    }
}



void array_sort_insert(int *array, int len) {
    for(int i= 1; i < len;i++) {
        int j;

        for(j= 0; j < i; j++)  {

            if (array[i] < array[j]) {
                break;
            }
        }


        int temp = array[i];
        for(int lp=i-1;lp >=j;lp--) {
            array[lp+1] = array[lp];
        }
        array[j] = temp;
    }

}