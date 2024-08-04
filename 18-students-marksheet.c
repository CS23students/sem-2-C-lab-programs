#include <stdio.h>

struct student
{
    char name[50];
    int regno;
    int marks[5];        // Array to store marks for 5 subjects
    char subject[5][20]; // Array to store subject names for 5 subjects
} s[10];

// Function to determine grade based on marks
char grade_func(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    else if (marks >= 40)
        return 'D';
    else
        return 'F';
}

int main()
{
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter student %d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Reg No: ");
        scanf("%d", &s[i].regno);

        // Taking subject names and marks from user
        for (j = 0; j < 5; j++)
        {
            printf("Enter subject %d name: ", j + 1);
            scanf("%s", s[i].subject[j]);
            printf("Enter marks for %s: ", s[i].subject[j]);
            scanf("%d", &s[i].marks[j]);
        }
    }

    // Printing student details
    printf("\n\nStudent details:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Reg No: %d\n", s[i].regno);
        printf("Subject\t\tMarks\tGrade\n");
        for (j = 0; j < 5; j++)
        {
            printf("%s\t\t%d\t%c\n", s[i].subject[j], s[i].marks[j], grade_func(s[i].marks[j]));
        }
    }

    return 0;
}

/*Sample OUTPUT:
Enter number of students: 2
Enter student 1 details:
Name: John
Reg No: 123
Enter subject 1 name: Maths
Enter marks for Maths: 90
Enter subject 2 name: Science
Enter marks for Science: 80
Enter subject 3 name: English
Enter marks for English: 70
Enter subject 4 name: Social
Enter marks for Social: 60
Enter subject 5 name: Computer
Enter marks for Computer: 85

Enter student 2 details:
Name: Jane
Reg No: 124
Enter subject 1 name: Maths
Enter marks for Maths: 85
Enter subject 2 name: Science
Enter marks for Science: 75
Enter subject 3 name: English
Enter marks for English: 65
Enter subject 4 name: Social
Enter marks for Social: 55
Enter subject 5 name: Computer
Enter marks for Computer: 80

Student details:
Name: John
Reg No: 123
Subject         Marks   Grade
Maths           90      A
Science         80      B
English         70      C
Social          60      D
Computer        85      B

Name: Jane
Reg No: 124
Subject         Marks   Grade
Maths           85      B
Science         75      C
English         65      D
Social          55      F
Computer        80      B
*/