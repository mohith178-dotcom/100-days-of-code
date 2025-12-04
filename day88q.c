#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum Role r;

    
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };

    printf("Role  ->  Value\n");
    printf("----------------\n");

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s -> %d\n", roleNames[r - 1], r);
    }

    return 0;
}
