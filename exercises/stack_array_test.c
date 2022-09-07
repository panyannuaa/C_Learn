//
// Created by lizgao on 07/04/22.
//
#include <stdio.h>
#include "stack_array.h"
#include "stack_array_test.h"
void stack_array_test() {
  struct stack_array a;
  struct stack_array b;
  stack_array_init(&a);
  stack_array_init(&b);

  for(int i=0; i< 1000000;i++) {
      stack_array_push(&a, i);
      //printf("a[%d] is %d\n",i, a.arr[i]);
  }

  int p_value;
  if(stack_array_is_empty(&a) != 1) {
    p_value = stack_array_pop(&a);
    printf("pop value is  is %d\n", p_value);
  }

  if(stack_array_is_empty(&a) != 1) {
    p_value = stack_array_pop(&a);
    printf("pop value is  is %d\n", p_value);
  }


  stack_array_deinit(&a);


}
