#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode; /* *stack 0, stack 1 = n, while contador*/
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct Data - Arguments and status.
 * @status: exit value
 * @arguments: arguments by line
 *
 * Description: Manage the argument and exit status
 */
typedef struct Data
{
	int status;
	char **arguments;
} data_t;
extern data_t data;

void check_argv(int *argc);

int lenline(int *_file);
char *clean_string(char *entrada, int len);
char **split_string(char *entrada, char d);

void (*exec_commands(unsigned int lineNumber))(stack_t **, unsigned int);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);

/*Print Error*/
void print_usage(void);
void print_error(int number, char *str);
void print_mallocfail(void);
void print_unknown(int number);

void free_dlistint(stack_t *head);
void simple_free(char **entrada);
void free_argument(char **arguments);

#endif
