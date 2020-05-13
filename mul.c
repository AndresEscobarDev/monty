#include "monty.h"
/**
 * mul - Instruction that multiplies the top element of the
 * stack with the second top element of the stack.
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (!stack || !*stack || !(*stack)->next)
	{
		print_error(line_number, "can't mul, stack too short");
		return;
	}

	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->n *= (*stack)->prev->n;
	(*stack)->prev = NULL;
	free(temp);
}
