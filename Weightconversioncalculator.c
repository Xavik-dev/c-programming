#include <stdio.h>

int main(){

    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;

    printf("Weight converter\n");
    printf("1. kilograms to pounds\n");
    printf("2. pounds to kilograms\n");
    printf("Enter your choicec(1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter your weight in kilograms: ");
        scanf("%f", &kilograms);  
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", &kilograms, &pounds);
    }
    else if(choice == 2){
        printf("Enter your weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds * 0.4535;
        printf("%.2f pounds is equals to %.2f kilograms\n", pounds, kilograms);
    }
    else{
        printf("Invalide choice!, Please enter 1 or 2");
    }

    return 0;
}