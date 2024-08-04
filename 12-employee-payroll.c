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
} emp;

int main()
{

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Basic Pay: ");
    scanf("%f", &emp.basicPay);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);

    // Calculate allowances and deductions
    emp.hra = 0.18 * emp.basicPay;
    emp.da = 0.15 * emp.basicPay;
    emp.pf = 0.10 * emp.basicPay;
    emp.lic = 0.07 * emp.basicPay;
    emp.exclusion = emp.pf + emp.lic;
    emp.totalSalary = emp.basicPay + emp.hra + emp.da;
    emp.netSalary = emp.totalSalary - emp.exclusion;

    // Print the payroll details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.empId);
    printf("Basic Pay: %.2f\n", emp.basicPay);
    printf("HRA (18%% of BP): %.2f\n", emp.hra);
    printf("DA (15%% of BP): %.2f\n", emp.da);
    printf("PF (10%% of BP): %.2f\n", emp.pf);
    printf("LIC (7%% of BP): %.2f\n", emp.lic);
    printf("Exclusion (PF + LIC): %.2f\n", emp.exclusion);
    printf("Total Salary (BP + HRA + DA): %.2f\n", emp.totalSalary);
    printf("Net Salary (Total Salary - Exclusion): %.2f\n", emp.netSalary);

    return 0;
}
