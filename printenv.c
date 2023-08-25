#include "main.h"

/**
 *
 *
 *
**/


int print_env(char *geted, char **av)
{
	int i;
	
	while(environ[i])
	{
		print(environ[i]);
		print("\n");
		i++;
	}
	free(av);
	free(geted);
	return(0);
}
