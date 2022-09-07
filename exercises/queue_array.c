//
// Created by yapan on 4/7/22.
//


#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "queue_array.h"



void queue_array_init(struct QueueArray *queue, int size) {
    queue->head = 0;
    queue->tail = 0;
    queue->current_size = size;
    queue->arr = malloc(sizeof(int)*queue->current_size);
    queue->count = 0;
}

void queue_array_deinit(struct QueueArray *queue) {
    free(queue->arr);
}

void queue_array_enqueue(struct QueueArray *queue, int data) {
    queue->head= queue->head %1024;

    queue->arr[queue->head] = data;
    queue->head = queue->head +1;

    queue->count = queue->count +1;

}

int queue_array_dequque(struct QueueArray *queue) {
    queue->tail = queue->tail %1024;

    queue->tail = queue->tail +1;
    queue->count = queue->count -1;
    return queue->arr[queue->tail -1];
}

int queue_array_is_empty(struct QueueArray *queue) {
    return queue->count ==0 ;
}

int queue_array_is_full(struct QueueArray *queue) {
    return queue->count ==1024 ;
}