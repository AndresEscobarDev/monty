#include "monty.h"
/**
 * free_dlistint - function that frees a doubly linked list
 * @head: Header of a doubly linked list
 */
void free_dlistint(stack_t *head)
{
	stack_t *fr;

	if (!head)
		return;
	if (head->prev)
	{
		while (head->prev)
			head = head->prev;
	}
	fr = head->next;
	while (head)
	{
		free(head);
		if (!fr)
			return;
		head = fr;
		fr = fr->next;
	}
}

/**
 * free_argument - free all mallocs.
 * @arguments: pointer to free.
 */
void free_argument(char **arguments)
{
	int i = 0;

	if (!arguments)
		return;
	while (arguments[i])
	{
		free(arguments[i]);
		arguments[i++] = NULL;
	}
	free(arguments);
	arguments = NULL;
}
/**
 * simple_free - free a pointer
 * @entrada: pointer to free.
 */
void simple_free(char **entrada)
{
	if (entrada[0])
	{
		free(entrada[0]);
		entrada[0] = NULL;
	}
}
