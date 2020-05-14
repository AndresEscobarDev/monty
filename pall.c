#include "monty.h"
/**
 * pall - prints all the values on the stack, starting
 * from the top of the stack.
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void pall(stack_t **stack, unsigned int line_number)
{
	int i;
	stack_t *h = *stack;

	(void)line_number;
	if (!stack || !h)
		return;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
