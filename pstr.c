#include "monty.h"
/**
 * pstr - Prints the string starting at the top of the stack,
 * followed by a new
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;
 
	if (!stack || !*stack)
	{
		printf("\n");
		return;
	}

	while (temp)
	{
		if (temp->n < 1 || temp->n > 127)
		{
			if (temp->n == 0)
				printf("%c", temp->n);
			printf("\n");
			return;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
}
