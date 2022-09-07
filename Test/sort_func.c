//
// Created by yapan on 7/22/22.
//

#include "sort_func.h"
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

void sortInsert(int *array, int n) {
    int position = 0;

    for(int i=0; i< n ; i++){
        position = i;
        int tmp = array[i];
        for(int j=i-1;j>=0;j--) {
            if (tmp < array[j]) {
                array[j+1] = array[j];
                position = position -1;
            } else {
                break;
            }
            array[position] = tmp;
        }
    }
}

int Partition(int *array, int left, int right) {
    int pivot = array[left];
    int flag = 1;
    while(left < right) {
        if(flag ==1) {
            if(array[right] < pivot) {
                array[left] = array[right];
                left = left +1;
                flag =0;
            } else {
                right = right -1;
            }

        } else {
            if(array[left] < pivot) {
                left = left +1;
            } else {
                array[right] = array[left];
                flag = 1;
                right = right -1;
            }
        }
    }
    array[right] = pivot;

    return right;

}

void sortQuick(int *array, int left, int right) {
    if(left == right) {
        return;
    }
    int idx= 0;
    idx = Partition(array, left, right);
    printf("idx =%d\n", idx);
    if (idx-1 > left) {
        sortQuick(array, left, idx - 1);
    }
    if (idx + 1 < right) {
        sortQuick(array, idx + 1, right);
    }
}
