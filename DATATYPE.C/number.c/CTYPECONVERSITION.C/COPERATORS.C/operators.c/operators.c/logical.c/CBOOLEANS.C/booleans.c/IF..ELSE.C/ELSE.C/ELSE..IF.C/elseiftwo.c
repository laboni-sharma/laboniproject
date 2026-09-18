#include <stdio.h>
#include <stdbool.h> // bool type-er jonno

int main() {
    int time = 16;

    bool isMorning = time < 12; // 16 < 12 is false (0)
    bool isDay = time < 18;     // 16 < 18 is true (1)

    if (isMorning) {
        printf("Good morning.");
    } else if (isDay) {
        printf("Good day.");
    } else {
        printf("Good evening.");
    }

    return 0;
}