#include <stdio.h>
#include "bubble.h"

struct Node {
    int a1;
    int a2;
    int a3;
    int a4;
    int a5;
};
struct  __attribute__((packed, aligned(16))) Ch {
    int a1;
    int a2;
    int a3;
    int a4;
    int a5;
    char a;
};

int main() {

    int alist[5] = {4,3,7,5,1};
    bubbleSort(alist,5);
    for (int i=0; i<5; i++) {
        printf("%d\n", alist[i]);
    }
    int a = 1;
    int b = 2;
    printf("%lu\n",sizeof(struct Node));
    printf("%lu\n",sizeof(struct Ch));


    return 0;
}