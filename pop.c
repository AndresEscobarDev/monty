#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: stacker of a doubly linked list
 * @line_number: Number line called
 */
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
