// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char * argv[]) {  // What is the type of argv? - array of pointer to char
  int i = 5;
  // The & operator here gets the address of i and stores it into pi
  int * pi = &i;
  // The * operator here dereferences pi and stores the value -- 5 --
  // into j.
  int j = *pi;

  char c[] = "6.172";
  char * pc = c;  // Valid assignment: c acts like a pointer to c[0] here.
  char d = *pc;
  printf("char d = %c\n", d);  // What does this print?

  // compound types are read right to left in C.
  // pcp is a pointer to a pointer to a char, meaning that
  // pcp stores the address of a char pointer.
  char ** pcp;
  pcp = argv;  // Why is this assignment valid? - argv is a pointer to pointer to char?

  const char * pcc = c;  // pcc is a pointer to constant char
  char const * pcc2 = c;  // What is the type of pcc2? - the same as previous declaration pcc

  // For each of the following, why is the assignment:
  *pcc = '7';  // invalid? - can't change value of const char
  pcc = *pcp;  // valid? both are pointers to a char
  pcc = argv[0];  // valid? argv[0] - a pointer to char... can we point const char pointer to an address of char?

  char * const cp = c;  // cp is a const pointer to char
  // For each of the following, why is the assignment:
  cp = *pcp;  // invalid? - can't change const pointer
  cp = *argv;  // invalid? - the same
  *cp = '!';  // valid? - can change value but not a pointer address

  const char * const cpc = c;  // cpc is a const pointer to char const
  // For each of the following, why is the assignment:
  cpc = *pcp;  // invalid? - can't change pointer and can't change value, both are constants
  cpc = argv[0];  // invalid? - the same
  *cpc = '@';  // invalid? - the same

  return 0;
}
