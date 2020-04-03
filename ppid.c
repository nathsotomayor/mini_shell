#include <stdio.h>
#include <unistd.h>

/**
 * main - get parent process identification
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();

	printf("Parent proccess ID: %d, child proccess ID: %d \n", ppid, pid);

	return (0);
}
