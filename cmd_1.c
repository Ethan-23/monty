#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	char *line;
	int i;
	(void)line_number;

	line = strtok(NULL, " ");
        i = atoi(line);
	add_dnodeint(stack, i);
}

void pall(stack_t **stack, unsigned int line_number)
{
	print_dlistint(stack, line_number);
}

void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
        (void)line_number;
	printf("pint");
}

void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
        (void)line_number;
	printf("pop");
}

void swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
        (void)line_number;
	printf("swap");
}
