#include "monty.h"
/**
 * print_error - Print error message
 * @number: Number of line
 * @str: Message
 */
void print_error(int number, char *str)
{
	dprintf(STDERR_FILENO, "L%d: %s\n", number, str);
	data.status = EXIT_FAILURE;
}
/**
 * print_mallocfail - Print error message
 */
void print_mallocfail(void)
{
	dprintf(STDERR_FILENO, "Error: malloc failed\n");
	data.status = EXIT_FAILURE;
}
