#include "monty.h"
/**
 * stack - Chage mode to stack
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	data.mode = 0;
}

/**
 * queue - Chage mode to queue
 * @stack: stacker of a doubly linked list
 * @line_number: Number line
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	data.mode = 1;
}

/**
 * add_stack - pushes an element to the stack.
 * @stack: stacker of a doubly linked list
 */
void add_stack(stack_t **stack)
{
	stack_t *new, *current;
	int n;

	n = atoi((const char *)data.arguments[1]);
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		print_mallocfail();
		return;
	}
	new->n = n, new->prev = NULL;
	if (!*stack)
	{
		new->next = NULL;
		*stack = new;
		return;
	}
	current = *stack;
	while (current->prev)
		current = current->prev;
	current->prev = new, new->next = current;
	*stack = new;
}

/**
 * add_queue - pushes an element to the queue.
 * @stack: stacker of a doubly linked list
 */
void add_queue(stack_t **stack)
{
	stack_t *new, *current;
	int n;

	n = atoi((const char *)data.arguments[1]);
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		print_mallocfail();
		return;
	}
	new->n = n;
	new->next = NULL;
	if (!*stack)
	{
		new->prev = NULL;
		*stack = new;
		return;
	}
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
}
