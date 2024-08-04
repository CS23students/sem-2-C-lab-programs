// 16. Employee Information using nested structure
#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    int emp_id;
    char emp_name[20];
    struct date emp_dob;
} emp;

int main()
{
    printf("Enter the employee id: ");
    scanf("%d", &emp.emp_id);
    printf("Enter the employee name: ");
    scanf("%s", emp.emp_name);
    printf("Enter the employee date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &emp.emp_dob.day, &emp.emp_dob.month, &emp.emp_dob.year);

    // Displaying the employee information
    printf("The employee details are:\n");
    printf("Employee id: %d\n", emp.emp_id);
    printf("Employee name: %s\n", emp.emp_name);
    printf("Employee date of birth: %02d-%02d-%04d\n", emp.emp_dob.day, emp.emp_dob.month, emp.emp_dob.year);
    return 0;
}

/*Sample OUTPUT:
Enter the employee id: 101
Enter the employee name: John
Enter the employee date of birth (dd mm yyyy): 12 05 1990

The employee details are:
Employee id: 101
Employee name: John
Employee date of birth: 12-05-1990
 */