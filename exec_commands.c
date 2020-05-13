#include "monty.h"

void (*exec_commands(char **arg, int line_number))(stack_t **, unsigned int)
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
		if (strcmp("push", data.arguments[0]) == 0)
		{
			/*Si es un numero*/
			while (data.arguments[1][i])
			{
				if (data.arguments[1][i] < '0' || data.arguments[1][i] > '9')
				{
					print_error(line_number, "usage: push integer");
					return (nop);
				}
				i++;
			}
			data.arguments = atoi((const char *)arg[1]);
		}
		i = 0;
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
