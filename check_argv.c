#include "monty.h"

void print_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

void check_argv(int *argc)
{
	if (*argc != 2)
		print_usage();
}
