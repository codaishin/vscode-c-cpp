#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1 = 0;
	int n2 = 0;
	int digit = 0;

	// convert n1

	// "104"
	// [0] -> '1'
	// [1] -> '0'
	// [2] -> '4'
	// [3] -> '\0'

	char *argument_1 = argv[1];
	for (int i = 0; argument_1[i] != '\0'; ++i) {
		digit = (int)argument_1[i] - (int)'0';
		n1 *= 10;
		n1 += digit;
	}

	// convert n2
	char *argument_2 = argv[2];
	for (int i = 0; argument_2[i] != '\0'; ++i) {
		digit = argument_2[i] - '0';
		n2 *= 10;
		n2 += digit;
	}

	// sum of n1 and n2
	printf("%i + %i = %i\n", n1, n2, n1 + n2);
	return 0;
}
