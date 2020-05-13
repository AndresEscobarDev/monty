#include "monty.h"
/**
 * print_usage - Print error message
 */
void print_usage(void)
{
	dprintf(STDERR_FILENO, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * check_argv - check argv
 * @argc: number of arguments
 */
void check_argv(int *argc)
{
	if (*argc != 2)
		print_usage();
}
