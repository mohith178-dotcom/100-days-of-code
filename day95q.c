#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};


struct Student topStudent(struct Student students[], int n) {
    int i, highestIndex = 0;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[highestIndex].marks) {
            highestIndex = i;
        }
    }

    return students[highestIndex];  
}

int main() {
    struct Student students[5], top;
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    
    top = topStudent(students, 5);

    
    printf("--- Top Student ---\n");
    printf("Name     : %s\n", top.name);
    printf("Roll No  : %d\n", top.roll_no);
    printf("Marks    : %.2f\n", top.marks);

    return 0;
}
