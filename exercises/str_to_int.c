//
// Created by yapan on 4/8/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "str_to_int.h"


int str_2_int( char *s) {
    int sum =0;
    while (*s != 0) {
        sum = *s-'0'+sum*10;
        s++;
    }
    printf("sum is %d\n", sum);
    return sum;
}

int str_to_int( char *s) {
    int arr[100];
    char *p;
    p = s;
    int count=0;
    while (*p != 0) {

        arr[count] = *p - '0';
        count++;
        p++;
    }
    printf("length is %d,arr is %d\n", count, arr[4]);
    int sum = 0;
    int temp=0;
    for (int j=0; j < count; j++) {

        sum = sum*10 + arr[j];
    }
    printf("sum is %d\n", sum);
    return sum;
}
