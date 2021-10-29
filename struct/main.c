#include <stdio.h>

struct person {
	char *name;
	int age;
};

struct return_value {
	int result;
	int error;
};

struct return_value sum(int a, int b) {
	struct return_value rc = {a + b, -1};

	return rc;
}

const char *person_to_str(struct person person) { return person.name; }

int main() {
	char name[] = "Harry";
	struct person harry = {name, 42};
	printf("Person: %s\n", person_to_str(harry));

	struct return_value rc = sum(1, 2);
	if (rc.error == 0) {
		printf("%i\n", rc.result);
		return 0;
	} else {
		printf("ERROR\n");
		return rc.error;
	}
}
