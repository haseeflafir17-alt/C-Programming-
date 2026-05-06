#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidName(char name[]) {
    for(int i = 0; name[i] != '\0'; i++) {
        
        if(name[i] == ' ') {
            continue;
        }

        if(!isalpha(name[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char name[100];

    while(1) {
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);

        name[strcspn(name, "\n")] = '\0';

        if(isValidName(name)) {
            break; // valid input
        } else {
            printf("Invalid name! Only letters allowed.\n");
        }
    }

    printf("Valid name entered: %s\n", name);

    return 0;
}