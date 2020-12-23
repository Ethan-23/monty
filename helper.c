#include "monty.h"
/**
 * get_len - thing
 * @filename: thing
 * Return: thing
 */
int get_len(char *filename)
{
	FILE *fd;
	char c[100];
	int length = 0, totallength = 0, count = 0;

	fd = fopen(filename, "r");
	while (fgets(c, 100, fd) != NULL)
	{
		length = strlen(c);
		totallength += length;
		count++;
	}
	return (count);
}
