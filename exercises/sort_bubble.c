//
// Created by yapan on 5/11/22.
//

#include "sort_bubble.h"
void sortBubble(int *array, int n) {
    for (int i= n-1; i >=0; i--) {
        for (int j=0;j<i;j++) {
            if (array[j] > array[j+1]) {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }

        }
    }
}



