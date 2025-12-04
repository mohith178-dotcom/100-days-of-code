#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;

    for (light = RED; light <= GREEN; light++) {

        switch (light) {
            case RED:
                printf("RED -> stop\n");
                break;
            case YELLOW:
                printf("YELLOW -> wait\n");
                break;
            case GREEN:
                printf("GREEN -> go\n");
                break;
        }
    }

    return 0;
}
