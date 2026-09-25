#include<stdio.h>
#include<string.h>

int main(){

    char item[50] = "";
    float price = 0.0f;
    char currency ='$';
    float total = 0.0f;
    int quantity = 0;

    printf("what would you like to have?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("what's the price of each?: ");
    scanf("%f", &price);

    printf("how many would you like?: ");
    scanf("%d", &quantity);

    total = quantity * price;

    printf("\nyou have bought %d %s/s\n", quantity, item);
    printf("%c%.2f", currency, total);

    return 0;
}