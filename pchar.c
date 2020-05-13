#include "monty.h"
/**
 * pchar - Instruction that prints a char.
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		print_error(line_number, "can't pchar, stack empty");
		return;
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		print_error(line_number, "can't pchar, value out of range");
		return;
	}
	printf("%c\n", (*stack)->n);
}
