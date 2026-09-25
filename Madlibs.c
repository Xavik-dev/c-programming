#include <stdio.h>
#include<string.h>

int main (){

    char noun[50] = "0";
    char adjective1[50] = "0";
    char adjective2[50] = "0";
    char adjective3[50] = "0";
    char verb[50] = "0";

    printf("enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0'; 

    printf("enter an adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0'; 

    printf("enter an adjective: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("enter an noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter a verb: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("\nToday i went to a %s zoo\n", adjective1);
    printf("There i saw %s\n", noun);
    printf("There %s was %s and %s a cock!\n", noun, adjective2, verb);
    printf("i was %s!\n", adjective3);

    return 0;

}