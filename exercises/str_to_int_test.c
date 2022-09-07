//
// Created by yapan on 4/8/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "str_to_int.h"
#include "str_to_int_test.h"


void str_to_int_test_func() {
    char s[10] ={'1','2','3','4','5','7','8',0};
    char *p;
    p = &s[0];
    int number;
    //number = str_to_int( p);
    number = str_2_int( p);
    printf("number is %d\n", number);
}