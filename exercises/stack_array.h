//
// Created by lizgao on 07/04/22.
//

#ifndef C_TEST_STACK_ARRAY_H
#define C_TEST_STACK_ARRAY_H
struct stack_array {
  int current_size;
  int *arr;
  int idx;
};
int stack_array_init (struct stack_array *stack);
void stack_array_deinit (struct stack_array *stack);
void stack_array_push( struct stack_array *stack, int data);
int  stack_array_pop ( struct stack_array *stack);
int stack_array_is_empty(struct stack_array *stack);
#endif // C_TEST_STACK_ARRAY_H
