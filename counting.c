#include <stdio.h>

int main() {
    printf("--- Automated system Check Booting ---\n");

    //The loop header contains: (Initialization; Condition; Increment)
    for (int i = 1; i <=5; i++) {
        printf("Running diagnostic cycle#%d...\n", i);
    }

    printf("--- All 5 cycles complete. System secure. ---\n");
    return 0;
}
