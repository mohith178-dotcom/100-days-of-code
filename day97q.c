#include <stdio.h>
#include <stdlib.h>


struct Date {
    int day;
    int month;
    int year;
};


struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;
    FILE *fp;

    
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    struct Employee readEmp;
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    printf("\n--- Employee Details from File ---\n");
    printf("Name       : %s\n", readEmp.name);
    printf("ID         : %d\n", readEmp.id);
    printf("Salary     : %.2f\n", readEmp.salary);
    printf("Joining Date: %02d-%02d-%04d\n", 
           readEmp.joiningDate.day, readEmp.joiningDate.month, readEmp.joiningDate.year);

    return 0;
}
