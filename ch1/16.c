/*starter code taken from K&R 2 ed. chapter 1*/

#include <stdio.h>

#define MAXLINE 1000 //max input line size

int getLine(char line[], int maxLine);
void copy(char to[], char from[]);

// longest line input
int main() {
	int len;
	int max;
	char currline[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len=getLine(currline, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, currline);
		}

	if (max > 0) {
		if (max > MAXLINE) {
			printf("Exceeded max length by %d\n", max-MAXLINE);
			printf("String Length: %d\n", max);		
		}		

		printf("%s\n", longest);
	}
	return 0;
}

// read line into s, return length
int getLine(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; i++)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		i++;
	}

	s[i] = '\0';
	return i;
}

// copy from into to 
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;
}
