#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Coded by Garret Castro

int main() {

    int punishment_repititions = 0;
    // Get the punishment phrase repititions from the user
    // modifies: punishment_repititions
    printf("Enter the repitition count for the punishment phrase: ");
    scanf("%d", &punishment_repititions);
    while (punishment_repititions <= 0) {
        printf("You entered an incorrect value for the repitition count! Please re-enter: ");
        scanf("%d", &punishment_repititions);
    }
    printf("\n");

    int typo_line = 0;
    // Get the line number where the typo will be inserted from the user
    // modifies: typo_line
    printf("Enter the line where you want to insert the typo: ");
    scanf("%d", &typo_line);
    while (typo_line < 1 || typo_line > punishment_repititions) {
        printf("You entered an invalid value for the typo placement! Please re-enter: ");
        scanf("%d", &typo_line);
    }
    printf("\n");

    // Print the punishment phrases
    // uses: punishment_repititions, typo_line
    for (int i = 0; i < punishment_repititions; i++) {
        if (i == typo_line - 1) {
            printf("Cading wiht is C avesone!\n");
            continue;
        }
        printf("Coding with C is awesome!\n");
    }

    return 0;
}