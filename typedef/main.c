#include <stdio.h>

struct ipv4 {
	int ip[4];
	int sm[4];
};

typedef struct ipv4 ipv4_t;

enum error {
	NONE = 0,
	FAIL = -1,
};

typedef enum error error_t;

typedef int my_bool;

#define true 1;
#define false 0;

error_t my_print(char *msg) { return NONE; }

int main() {
	ipv4_t ip = {{192, 168, 52, 1}, {255, 255, 255, 0}};

	my_bool value = true;

	error_t error = my_print("Hello");
	if (!error) {
		return 0;
	} else {
		pirntf("ASLKDA");
		return error;
	}

	return 0;
}
