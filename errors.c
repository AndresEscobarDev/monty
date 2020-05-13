#include "monty.h"

void print_error(int number, char *str)
{
	fprintf(stderr, "L%d: %s\n", number, str);
	data.status = -1;
}

void print_mallocfail(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	data.status = -1;
}
