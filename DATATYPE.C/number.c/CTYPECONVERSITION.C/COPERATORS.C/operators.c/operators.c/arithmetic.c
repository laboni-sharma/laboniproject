#include <stdio.h>

int main() {
    int x = 10;
    int y = 3;

    printf("%d\n", x + y); // Addition: 10 + 3 = 13
    printf("%d\n", x - y); // Subtraction: 10 - 3 = 7
    printf("%d\n", x * y); // Multiplication: 10 * 3 = 30
    printf("%d\n", x / y); // Division: 10 / 3 = 3 (Integer division)
    printf("%d\n", x % y); // Modulus: 10 % 3 = 1 (Bhagshesh)

    int z = 5;
    ++z;                   // Pre-increment: z-er value 1 barbe (5 + 1 = 6)
    printf("%d\n", z);     // Output: 6

    --z;                   // Pre-decrement: z-er value 1 kombe (6 - 1 = 5)
    printf("%d\n", z);     // Output: 5

    return 0;
}