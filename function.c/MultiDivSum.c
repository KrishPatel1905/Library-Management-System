#include<stdio.h>

void display();
int collect();
void grade(int n);
float avg(int n);

int main()
{
    display();
    int n = collect();
    grade(n);
    float average = avg(n);
    printf("The average grade is: %.2f\n", average);
    
    return 0;
}

void display()
{
    printf("Welcome to CHARUSAT........\n");
}

int collect()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    return n;
}

void grade(int n)
{
    int grades[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
        printf("Student %d grade: %d\n", i + 1, grades[i]);
    }
}

float avg(int n)
{
    int sum = 0;
    int grades[n];
    
    for(int i = 0; i < n; i++)
    {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    return (float)sum / n;
}
