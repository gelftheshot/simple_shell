#include "main.h"

/**
* read_command - read the first command
* Return: the command str;
*/

char *read_command()
{
	int i = 0, int buffsize = 1024, int r;
	char s = 0;
	char *command = malloc(sizeof(char) * buffsize);

	if (command == NULL)
		return (NULL);
	while (1)
	{
		fflush(stdin);
		r = read(STDIN_FILENO, &s, 1);
		if (r == 0)
		{
			free(command);
			exit(EXIT_SUCCESS);
		}
		if (s == '\n')
		{
			command[i] = '\0';
			return (command);
		}
		else if (s == EOF)
		{
			free(command);
			exit(EXIT_SUCCESS);
		}
		else
			command[i] = s;
		i++;
		if (i >= buffsize)
		{
			command = realloc(command, buffsize);
			if (command == NULL)
			{
				return (NULL);
			}
		}
	}
}
