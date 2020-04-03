#include <stdio.h>
#include <unistd.h>

/**
 * main - get process identification
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pid;

	pid = getpid();

	printf("Process ID: %d\n", pid);

	return (0);
}
