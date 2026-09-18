#include <stdio.h>

int main() {
    int number;

    // Get input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check divisibility by 2
    printf("\n--- Number Analysis ---\n");
    if (number % 2 == 0) {
        printf("%d is an EVEN number.\n", number);
    } else {
        printf("%d is an ODD number.\n", number);
    }

    return 0;
}