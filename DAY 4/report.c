#include <stdio.h>

int main()
{
    int numberStudents = 0, numberSubjects = 0, i = 0;
    printf("Enter Number of students: ");
    scanf("%d", &numberStudents);
    printf("Enter number of sujects: ");
    scanf("%d", &numberSubjects);
    int marks[numberStudents][numberSubjects];
    for (i = 0; i < numberStudents; i++)
    {
        printf("Enter Marks of %d student: \n", i + 1);
        {
            for (int j = 0; j < numberSubjects; j++)
            {
                printf("Subject %d: ", j + 1);
                scanf("%d", &marks[i][j]);
            }
        }
    }
    printf("\n----- Marks Report -----\n");
    for (i = 0; i < numberStudents; i++)
    {
        printf("\nStudent %d Marks: ", i + 1);
        {
            for (int j = 0; j < numberSubjects; j++)
            {
                printf("\nSubject %d: ", marks[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}