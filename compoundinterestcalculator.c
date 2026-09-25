#include <stdio.h>
#include <math.h>

int main(){

double principal = 0.0;
double interest = 0.0;
int years = 0;
int timescompounded = 0;
double total = 0.0;

printf("compound interest calculator\n");

printf("Enter principal (p): ");
scanf("%lf", &principal);

printf("Enter the interest rate: ");
scanf("%lf", &interest);
interest = interest/100;

printf("Enter number of years: ");
scanf("%d", &years);

printf("Enter times compounded: ");
scanf("%d", &timescompounded);

total = principal * pow(1 + interest/timescompounded, timescompounded * years);

printf("After %d years the compound interest will be $%.2lf", years, total);

return 0;
}