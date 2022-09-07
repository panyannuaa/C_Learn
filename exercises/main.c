#include <stdio.h>
#include "link_list.h"
#include "stack_array_test.h"
#include "queue_array_test.h"
#include "str_test.h"
#include "str_to_int_test.h"
#include "array_sort_test.h"
#include "array_count.h"
#include "array_search.h"

int sum_d(int start,int end) {
    int sum=0;
    int i;

    for(i=start;i< end;i++) {
        sum+=i;
    }
    return sum;
}
int main() {
    printf("Hello, World!\n");
    int total;
    total = sum_d(0,100);
    printf("%d\n", total);
    printf("%p\n",&total);
    int *p;
    int a[100];
    for(int i=0;i<100;i++) {
        a[i]=i;

    };
    printf("a[0] address is %p\n",&a[0]);
    printf("%p\n",&a[20]);
    p =&a[0];
    //printf("p address is %p,p value is %lx\n",&p,p);
    //printf("a[5] address is %p ,value is %d\n\n",(p+4),*(p+4));

    for (;;) {

    }

    //link_list_test();


    //char b[20] = {'H','e','l','l','o','w'};
    //int *d;
    //d = &b[0];
    //printf("d is %p,*d is %x\n",d,*d);


    //stack_array_oper();
    //stack_array_test();



    //queue_array_test();
    //str_test();



    //str_to_int_test_func();


    //array_sort_test ();


    char_count_test();

    binary_search_test();

    return 0;
}
