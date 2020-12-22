/**
 *gcc -Wall -Werror -Wextra -pedantic *.c -o monty
 */
#include "monty.h"

/*void (*cmd(char *op_code))(stack_t **stack, unsigned int line_number)
{
	instruction_t cmd[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"NULL", NULL},
	};
	int i;
	if (op_code == NULL)
	{
		return NULL;
	}
	for (i = 0; i < 8; i++)
	{
	}
}
*/


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
		printf("%s", lines[a]);
		a++;
        }
/**        for (k = 0; k < count; k++)
        {
                for (linelen = 0; c[linelen] != '\n'; linelen++)
                {}
                lines[k] = malloc(linelen * sizeof(char));
                for (copy = 0; c[copy] != '\n'; copy++)
                {
                  lines[k][copy] = c[copy];
                }
                printf("%s", lines[k]);
		}*/
        fclose(fd);
        free(file);
        free(lines);
        return (0);
}
