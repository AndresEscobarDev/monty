#include "monty.h"

/**
 * rotr - Instruction that rotates the stack to the bottom.
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	(void)line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;

	temp = *stack;
	while ((*stack)->next)
		(*stack) = (*stack)->next;

	(*stack)->next = temp;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
	temp->prev = (*stack);
}
