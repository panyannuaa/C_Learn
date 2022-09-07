//
// Created by yapan on 4/7/22.
//

#ifndef C_TEST_QUEUE_ARRAY_H
#define C_TEST_QUEUE_ARRAY_H
struct QueueArray {
    int current_size;
    int head;
    int tail;
    int *arr;
    int count;
};
void queue_array_init(struct QueueArray *queue, int size);
void queue_array_deinit(struct QueueArray *queue);
void queue_array_enqueue(struct QueueArray *queue, int data);
int queue_array_dequque(struct QueueArray *queue);
int queue_array_is_full(struct QueueArray *queue);
int queue_array_is_empty(struct QueueArray *queue);

#endif //C_TEST_QUEUE_ARRAY_H
