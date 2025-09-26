#include "functions.h"
#include "input_check.h"
#include "proverka.h"
#include <stdio.h> // TODO: remove

int main() {
  double num1 = 0, num2 = 0; // TODO: spaces
  char oper = 0;
  int count = 0;

  input_check(count, &num1, &num2, &oper);

  proverka(oper, num1, num2); // TODO: naming
                              // TODO: func to print

  return 0;
}
