#include <stdio.h>
#include <stdlib.h>

int _digits_count(int number) {
	int count = 0;
	do {
		number /= 10;
		++count;
	} while (number);
	return count;
}

int _pow(int base, int power) {
	int result = 1;
	for (int i = 0; i < power; ++i) {
		result *= base;
	}
	return result;
}

void _write_number(int number, int length, char *string) {
	int digit, div;
	int rest = number;
	for (int exp = length - 1, i = 0; exp >= 0; --exp, ++i) {
		div = _pow(10, exp);
		digit = rest / div;
		rest = number % div;
		string[i] = '0' + digit;
	}
	string[length] = '\0';
}

char *_malloc(int length) {
	return (char *)malloc((length + 1) * sizeof(char));
}

char *int_to_string(int number) {
	int length = _digits_count(number);
	char *result = _malloc(length);
	_write_number(number, length, result);
	return result;
}

int main() {
	char *z = int_to_string(999444);
	printf("%s\n", z);
	free(z);
}
