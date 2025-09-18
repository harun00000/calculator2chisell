#include "functions.h"
double num1=0.0, num2=0.0;   //объявление переменных
char operator=0; 

int main(){
printf("Введите выражение\n");
scanf("%lf %c %lf", &num1, &operator, &num2);    //пользователь вводит числа

if (operator == '+'){                            // проверка операторов
    printf("%lf\n", sum(num1, num2));
} else if (operator == '-'){
    printf("%lf\n", diff(num1, num2));
} else if (operator== '*'){
    printf("%lf\n", mult(num1, num2));
} else if (operator=='/'){
    if (num2==0){
        printf("div by zero");                 //проверка дел.на 0
    }else{
        printf("%lf\n", div(num1, num2));       
    }
} else{
    printf("Error. Please, try again");           //проверка если ввели ерунду
}
    return 0;
}