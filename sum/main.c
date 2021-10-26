#include <stdio.h>

int main(int argc, char *argv[]) {
	int is_neg = 0;
	int n1 = 0;
	int n2 = 0;
	int digit = 0;

	// guard argument number
	if (argc != 3) {
		printf("Only 2 numbers\n");
		return -2;
	}

	// convert n1
	char *argument_1 = argv[1];
	is_neg = argument_1[0] == '-' ? 1 : 0;	// if '-' then 1 else 0
	for (int i = is_neg; argument_1[i] != '\0'; ++i) {
		if (argument_1[i] > '9' || argument_1[i] < '0') {
			printf("Only numbers!\n");
			return -1;
		}
		digit = (int)argument_1[i] - (int)'0';
		n1 *= 10;
		n1 += digit;
	}
	if (is_neg) {
		n1 *= -1;
	}

	// convert n2
	char *argument_2 = argv[2];
	is_neg = argument_2[0] == '-' ? 1 : 0;
	for (int i = is_neg; argument_2[i] != '\0'; ++i) {
		if (argument_2[i] > '9' || argument_2[i] < '0') {
			printf("Only numbers!\n");
			return -1;
		}
		digit = argument_2[i] - '0';
		n2 *= 10;
		n2 += digit;
	}
	if (is_neg) {
		n2 *= -1;
	}

	// sum of n1 and n2
	printf("%i + %i = %i\n", n1, n2, n1 + n2);
	return 0;
}
