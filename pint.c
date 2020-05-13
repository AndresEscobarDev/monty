#include "monty.h"

void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		print_error(line_number, "can't pint, stack empty");
		return;
	}

	printf("%d\n", (*stack)->n);
}
