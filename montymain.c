#include "monty.h"
/**
 * cmd - thing
 * @code: thing
 * Return: thing
 */
void (*cmd(char *code))(stack_t **stack, unsigned int line_number)
{
	instruction_t cmd_list[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{NULL, fstack},
		{NULL, NULL}
	};
	int i;

	for (i = 0; cmd_list[i].opcode != NULL; i++)
	{
		if (strcmp(cmd_list[i].opcode, code) == 0)
			return (cmd_list[i].f);
	}
	fprintf(stderr,"L%d: unknown instruction %s\n", line_number, code);
	exit(EXIT_FAILURE);
}

#include "monty.h"
unsigned int line_number = 0;
/**
 * main - thing
 * @argc: thing
 * @argv: thing
 * Return: thing
 */

int main(int argc, char **argv)
{
	int read;
	size_t len2 = 0;
	char *line = NULL, *check;
	FILE *fd;
	stack_t *stack = NULL;
	void (*f)(stack_t **, unsigned int);

	if (argc != 2)
	{
		fprintf(stderr,"USAGE: monty file\n");
		free_stack(&stack);
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr,"Error: Can't open file %s\n", argv[1]);
		free(line);
		free_stack(&stack);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len2, fd)) != -1)
	{
		if (read != -1)
		{
			check = strtok(line, " \n\t\v\r\a");
			line_number++;
			f = cmd(check);
			if (f)
				f(&stack, line_number);
		}
	}
	fclose(fd);
	free_stack(&stack);
	free(line);
	return (0);
}
