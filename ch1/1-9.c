#include <stdio.h>

int main() {
    int prevSpace = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (prevSpace == 0) {
                putchar(c);
                prevSpace = 1;
            }
        }
        
        else {
            putchar(c);
        }
    }

    return 0;
}