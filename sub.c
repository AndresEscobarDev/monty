#include "monty.h"
/**
 * sub - Instruction that subtracts the top element of the
 * stack from the second top element of the stack.
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (!stack || !*stack || !(*stack)->next)
	{
		print_error(line_number, "can't sub, stack too short");
		return;
	}

	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->n -= (*stack)->prev->n;
	(*stack)->prev = NULL;
	free(temp);
}
