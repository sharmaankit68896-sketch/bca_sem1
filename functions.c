#include <stdio.h>

// Function defination; Takes an integer paramerterand return no value (void)
void check_status(int level) {
    if (level > 20) {
	printf("Level %d%%: Normal Operation\n", level);
    } else if (level > 10) {
	printf("Level %d%%: Low Power Warning\n", level);
    } else {
	printf("Level %d%%: Critical Battery Shutdown\n", level);
    }
}

int main() {
    printf("--- Modular Health Diagnostics system ---\n\n");

    // Call the same function with different test values
    check_status(85);
    check_status(18);
    check_status(5);

    return 0;
}
