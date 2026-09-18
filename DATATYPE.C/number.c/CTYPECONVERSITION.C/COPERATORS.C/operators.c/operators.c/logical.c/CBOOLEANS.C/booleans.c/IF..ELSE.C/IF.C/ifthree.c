#include <stdio.h>
#include <stdbool.h> // bool, true, false beboharer jonno

int main() {
    int x = 20;
    int y = 18;

    bool isGreater = x > y; // 20 > 18 sothik, tai isGreater = true (1)

    if (isGreater) {
        printf("x is greater than y");
    }

    return 0;
}