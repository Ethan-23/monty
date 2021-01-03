#include "monty.h"
/**
 * free_stack - thing
 * @stack: thing
 * Return: thing
 */
void free_stack(stack_t **stack)
{
	if ((*stack) == NULL)
		return;
	else if ((*stack)->next == NULL)
		free(*stack);
	else
	{
		free_stack(&((*stack)->next));
		free(*stack);
	}
}
