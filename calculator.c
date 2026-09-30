#include<stdio.h>

int main(){

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("SIMPLE CALCULATOR\n");

    printf("Enter the value of num1: ");
    scanf("%lf", &num1);

    printf("Enter the Operation you want to do: ");
    scanf(" %c", &operator); // input buffer

    printf("Enter the value of num2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2==0){
                printf("You cant divide with Zero\n");
            }
            else{
                result = num1 / num2;
            }
            break;
    }

    printf("result: %.4lf", result);

    return 0;
}