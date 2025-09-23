 #include <stdio.h>
 #include "proverka.h"
 #include "functions.h"
 void proverka(char oper, double num1, double num2){
    if (oper == '+'){                         
        printf("%lf\n", sum(num1, num2));
    } else if (oper == '-'){
        printf("%lf\n", diff(num1, num2));
    } else if (oper== '*'){
        printf("%lf\n", mult(num1, num2));
    } else if (oper=='/'){
        if (num2==0){
            printf("Div by zero");                
        }else{
            printf("%lf\n", div(num1, num2));       
        }
    } else{
        printf("Error. Please, try again");         
    }
 }