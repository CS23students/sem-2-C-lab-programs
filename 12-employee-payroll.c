// 12. The Employee payroll with the data given using structure. (BP-basic pay)
// HRA-18% of BP, DA-15% of BP, PF-10% of BP, LIC-7% of BP, Exclusion-PF LIC, Total Salary-BP HRA DA, Net Salary- Total Salary-Subtraction
// HRA (House Rent Allowance), DA (Dearness Allowance), PF (Provident Fund),LIC (Life Insurance Corporation)

#include <stdio.h>

struct
{
    char name[50];
    int empId;
    float basicPay;
    float hra;
    float da;
    float pf;
    float lic;
    float exclusion;
    float totalSalary;
    float netSalary;
} emp[5];

int main()
{

    int i, n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empId);
        printf("Enter Basic Pay: ");
        scanf("%f", &emp[i].basicPay);

        // Calculate allowances and deductions
        emp[i].hra = 0.18 * emp[i].basicPay;
        emp[i].da = 0.15 * emp[i].basicPay;
        emp[i].pf = 0.10 * emp[i].basicPay;
        emp[i].lic = 0.07 * emp[i].basicPay;
        emp[i].exclusion = emp[i].pf + emp[i].lic;
        emp[i].totalSalary = emp[i].basicPay + emp[i].hra + emp[i].da;
        emp[i].netSalary = emp[i].totalSalary - emp[i].exclusion;
    }

    // Print the payroll details
    printf("\nEmployee Details:\n");
    printf("Name\tID\tBasic Pay\tHRA\t\tDA\t\tPF\tLIC\tExclusion\t\tTotal Salary\tNet Salary\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", emp[i].name, emp[i].empId, emp[i].basicPay, emp[i].hra, emp[i].da, emp[i].pf, emp[i].lic, emp[i].exclusion, emp[i].totalSalary, emp[i].netSalary);
    }

    return 0;
}

/*Sample OUTPUT:
Employee Details:
Name      ID      Basic Pay       HRA       DA       PF       LIC      Exclusion       Total Salary    Net Salary
John      1       10000.00        1800.00  1500.00  1000.00  700.00   1700.00         13300.00        11600.00
Jack      2       20000.00        3600.00  3000.00  2000.00  1400.00  3400.00         26600.00        23200.00
*/
