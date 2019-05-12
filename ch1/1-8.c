#include <stdio.h>



int main() {
    int blanks, tabs, newlines = 0;

    char c;

    while ((c=getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        }
        
        else if (c == '\t') {
            tabs++;
        }

        else if (c == '\n') {
            newlines++;
        }
    }

    printf("%d blanks, %d tabs, and %d newlines\n", blanks, tabs, newlines);
}