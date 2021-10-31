#include <malloc.h>
#include <stdio.h>

int _length(int number) {
	int count = 1;
	while (number /= 10) {
		++count;
	}
	return count;
}

int _make_absolute(int *number) {
	if (*number < 0) {
		*number *= -1;
		return 1;
	}
	return 0;
}

char *_malloc(int length) {
	char *result = (char *)malloc((length + 1) * sizeof(char));
	result[0] = '-';
	return result;
}

void _write_number(char *target, int source, int length) {
	target[length--] = '\0';
	for (; source > 0; source /= 10) {
		target[length--] = '0' + source % 10;
	}
}

char *int_to_string(int number) {
	int length = _make_absolute(&number) + _length(number);
	char *result = _malloc(length);
	_write_number(result, number, length);
	return result;
}

int main() {
	int numbers[] = {7, 42, -57};
	int count = sizeof(numbers) / sizeof(int);

	for (int i = 0; i < count; ++i) {
		char *as_string = int_to_string(numbers[i]);
		printf("%s\n", as_string);
		free(as_string);
	}
}
