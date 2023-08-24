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
	int exit_stat = 1, num_line = 0;
	char **commands;
	signal(SIGINT, control_plus_c);

	while (exit_stat)
	{

		if (isatty(STDIN_FILENO))
			promt_printer();
		num_line++;
		geted = read_command();

		if (geted[0] == '\0' || geted[0] == '\n')
		{
			
			continue;
		}
	
		commands = tokenizer(geted);
		
		if (*commands == NULL)
			exit(0);
		if (_strcmp(*commands, "exit") == 0)
		{
			exit_hand(commands, geted);
		}
	
		excuter(commands, num_line, geted);
		free(geted);
		free(commands);
	}

	return (exit_stat);
}

