#include "main.h"

/**
 *
 *
**/

void get_from_file(char *file_command)
{
	size_t i = 0;
	char *getedf = NULL;
	FILE *fd;
	int num_line = 0;
	fd = fopen(file_command, "r");

	if (fd == NULL)
	{
		exit(EXIT_FAILURE);
	}

	
	while((getline(&getedf, &i, fd)) != -1)
	{
		num_line++;
		excute_f(getedf,num_line,fd);
		getline(&getedf, &i,fd);
	}
	
	if (getedf != NULL)
		free(getedf);	
	fclose(fd);
	exit(0);
}

void excute_f(char *getedf, int i, FILE *fd )
{
	char **av;
	char *buff;
	
	av = tokenizer(getedf);
	buff = _strdup(*av);

	if (_strcmp(*av, "exit") == 0)
	{
		free(getedf);
		free(av);
		fclose(fd);
		exit(0);
	}
	
	excuter(av,i,getedf);
	if (_strcmp(buff, *av) != 1)
	{
		free(*av);
		free(av);
		free(buff);
	}
	else
	{
		free(av);
		free(buff);
	}
}
