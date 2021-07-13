#include <stdio.h>
#include <iostream>

int fun(int a, int b);

int main(void){
  int a;
  char buffer[10];
  char index = 1;
  int x = fun(40, 2);
  int y = fun(40, 2);

  buffer[10] = 1;      /* Vulnerability: Array index out of bound        */
  buffer[a] = 'a';     /* Vulnerability: Array index used before limits check*/
  buffer[index] = '1'; /* Code smell: 'char' type used as array index */
  if (1 == a)
  { /* Bug:             Access to an uninitialized value*/
    printf("a = 1");
  }

  a = 0;
  if (x != 42){
    /* NOK, empty code blocks generate violations */
  }

  x /= a; /* Bug:             Division by zero */

  printf("40 + 2 = %d\n", x);
  printf("fun = %d\n", y);
}

int fun(int a, int b){
  return a * b;
}