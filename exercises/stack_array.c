//
// Created by lizgao on 07/04/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "stack_array.h"


int stack_array_init (struct stack_array *stack) {
  stack->idx = 0;
  stack->current_size= 32;
  stack->arr = malloc(sizeof(int)*stack->current_size);
  return 0;
}

void stack_array_deinit (struct stack_array *stack) {
    free(stack->arr);
}

void stack_array_push( struct stack_array *stack, int data) {
  if (stack->idx >= stack->current_size) {
      int *new_arr;
    stack->current_size = stack->current_size*2;
    new_arr = malloc(sizeof(int)*stack->current_size);
    memcpy(new_arr,stack->arr,stack->idx);

    free(stack->arr);
    stack->arr = new_arr;
  }

  stack->arr[stack->idx] = data;
  stack->idx = stack->idx +1;

}

int  stack_array_pop ( struct stack_array *stack){
  stack->idx  = stack->idx - 1;
  return stack->arr[stack->idx];
}

int stack_array_is_empty(struct stack_array *stack) {
  return stack->idx == 0;

}
