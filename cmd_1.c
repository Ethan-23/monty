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
	int i, j, len = 0;

	line = strtok(NULL, " \n\t\v\r\a");
	if (line == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	len = strlen(line);
	for (j = 0; j < len; j++)
		if (isdigit(line[j]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free_stack(stack);
			exit(EXIT_FAILURE);
		}
		else
			break;
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
	stack_t *stak;

	stak = (*stack);
	if ((*stack) == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stak->n);
}
/**
 * pop - thing
 * @stack: thing
 * @line_number: thing
 * Return: thing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *stak;

	if ((*stack) == NULL)
        {
                fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
                free_stack(stack);
                exit(EXIT_FAILURE);
        }
	stak = (*stack);
	(*stack) = stak->next;
	free(stak);
	if((*stack) != NULL)
	{
		(*stack)->prev = NULL;
	}

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
