#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>

int main() {
    int choice;
    while(1) {
        printf("1: mmap\n2:touch\n");
        scanf("%d", &choice);
        if(choice == 1) {
            //void *p = mmap(NULL, 4096*1000, PROT_READ|PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS|MAP_POPULATE, -1, 0);
            //void *p = mmap(NULL, 4096*10000, PROT_READ|PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS|MAP_POPULATE, -1, 0);
            void *p = mmap(NULL, 4096*10000, PROT_READ|PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS, -1, 0);
            printf("va=%p\n", p);
            char *x = p;
            for (int i=0;i<2;i++) {
                *x = 'a';
                x += 4096;
            }
        }
    }
    return 0;
}