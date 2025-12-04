#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    struct Person p;

    
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", (int*)&p.gender);

    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: MALE\n");
            break;
        case FEMALE:
            printf("Gender: FEMALE\n");
            break;
        case OTHER:
            printf("Gender: OTHER\n");
            break;
        default:
            printf("Gender: INVALID\n");
    }

    return 0;
}
