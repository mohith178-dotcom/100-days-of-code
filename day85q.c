#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main() {
    enum Status s;

    for (s = SUCCESS; s <= TIMEOUT; ) {
        switch (s) {
            case SUCCESS:
                printf("SUCCESS = %d\n", s);
                s = FAILURE;
                break;

            case FAILURE:
                printf("FAILURE = %d\n", s);
                s = TIMEOUT;
                break;

            case TIMEOUT:
                printf("TIMEOUT = %d\n", s);
                s = TIMEOUT + 1;   
                break;
        }
    }

    return 0;
}
