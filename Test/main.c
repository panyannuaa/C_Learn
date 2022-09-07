#include <stdio.h>
#include "sort_func.h"
#include "unistd.h"

int a[5] = {1,2,3,4,5};

int main() {
    /*
    int array[6] = {1,5,2,4,8,2};
    sortBubble(array, 6);
    for(int i = 0; i <6; i++){
        printf("%d\n", array[i]);
    }

    int array2[6] = {9,5,3,4,8,2};
    sortInsert(array2, 6);
    for(int i = 0; i <6; i++){
        printf("%d\n", array2[i]);
    }
    */
    /*
    printf("******\n");
    int array3[] = {3,5,2,4,8,1};
    sortQuick(array3, 0, 5);
    for(int i = 0; i <6; i++){
        printf("%d\n", array3[i]);
    }
    */




   printf("addr = %p\n", &a[1]);
   printf("addr = %p\n", &a[0]);
   printf("%d", sizeof(a));
   while (0) {
       sleep(1);

   }


    return 0;
}