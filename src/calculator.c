#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int mul(int a, int b) {
  return a * b;
}

float div(float a, float b) {
  return a / b;
}

int main()
{
  printf("Hello, world!");

  printf("1 + 1 = %d", add(1, 1));

  printf("1 - 1 = %d", sub(1, 1));
  
  return 0;
}
