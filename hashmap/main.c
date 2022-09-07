#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int i = 5;
    printf("%ld\n", sizeof(i++));
    printf("%ld\n", sizeof(++i));
    return 0;
}