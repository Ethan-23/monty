#include "monty.h"
/**void push(stack_t **stack, unsigned int line_number)
{
	printf("Test %d", line_number);
	}*/

char *op_code_check(char **lines)
{
	char *hold = NULL, *line = NULL;
	int i = 0;
	for (i = 0; lines[i] != '\0'; i++)
	{
		hold = malloc((strlen(lines[i]) + 1) * sizeof(char));
		if (hold == NULL)
		{
			printf("Error fill later");
		}
		strcpy(hold, lines[i]);
		line = strtok(hold, " ");
		printf("Line: %s\n", line);
		if (strcmp("push", line) == 0)
			printf("push!");
		else if (strcmp("pall", line) == 0)
			printf("pall!");
		else if (strcmp("pint", line) == 0)
                        printf("pint!");
		else if (strcmp("pop", line) == 0)
                        printf("pop!");
		else if (strcmp("swap", line) == 0)
                        printf("swap!");
		else if (strcmp("add", line) == 0)
                        printf("add");
		else if (strcmp("nop", line) == 0)
                        printf("nop!");
		else
			printf("None!");
	}
	return (0);
}

#include "monty.h"

/**
 *
 *
 *
 */

int main(int argc, char **argv)
{
        int i, len, linelen, copy, a = 0, length = 0;
        int read;
        size_t len2 = 0;
        char *line = NULL;
        char *file, **lines;
        FILE *fd;

        (void)linelen;
        (void)copy;

        if (argc != 2)
        {
                printf("USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }
        len = strlen(argv[1]);
        file = malloc(sizeof(char) * len);
        for (i = 0; argv[1][i] != '\0'; i++)
                file[i] = argv[1][i];
        if (access(file, F_OK ) != 0)
        {
                printf("Error: Can't open file %s\n", file);
                free(file);
                exit(EXIT_FAILURE);
        }
        length = get_len(file);
        lines = malloc(length * sizeof(char*));
        if (lines == NULL)
        {
		printf("ERROR FILL IN LATER");
        }
	fd = fopen(file, "r");
        while ((read = getline(&line, &len2, fd)) != -1)
        {
		lines[a] = malloc(strlen(line + 1) * sizeof(char));
		strcpy(lines[a], line);
		a++;
        }
	op_code_check(lines);
	while(lines[a] != NULL)
		free(lines[a]);
        fclose(fd);
        free(file);
        free(lines);
        return (0);
}
