#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    int marks;
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct Student students[], int n) {
    int swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks > students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

int main() {
    struct Student students[10];

    printf("Enter details for 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    bubbleSort(students, 10);

    printf("\nStudents sorted by marks:\n");
    printf("Roll No\tName\t\tMarks\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%s\t\t%d\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
