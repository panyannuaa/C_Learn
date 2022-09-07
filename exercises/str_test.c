//
// Created by lizgao on 08/04/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "str.h"
#include "str_test.h"

void str_test() {
  char s1[100]={'H','e','l','l','o',' ','w','o','r','l','d'};
  char s2[50] = {'l','o','v','e',' ','u'};
  int s1Len,s2Len;
  char *p1 = &s1[0];
  char *p2 = s2;


  printf("p1 address is:%p\n",&p1);
  printf("p1[0] value is %c\n", p1[0]);
  printf("p1 value is %s\n", p1);
  s1Len = str_length(p1);
  s2Len = str_length(p2);

  str_concat(s1, s2);
  str_copy(s1,s2);
  int newLen;
  newLen = str_length(s1);
  printf("new string are:%s\n",s1);
  printf("p1 is %p\n",p1);


}