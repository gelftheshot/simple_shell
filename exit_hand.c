#include "main.h"

/**
 *exit_hand - handle when we input exit
 *@av: are the commands
 *@geted: is the geted function from getline
 *Return: No thing it void.
**/

void  exit_hand(char **av, char *geted)
{
	free(av);
	free(geted);
	exit(EXIT_SUCCESS);
}
