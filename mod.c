#include "monty.h"

/**
 * mod - divides the second top element of the stack by the top
 * element of the stack
 * @stack: stacker of a doubly linked list
 * @line_number: Number line called
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	if (!stack || !*stack || !(*stack)->next)
	{
		print_error(line_number, "can't mod, stack too short");
		return;
	}

	if ((*stack)->n == 0)
	{
		print_error(line_number, "division by zero");
		return;
	}
	temp = *stack;
	(*stack)->next->n %= temp->n;
	*stack = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;
}
