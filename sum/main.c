#include <stdio.h>

typedef struct {
	int value;
	int error;
} number_t;

number_t str_to_number(char string[]) {
	int digit;
	int is_neg = string[0] == '-' ? 1 : 0;	// if '-' then 1 else 0
	number_t number = {0, 0};

	for (int i = is_neg; string[i] != '\0'; ++i) {
		if (string[i] > '9' || string[i] < '0') {
			number.value = 0;
			number.error = -1;
			return number;
		}
		digit = (int)string[i] - (int)'0';
		number.value *= 10;
		number.value += digit;
	}
	if (is_neg) {
		number.value *= -1;
	}
	return number;
}

int main(int argc, char *argv[]) {
	int is_neg = 0;
	number_t n1;
	number_t n2;
	int digit = 0;

	// guard argument number
	if (argc != 3) {
		printf("Only 2 numbers\n");
		return -2;
	}

	n1 = str_to_number(argv[1]);
	if (n1.error) {
		printf("Encountered error %i\n", n1.error);
		return n1.error;
	}
	n2 = str_to_number(argv[2]);
	if (n2.error) {
		printf("Encountered error %i\n", n2.error);
		return n2.error;
	}

	// sum of n1 and n2
	printf("%i + %i = %i\n", n1.value, n2.value, n1.value + n2.value);
	return 0;
}
