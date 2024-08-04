// C program to print employee details using structure
#include <stdio.h>

struct employee
{
    char name[30];
    int empId, age;
    char designation[30];
    float salary;
} emp[10];

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    printf("Enter employee details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Designation: ");
        scanf("%s", emp[i].designation);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("Employee details:\n");
    printf("Name\tEmployeeID\tAge\tDesignation\tSalary\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%d\t\t%d\t%s\t%f\n", emp[i].name, emp[i].empId, emp[i].age, emp[i].designation, emp[i].salary);
    }
    return 0;
}

/*Sample OUTPUT:
Employee details:
Name    EmployeeID      Age     Designation     Salary
John    12              30      HR              80000.000000
Jack    34              25      Developer       25000.000000
*/