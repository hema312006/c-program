#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic_salary;
    float hra;
    float da;
    float total_salary;
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

   
    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Employee Name: ");
        scanf("%s", employees[i].name);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);

        employees[i].hra = 0.05 * employees[i].basic_salary;
        employees[i].da = 0.10 * employees[i].basic_salary;
        employees[i].total_salary = employees[i].basic_salary + employees[i].hra + employees[i].da;
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Basic Salary: %.2f\n", employees[i].basic_salary);
        printf("HRA: %.2f\n", employees[i].hra);
        printf("DA: %.2f\n", employees[i].da);
        printf("Total Salary: %.2f\n", employees[i].total_salary);
    }

    return 0;
}
