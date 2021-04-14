#include<stdio.h>
void main() {
int choice;
char str;
char value[100];
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
                replace();
                break;
            case 2:
                uppercase();
                break;
            case 3:
                alternate_uppercase();
                break;
            case 4:
                check_character_type();
                break;
            case 5:
                return;
            default: 
                printf("PLEASE ENTER A VALID CHOICE !\n");

        }
    } while(choice != 5);
}
replace(*char str) {
    char src, target;
    printf("Enter the character to be raplaced by: \n");
    scanf("%s", &src);
    printf("Enter the character to be raplaced with: \n");
    scanf("%s", &target);
    int i;
    for(i = 0; i < str[i] != '\0'; i++) {
        if(str[i] == src) {
            str[i] = target;
        }
    }
}

uppercase(*char str) {
    for(i = 0; i < str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

alternate_uppercase(*char str) {
    for(i = 0; i < str[i] != '\0'; i++) {
        if(i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

}

check_character_type(*char str) {
    for(i = 0; i < str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || str[i] >= 'A' && str[i] <= 'Z') {
            printf("\n%s is a 'CHARACTER'", &str[i]);
        } else if(str[i] >= '0' && str[i] <= '9') {
            printf("\n%s is a 'NUMBER'", &str[i]);
        } else {
            printf("\n%s is a 'SPECIAL CHARACTER'", &str[i]);
        }
    }
}
