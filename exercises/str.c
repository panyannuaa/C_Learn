//
// Created by lizgao on 08/04/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "str.h"


int str_length(char *s) {
  int count=0;
  char *p;
  p = s;
  while(*p != 0x00) {
    p++;
    count++;
  }
  return count;
}

void str_concat(char *s1, char *s2) {
  char *p1,*p2;
  p1 = s1;
  p2=s2;

  while(*p1 != 0) {
    p1++;
  }
  while(*p2 != '\0') {
    *p1 =*p2;
    p1++;
    p2++;
  }
  printf("str_concat p1 address %p\n", &p1);

}

void str_copy(char *s1, char *s2) {

  char *p1,*p2;
  p1=s1;
  p2=s2;
  while(*p2 != '\0') {
    *p1 =*p2;
    p1++;
    p2++;
  }

}

