#include "monty.h"
/**
 * print_dlistint - check the code for Holberton School students.
 * @h: Given list
 * @line_number: given var
 * Return: Always 0.
 */
void print_dlistint(stack_t **h, unsigned int line_number)
{
	int i;
	(void)line_number;

	for (i = 0; *h != NULL; i++)
	{
		printf("%d\n", (*h)->n);
		(*h) = (*h)->next;
	}
}

/**
 * add_dnodeint - check the code for Holberton School students.
 * @head: Given list
 * @n: given var
 * Return: Always 0.
 */
stack_t *add_dnodeint(stack_t **head, unsigned int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
		return (NULL);
	new->n = (n);
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	new->next = (*head);
	(*head) = new;
	return (new);
}
