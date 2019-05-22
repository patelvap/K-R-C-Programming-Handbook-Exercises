#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main() 
{
	char *s = "Hello World";
	char *t = "orld";

	if (strend(s,t))
		printf("text '%s' is at end of string '%s'", t, s);
	else 
		puts("test failed");
	return 0;
}

int strend(char *s, char *t)
{
	s += (strlen(s) - strlen(t));
	while (*s++ == *t++)
		if (*s == '\0')
			return 1;
	return 0;
}
