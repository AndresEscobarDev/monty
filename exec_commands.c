#include "monty.h"

void (*exec_commands(void))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"nop", pall},
		{NULL, NULL}
	};

	if (data.arguments)
	{
		while (ops[i].opcode)
		{
			if (strcmp(ops[i].opcode, data.arguments[0]) == 0)
				return (ops[i].f);
			i++;
		}
	}
	return (nop);
}

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
