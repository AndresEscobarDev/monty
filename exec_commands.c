#include "monty.h"
/**
 * exec_commands - Function that execute the instructions
 * Return: Instructions functions
 */
void (*exec_commands(unsigned int lineNumber))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"nop", pall},
		{NULL, NULL}
	};

	if (data.arguments[0])
	{
		while (ops[i].opcode)
		{
			if (strcmp(ops[i].opcode, data.arguments[0]) == 0)
				return (ops[i].f);
			i++;
		}
		print_unknown(lineNumber);
	}

	return (nop);
}
/**
 * nop - doesn’t do anything.
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
