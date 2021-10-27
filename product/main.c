#include <stdio.h>

int product(int a, int b) { return a * b; }

int main() {
	printf("Result: %i\n", product(3, 5));
	printf("Result: %i\n", product(10, 2));
	printf("Result: %i\n", product(23, 44));
	return 0;
}
