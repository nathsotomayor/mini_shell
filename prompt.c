#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints "$ ", wait for to enter a command, prints it on the next line.
 *
 * Return: Always 0 success
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	printf("#cisfun$ ");
	read = getline(&line, &len, stdin);
	if (read < 0)
	{
		perror("Unable to allocate buffer");
		return (EXIT_FAILURE);
	}
	printf("%s", line);
	free(line);
	return (0);
}
