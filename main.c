#include<stdio.h>
#include<stdbool.h>

int main(){
    float price = 10.00;
    bool isstudent = false; //10% discount
    bool issenior = false; //20% discount

    if(isstudent){
        if(issenior){
            printf("you get a student discount of 10%\n");
            printf("you get a senior discount of 20%\n");
            price = price * 0.7;
        }
        else{
            printf("you get a student discount of 10%\n");
            price = price * 0.9;      
        }
    }
    else{
        if(issenior){
            printf("you get a senior discount of 20%\n");
            price = price * 0.8;
    }
}
    printf("The final price is: $%.2f\n", price);
    return 0;
}
