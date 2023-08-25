#include "main.h"


/**
* main - is the main function of my code
* @argc: number of command line argument
* @argv:  the command line arguments
* Return: 0 on succsess and other otherwise
**/

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
	char *geted;
	int num_line = 0;
	char **commands;
	char *buff;

	signal(SIGINT, control_plus_c);
	while (1)
	{

		if (isatty(STDIN_FILENO))
			promt_printer();
		num_line++;
		geted = read_command();

		if (geted[0] == '\0' || geted[0] == '\n')
		{
			free(geted);
			continue;
		}

		commands = tokenizer(geted);

		if (*commands == NULL)
		{
			free(geted);
			free(commands);
			continue;
		}
		if (_strcmp(*commands, "exit") == 0)
		{
			exit_hand(commands, geted);
		}
		buff = _strdup(*commands);

		excuter(commands, num_line, geted);
		if (_strcmp(buff,*commands) != 0)
		{
			free(*commands);
			free(commands);
			free(geted);
			free(buff);
		}
		else
		{
			free(buff);
			free(geted);
			free(commands);
		}
	}

	return (0);
}

