#include <stdbool.h>
#include <stdio.h>

int main() {
	int number = 42;
	printf("Number: %i\n", number);

	char character = 'f' + 1;
	printf("Character: %c\n", character);

	bool value = false;
	if (value) {
		printf("Value: true\n");
	} else {
		printf("Value: false\n");
	}

	char name[] = "Harry Haller\n";
	printf(name);
	printf("Name: %s", name);

	return 0;
}
