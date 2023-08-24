#include "main.h"

/**
 *tokenizer - is a function that parse a string
 *@get: is the string to be parsed
 *Return: parsed double pinter
 **/

char **tokenizer(char *get)
{
	char *buff;
	char **av;
	int j = 0;
	int buffsize = 1024;

	if (get == NULL)
		return (NULL);

	av = malloc(sizeof(char *) * buffsize);

	if (av == NULL)
	{
		perror("hsh");
		return (NULL);
	}

	buff = strtok(get, "\n ");

	while (buff)
	{
		av[j] = buff;
		buff = strtok(NULL, "\n ");
		j++;
	}
	av[j] = NULL;
	return (av);


}
