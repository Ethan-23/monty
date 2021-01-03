#include "monty.h"
/**
 * add - thing
 * @stack: thing
 * @line_number: thing
 * Return: thing
 */
void add(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("add");
}
/**
 * nop - thing
 * @stack: thing
 * @line_number: thing
 * Return: thing
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * fstack - thing
 * @stack: thing
 * @line_number: thing
 * Return: thing
 */
void fstack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	free_stack(stack);
}
