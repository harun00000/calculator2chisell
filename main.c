#include <functions.c>
double num1=0, num2=0;
char operator=0; 

int main(){
printf("Введите выражение\n");
scanf("%lf %c %lf", &num1, &operator, &num2); //пользователь вводит числа

if (operator == '+'){
    printf("%lf\n", sum(num1, num2));
} elif (operator == '-'){
    printf("%lf\n", diff(num1, num2));
} elif (operator== '*'){
    printf("%lf\n", mult(num1, num2))
} elif (operator=='/'){
    if (num2==0){
        printf("деление на 0");
    }else{
        printf("%lf\n", div(num1, num2));}
} else{
    printf("вы что-то не то ввели");
}
    return 0;
}