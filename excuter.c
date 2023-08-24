#include "main.h"

/**
 *excuter - a functon that excute my commands
 *@av: are the commands
 *@geted: is geted line from getline
 *@j: is the number of line to be printed
 *Return: the status of my excution
 */

int excuter(char **av, int j, char *geted)
{
	pid_t pid;
	int status;

	if (*av == NULL)
		return (-1);

	pid = fork();

	if (pid == -1)
	{
		perror("forking error occured");
		return (EXIT_FAILURE);
	}

	if (pid == 0)
	{

		if (_strncmp(*av, "./", 2) != 0)
		{
			pathfinder(av);
		}

		if (execve(av[0], av, environ) == -1)
		{
			printe("./hsh: ");
			printn(j);
			printe(": ");
			printe(*av);
			printe(": ");
			printe("not found\n");

			free(av);
			free(geted);
			exit(EXIT_FAILURE);
		}
		return (EXIT_SUCCESS);
	}
		wait(&status);
		return (0);
}
