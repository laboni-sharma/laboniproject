#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Get input from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display result rounded to 2 decimal places
    printf("\n--- Temperature Conversion ---\n");
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}