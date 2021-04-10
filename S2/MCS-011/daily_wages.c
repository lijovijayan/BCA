#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    char date[100];
    float total_wages;
};

void main() {
    int total_employees, i;
    float hours;
    printf("\nEnter total number of Employees: ");
    scanf("%d", &total_employees);

    struct employee employees[total_employees];

    for(i = 0; i < total_employees; i++) {
        printf("ENTER DETAILS OF EMPLOYEE %d \n", i + 1);
        printf("NAME: ");
        scanf("%s", &employees[i].name);
        printf("DATE: ");
        scanf("%s", &employees[i].date);
        printf("TOTAL HOURS WORKED: ");
        scanf("%f", &hours);
        if(hours > 4) {
            hours = 4;
        }
        employees[i].total_wages = hours * 100;
    }
    
    printf("PAYMENT DETAILS OF EMPLOYEES");
    for(i = 0; i < total_employees; i++) {
        printf("\n\nEMPLOYEE: ", i + 1);
        printf("\nNAME: %s", employees[i].name);
        printf("\nDATE: %s", employees[i].date);
        printf("\nTOTAL WAGES: %f", employees[i].total_wages);
    }
}
