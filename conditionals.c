#include <stdio.h>

int main() {
    int battery_percent = 15;

    printf("--- System Diagnostic ---\n");

    // Simple conditional structure
    if (battery_percent > 20) {
        printf("Power Status: Normal (%d%%)\n", battery_percent);
    } else if (battery_percent > 10) {
        printf("Warning: Low Power (%d%%). Enable power saving.\n", battery_percent);
    } else {
        printf("Critical: Shutting down system immediately.\n");
    }

    return 0;
}

