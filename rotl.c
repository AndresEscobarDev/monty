#include "monty.h"
/**
 * rotl - Instruction that rotates the stack to the top.
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	(void)line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;

	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	temp->next->next = NULL;
}
