#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float convert(int f) {
	return ((5.0/9.0)*(f-32));
}

int main() {
	puts("Fahrenheit to Celsius Conversion Table");

	for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("%3d %4.2f\n", fahr, convert(fahr));
	}
	
	return 0;
}
