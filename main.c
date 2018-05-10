#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ENTRY_SIZE 100

void do_test(int index, int fail)
{
	char title[ENTRY_SIZE];
	unsigned int i;

	sprintf(title, "Test %03d", index);
	fprintf(stdout, title);

	for (i = 0; i < ENTRY_SIZE - strlen(title); i++)
		fprintf(stdout, ".");

	if (fail)
		fprintf(stdout, "failed\n");
	else
		fprintf(stdout, "passed\n");
}

int main(int argc, char **argv)
{
	int tests_num, tests_failed, i;

	if (argc < 3) {
		fprintf(stderr, "Usage: %s <tests_num> <tests_failed>\n", argv[0]);
		return -2;
	}

	tests_num = atoi(argv[1]);
	tests_failed = atoi(argv[2]);

	for (i = 0; i < tests_failed; i++)
		do_test(i, 1);
	for (i = tests_failed; i < tests_num; i++)
		do_test(i, 0);

	return tests_failed;
}
