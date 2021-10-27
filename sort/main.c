#include <stdio.h>

int main(int argc, char *argv[]) {
	int nums[argc - 1];
	for (int i = 1; i < argc; i++) {
		char *num_str = argv[i];
		nums[i - 1] = 0;
		for (int j = 0; num_str[j] != '\0'; ++j) {
			int digit = num_str[j] - '0';
			nums[i - 1] *= 10;
			nums[i - 1] += digit;
		}
	}

	for (int i = 0; i < argc - 1; i++) {
		printf("%i ", nums[i]);
	}
	printf("\n");
	return 0;
}
