//
// Created by yapan on 7/15/22.
//

#include "bubble.h"
void bubbleSort(int *alist, int n) {
    for(int i=n-1; i >=0; i-- ) {
        for(int j=0; j<i; j++) {
            int tmp;
            if (alist[j] > alist[j+1]) {
                tmp = alist[j];
                alist[j] = alist[j+1];
                alist[j+1] = tmp;
            }

        }
    }
}
