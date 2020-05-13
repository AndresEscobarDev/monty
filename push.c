#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *current;
	stack_t **head = stack;
	int n, i = 0;

	(void)line_number;
	while (data.arguments[1][i])
	{
		if (data.arguments[1][i] < '0' || data.arguments[1][i] > '9')
		{
			print_error(line_number, "usage: push integer");
			return;
		}
		i++;
	}
	n = atoi((const char *)data.arguments[1]);
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		print_mallocfail();
		return;
	}
	new->n = n;
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
