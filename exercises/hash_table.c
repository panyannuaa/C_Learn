//
// Created by yapan on 4/10/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"

struct HashMapElement {
    char value[32];
};

struct HashMap {
    int idx;
    struct HashMapElement data[100];
};

int hash_table_init(struct HashMap *h) {

    return 0;
}

void hash_table_deinit(struct HashMap *h) {

}

void hash_table_insert(struct HashMap *h, int key, char *str) {




}

char *hash_table_get(struct HashMap *h, int key) {

 return NULL;
}

