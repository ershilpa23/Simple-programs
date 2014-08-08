#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]) {
  
  int num1, num2, temp;
  if (argc < 3) {
    printf("Usage: num1 num2\n");
    exit(0);
  }
  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);  
  temp = num1;
  num1 = num2;
  num2 = temp;
  printf("/n After swapping, num1 = %d and num2 = %d\n", num1, num2);
  return 0;
}

