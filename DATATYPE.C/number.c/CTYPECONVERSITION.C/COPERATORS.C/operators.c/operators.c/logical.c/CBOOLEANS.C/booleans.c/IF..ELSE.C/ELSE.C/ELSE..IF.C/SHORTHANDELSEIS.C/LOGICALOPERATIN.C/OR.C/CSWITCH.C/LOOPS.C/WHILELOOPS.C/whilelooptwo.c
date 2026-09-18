#include <stdio.h>

int main() {
    int i = 10;

    // Condition is false (10 < 5 is False), so the loop body is skipped entirely
    while (i < 5) {
        printf("This will never be printed\n");
        i++;
    }

    return 0;
}