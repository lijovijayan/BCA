#include<stdio.h>

void simple_interest();
void compound_interest();
float power(float, int);

void main() {
    int choice;
    do {
        printf("TO FIND\n");
        printf("1. SIMPLE INTEREST\n");
        printf("2. COMPOUND INTEREST\n");
        printf("3. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                simple_interest();
                break;
            case 2:
                compound_interest();
                break;
            case 3:
                return;
            default: 
                printf("PLEASE ENTER A VALID CHOICE\n");

        }
    } while(choice != 3);
}
void simple_interest() {
    float principal, rate, duration, rate_in_percentage, simple_interest;
    printf("Enter principal value: ");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter duration: ");
    scanf("%f", &duration);
    // S.I. = Principal × Rate × Duration
    rate_in_percentage = rate / 100;
    simple_interest = principal * rate_in_percentage * duration;
    printf("Simple interest = %f\n\n", simple_interest);
}
void compound_interest() {
    float principal, rate, duration, rate_in_percentage, compound_interest;
    printf("Enter principal value: ");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter duration: ");
    scanf("%f", &duration);
    rate_in_percentage = rate / 100;
    // C.I. = (Principal (1 + Rate) ^ Duration) − Principal
    compound_interest = principal * power((1 + rate_in_percentage), duration) - principal;
    printf("Compound interest = %f\n\n", compound_interest);
}
float power(float value, int pow) {
    int i;
    float result = 1;
    for(i = 0; i < pow; i++) {
        result = result * value;
    }
    return result;
}
