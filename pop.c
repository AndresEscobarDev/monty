#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!stack || !*stack)
	{
		print_error(line_number, "can't pop an empty stack");
		return;
	}

	*stack = (*stack)->next;
	if (*stack)
		(*stack)->prev = NULL;
	free(temp);
}
