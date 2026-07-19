#include <stdio.h>

int main() {
    printf("--- Generating System Coordinate Grid ---\n\n");

    // Outer loop controls the rows (Vertical axis)
    for (int row = 1; row <= 3; row++) {
        
        // Inner loop controls the columns (Horizontal axis)
        for (int col = 1; col <= 4; col++) {
            // Printing coordinates without a newline to keep them on the same row
            printf("[%d,%d] ", row, col);
        }
        
        // After the inner loop finishes a row, print a newline to move down
        printf("\n");
    }

    printf("\n--- Grid Generation Complete. ---\n");
    return 0;
}

