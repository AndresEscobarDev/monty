#include "monty.h"
/**
 * print_dlistint - Function that print a doubly linked list
 * @stack: stacker of a doubly linked list
 * Return: The number of nodes
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	int i;
	stack_t *h = *stack;

	if (!stack || !h)
		return;
	if (h->prev)
	{
		while (h->prev)
			h = h->prev;
	}
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
