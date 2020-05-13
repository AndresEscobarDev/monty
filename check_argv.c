#include "monty.h"

/**
 * check_argv - check argv
 * @argc: number of arguments
 */
void check_argv(int *argc)
{
	if (*argc != 2)
		print_usage();
}
