#include<stdio.h>
#include<string.h>
#define SIZE 10

struct student {
    int rollno;
    char name[20];
    int marks;
};

void swap(struct student *a, struct student *b)
{
    struct student temp = *a;
             *a = *b;
             *b = temp;
}

void bubble_sort(struct student students[])
{
int swapped;
    for(int i = 0; i < SIZE-1; i++)
    {
      swapped = 0;
      for(int j = 0; j < SIZE-1-i; j++)
        {
            if(&students[j].marks > &students[j+1].marks)
            {
                swap(&students[j], &students[j+1]);
                swapped = 1;
            }
        }
        if(swapped == 0)
        break;
    }
}

int main()
{
    struct student students[10];

    printf("Enter details for 10 students: \n");
    for(int i = 0; i<4; i++)
    {
        printf("Student %d\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    bubble_sort(students);
    
    printf("\n Students sorted by marks: \n");
    printf("Roll No\t Name\t marks\n");
    
    for(int i=0; i<4; i++)
    {
        printf("%d\t %s\t %d\n", students[i].rollno, students[i].name, students[i].marks);
    }
    return 0;
 }
