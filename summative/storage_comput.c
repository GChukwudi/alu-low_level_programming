#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 100
#define MAX_STUDENTS 100

/**
 * struct student - student structure
 * @full_name: full name of the student
 * @grade_C: grade of the student in C
 * @grade_MobileD: grade of the student in Mobile Development
 * @grade_Blockchain: grade of the student in Blockchain Development
 */

typedef struct student
{
    char full_name[MAX_NAME_LEN];
    float grade_C;
    float grade_MobileD;
    float grade_Blockchain;
} student;

/**
 * main - entry point
 * 
 * Return: 0
 */
int main(void)
{
    int i, n;
    student students[MAX_STUDENTS];
    FILE *file;

    printf("Enter the number of students btwn 6 and 99: ");
    scanf("%d", &n);

    if (n <= 5 || n >= 100)
    {
        printf("Invalid number of students\n");
        return (1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter the full name of student %d: ", i + 1);
        getchar();
        fgets(students[i].full_name, MAX_NAME_LEN, stdin);

        printf("Enter the grade of student %d in Programming in C: ");
        scanf("%f", &students[i].grade_C);

        printf("Enter the grade of student %d in Mobile Development: ");
        scanf("%f", &students[i].grade_MobileD);

        printf("Enter the grade of student %d in Blockchain Development: ");
        scanf("%f", &students[i].grade_Blockchain);
    }

    file = fopen("student_data.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return (1);
    }

    for (i = 0; i < n; i++)
    {
        fprintf(file, "%s", "%f", "%f", "%f\n",
                students[i].full_name,
                students[i].grade_C,
                students[i].grade_MobileD,
                students[i].grade_Blockchain);
    }
    fclose(file);
    printf("Data saved successfully\n");

    return (0);
}
