#include "functions.h"
#include "input_check.h"
#include "proverka.h"
#include <stdio.h>

int main(){
    double num1=0, num2=0;   
    char oper=0;
    int count=0;

    input_check(count, &num1, &num2, &oper);

    proverka(oper, num1, num2);

    return 0;  
}
