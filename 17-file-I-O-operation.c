// 17. C program to perform file I/O operations
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    // Writing data to the file
    fp = fopen("file.txt", "w");
    if (fp == NULL)
    {
        printf("Error in opening file");
        return 0;
    }
    printf("Enter data [mpve to next line and ctrl+z for EOF and then hit Enter]: ");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);

    // Reading data from the file
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file");
        return 0;
    }
    printf("The contents of the file are: \n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}

// Note: Press Enter to move to the next line, and when you finish typing, use Ctrl+Z (on Windows) to signal EOF. This will end the input process and write the data to the file. The program will then read the data from the file and display it on the screen.