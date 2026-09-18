#include <stdio.h>
#include <stdbool.h> // bool type-er jonno

int main() {
    int time = 20;

    bool isDay = time < 18; // 20 < 18 is false (0)

    if (isDay) {
        printf("Good day.");
    } else {
        printf("Good evening.");
    }

    return 0;
}