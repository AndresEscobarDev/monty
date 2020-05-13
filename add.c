#include "monty.h"

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	if (!stack || !*stack || !(*stack)->next)
	{
		print_error(line_number, "can't add, stack too short");
		return;
	}

	(*stack)->n += (*stack)->next->n;
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	if (temp->next)
		temp->next->prev = *stack;
	free(temp);
}