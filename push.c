#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *current;
	stack_t **head = stack;

	(void)line_number;
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		print_mallocfail();
		return;
	}
	new->n = gvar[1];
	new->prev = NULL;
	if (!*head)
	{
		new->next = NULL;
		*head = new;
		return;
	}
	current = *head;
	while (current->prev)
		current = current->prev;
	current->prev = new;
	new->next = current;
}
