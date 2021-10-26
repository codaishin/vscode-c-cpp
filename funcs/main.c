#include <stdio.h>

// return-type func-name arguments body

void my_other_func(char value) {}

int sum2(int a, int b) { return a + b; }

int sum3(int a, int b, int c) { return a + b + c; }

void print_sum3(int value_1, int value_2, int value_3) {
	printf("Result: %i\n", value_1 + value_2 + value_3);
}

int main() {
	print_sum3(1, 2, 3);
	int value_1 = 42;
	print_sum3(33, value_1, -6);
	return 0;
}
