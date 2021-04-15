#include<stdio.h>

void replace_character(char *);
void uppercase(char *);
void alternate_uppercase(char *);
void check_character_type(char *);

void main() {
    int choice;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", &str);
    do {
        printf("Select an operation to perform\n");
        printf("1. Replace with a new charater\n");
        printf("2. Convert string to uppercase\n");
        printf("3. Convert alternate character into uppercase\n");
        printf("4. Check character types\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                replace_character(str);
                break;
            case 2:
                uppercase(str);
                break;
            case 3:
                alternate_uppercase(str);
                break;
            case 4:
                check_character_type(str);
                break;
            case 5:
                return;
            default: 
                printf("PLEASE ENTER A VALID CHOICE !\n");
        }
        printf("\n\nUpdated string: %s\n\n", &str);
    } while(choice != 5);
}

void replace_character(char *str) {
    int i;
    char src, target;
    printf("Enter the character to be raplaced by: ");
    scanf(" %c", &src);
    printf("Enter the character to be raplaced with: ");
    scanf(" %c", &target);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == src) {
            str[i] = target;
        }
    }
}

void uppercase(char *str) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

void alternate_uppercase(char *str) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if(i % 2 == 1 && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

}

void check_character_type(char *str) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || str[i] >= 'A' && str[i] <= 'Z') {
            printf("\n%c is a 'CHARACTER'", str[i]);
        } else if(str[i] >= '0' && str[i] <= '9') {
            printf("\n%c is a 'NUMBER'", str[i]);
        } else {
            printf("\n%c is a 'SPECIAL CHARACTER'", str[i]);
        }
    }
}
