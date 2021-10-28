#include <stdio.h>

int str_length(char str[]) {
	int length = 0;
	for (; str[length] != '\0'; length++) {
	};
	return length;
}

int str_cmp(char a[], char b[]) {
	if (str_length(a) != str_length(b)) {
		return 2;
	}
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] != b[i]) {
			return 1;
		}
	}
	return 0;
}

const char *error_to_string(int error) {
	switch (error) {
		case 0:
			return "OKAY\n";
		case 1:
			return "DIFFRENT\n";
		case 2:
			return "DIFFERENT LENGTH\n";
		default:
			return "STRANGE\n";
	}
}

int main(int argc, char *argv[]) {
	char *str1 = argv[1];
	char *str2 = argv[2];

	const char *result = error_to_string(str_cmp(str1, str2));
	printf("%s", result);
}
