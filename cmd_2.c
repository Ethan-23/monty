#include "monty.h"

void add(stack_t **stack, unsigned int line_number)
{
	(void)stack;
        (void)line_number;
	printf("add");
}

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
        (void)line_number;
	printf("nop");
}

void fstack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	free_stack(stack);
}
