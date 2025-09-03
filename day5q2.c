#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // --- User Input ---
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // --- Operations ---
    hours = totalSeconds / 3600;             // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;    // Remaining minutes
    seconds = totalSeconds % 60;             // Remaining seconds

    // --- Output ---
    printf("Time in HH:MM:SS format = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
