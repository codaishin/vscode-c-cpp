#include <stdio.h>

int main() {
	// Var declaration/instantiation
	int value = 200;

	char x_keine_ahnung = 'q';

	// If
	if (value < 50) {
		printf("kleiner als 50 (war %i)\n", value);
	} else if (value >= 50 && value < 100) {
		printf("Schlumpfig\n");
	} else {
		printf("Die Fragen\n");
	}

	// Switch case
	int option = 1;

	switch (option) {
		case 1:
			printf("Option 1\n");
			break;
		case 2:
			printf("Option 2\n");
			break;
		default:
			printf("Nicht erkannte Option\n");
			break;
	}

	// Loops

	char hello[] = "Hello!";

	// Vairante 1
	for (int i = 0; hello[i] != '\0'; ++i) {
		printf("%c\n", hello[i]);
	}

	// Variante 2
	int i = 0;
	while (hello[i] != '\0') {
		printf("%c\n", hello[i]);
		++i;
	}

	return 0;
}
