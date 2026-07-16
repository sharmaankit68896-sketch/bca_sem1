#include <stdio.h>

int main() {
    int battery_percent;

    // 1. Prompt the user for input
    printf("Enter current battery percentage (0-100): ");
    
    // 2. Read the integer from the keyboard and store it in memory
    scanf("%d", &battery_percent);

    printf("\n--- Processing Input Data ---\n");

    // 3. Evaluate the user's live input
    if (battery_percent > 20) {
        printf("Power Status: Normal (%d%%)\n", battery_percent);
    } else if (battery_percent > 10) {
        printf("Warning: Low Power (%d%%). Please plug in.\n", battery_percent);
    } else {
        printf("Critical Alert: System will now hibernate.\n");
    }

    return 0;
}


