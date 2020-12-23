#include "monty.h"
/**
 * push - thing
 * @stack: thing
 * @line_number: thing
 * Return: thing
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *line;
	int i;
	(void)line_number;

	line = strtok(NULL, " \n\t\v\r\a");
	i = atoi(line);
	add_dnodeint(stack, i);
}
/**
 * pall - thing
 * @stack: thing
 * @line_number: thing
 * Return: thing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	print_dlistint(stack, line_number);
}
/**
 * pint - thing
 * @stack: thing
 * @line_number: thing
 * Return: thing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("pint");
}
/**
 * pop - thing
 * @stack: thing
 * @line_number: thing
 * Return: thing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("pop");
}
/**
 * swap - thing
 * @stack: thing
 * @line_number: thing
 * Return: thing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("swap");
}
