#include "input_check.h"
#include <stdio.h>

void input_check(int count, double *num1, double *num2, char *oper) {
  do {
    printf("input operation: ");
    count = scanf(" %lf %c %lf", num1, oper, num2);
    if (count == 3) {
      break;
    } else {
      printf("Input error. please, try again\n");
      int ch; // TODO: unintialized
      while ((ch = getchar()) != '\n')
        ;
    }
  } while (1);
}
