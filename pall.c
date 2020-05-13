#include "monty.h"
/**
 * pall - prints all the values on the stack, starting
 * from the top of the stack.
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 * Return: The number of nodes
 */
void pall(stack_t **stack, unsigned int line_number)
{
	int i;
	stack_t *h = *stack;

	if (data.arguments[1])
	{
		print_error(line_number, "usage: pall");
		return;
	}

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
