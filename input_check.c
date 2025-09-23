#include "input_check.h"
void input_check(int count, double num1, double num2, char operator){
  do {
    printf("input operation: ");
    count =scanf("%lf %c %lf", &num1, &operator, &num2);
    if (count == 3) {
        break;
    } else {
        printf("Input error. please, try again\n");
        int ch;
        while ((ch = getchar()) != '\n');
    }
    } while (1);
}