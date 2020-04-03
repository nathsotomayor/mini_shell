#include <stdio.h>

/**
 * main - prints all argumetns without ac
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: 0 success
 */

int main (int ac, char **av)
{
	int i;

	for (i = 0; av[i] != '\0'; i++)
	{
		printf("%s\n", av[i]);
	}

	(void)ac;
	return (0);
}
