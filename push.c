#include "monty.h"
/**
 * push - pushes an element to the stack or queue mode.
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void push(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	(void)line_number;
	if (data.arguments[1])
	{
		for (i = 0; data.arguments[1][i]; i++)
		{
			if ((data.arguments[1][i] < '0' || data.arguments[1][i] > '9') &&
			data.arguments[1][i] != '-')
			{
				print_error(line_number, "usage: push integer");
				return;
			}
		}
	}
	else
	{
		print_error(line_number, "usage: push integer");
		return;
	}
	if (data.mode == 0)
		add_stack(stack);
	else
		add_queue(stack);
}
