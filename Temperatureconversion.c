#include <stdio.h>

int main(){

    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature conversion program\n");
    printf("C: celsius to fahrenheit\n");
    printf("F: fahrenheit to celsius\n");
    printf("Enter your choice (C or F): ");
    scanf("%c", &choice);
    
    if(choice == 'C'){
        // celsius to fahrenheit
        printf("Enter a value in celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 1.8) + 32;
        printf("%.2f celsius in fahrenheit is %.2f\n", celsius, fahrenheit);
        }
        else if(choice == 'F'){
            // fahrenheit to celsius
            printf("Enter value in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit-32)/1.8;
            printf("%.2f fahrenheit in celsius is %.2f", fahrenheit, celsius);
        }
        else{
            printf("ERROR Enter either C or F\n");
        }
        return 0;
}