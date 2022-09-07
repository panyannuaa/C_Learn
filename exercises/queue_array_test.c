//
// Created by yapan on 4/7/22.
//
#include <stdio.h>
#include <stdlib.h>

#include "queue_array_test.h"
#include "queue_array.h"


void queue_array_test () {
  struct QueueArray queue;

  queue_array_init(&queue, 1024);
  for (int l=0;l< 10;l++) {
    int enqueue_count;
    enqueue_count = rand()%100;

    for (int i = 0; i<enqueue_count; i++) {
      if(queue_array_is_full(&queue)) {
        break;
      }
      queue_array_enqueue(&queue, i);
    }
    printf("queue head is %d\n", queue.head);

    int dequeue_count;
    dequeue_count = rand()%100;

    //printf("dequeue_count is %d\n", dequeue_count);
    for (int i = 0; i<dequeue_count; i++) {
      int deQueue;
      if (queue_array_is_empty(&queue) != 1) {
        deQueue = queue_array_dequque(&queue);
        //printf("dequeue value is %d\n", deQueue);
      }
    }
    printf("queue tail is %d\n", queue.tail);
  }



  printf("queue count is %d\n", queue.count);
  if (queue_array_is_empty(&queue)) {
    printf("Last:queue is empty,queue count %d\n", queue.count);
  }


  queue_array_deinit(&queue);
}