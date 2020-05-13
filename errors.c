#include "monty.h"

void print_error(int number, char *str)
{
	fprintf(stderr, "L%d: %s\n", number, str);
	gvar[0] = -1;
}

void print_mallocfail(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	gvar[0] = -1;
}
