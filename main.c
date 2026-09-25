#include <stdio.h>

int main(){

    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;

    printf("Weight converter\n");
    printf("1. kilograms to pounds\n");
    printf("2. pounds to kilograms");
    printf("Enter your choicec(1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter your weight in kilograms: ");
        scanf("%f", &kilograms);  
    }
    else if(choice == 2){
        printf("ENter your weight in pounds: ");
        scanf("%f", &pounds);
    }
    else{
        printf("Invalide choice!, Please enter 1 or 2");
    }
}
