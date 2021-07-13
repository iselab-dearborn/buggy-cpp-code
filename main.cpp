#include <stdio.h>
#include <iostream>

int fun(int a, int b);

int main(void)
{
  int a;
  char buffer[10];
  char index = 1;
  int x = fun(40, 2);
  int y = fun(40, 2);

  /* Vulnerability: Array index out of bound        */
  buffer[10] = 1;
  /* Vulnerability: Array index used before limits check*/
  buffer[a] = 'a';
  /* Code smell: 'char' type used as array index */
  buffer[index] = '1';
  /* Bug: Access to an uninitialized value*/
  if (1 == a)
  {
    printf("a = 1");
  }

  a = 0;
  if (x != 42)
  {
    /* NOK, empty code blocks generate violations */
  }

  /* Bug: Division by zero */
  x /= a;

  printf("40 + 2 = %d\n", x);
  printf("fun = %d\n", y);
}

int fun(int a, int b)
{
  return a * b;
}