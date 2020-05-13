#include "monty.h"

/**
 * pint - prints the value at the top of the
 * stack, followed by a new line
 * @stack: stacker of a doubly linked list
 * @line_number: Number line called
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		print_error(line_number, "can't pint, stack empty");
		return;
	}

	printf("%d\n", (*stack)->n);
}
