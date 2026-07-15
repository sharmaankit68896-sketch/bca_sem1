#include <stdio.h>

int main () {
    int battery_percent = 25;

    printf("--- Continous Monitoring Active ---\n");

    // The loop runs as long as the condition evaluates to True
    while (battery_percent >= 10) {
        printf("Current Level: %d%% - Status: Operational\n", battery_percent);

        // Decrement the baattery by 5% on each iteration
        battery_percent = battery_percent - 5;
    }

    printf("Alert: Battery fell below 10%%! Monitoring suspended.\n");
    return 0;
}
