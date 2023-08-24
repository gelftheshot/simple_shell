#include "main.h"

/**
 * get_env - get a specific enviroment varrable.
 * @str: is the env to be geted
 * Return: the env other wise
**/


char *get_env(char *str)
{
	int j = 0;
	char *buff;

	while (environ[j])
	{
		if (_strncmp(str, environ[j], _strlen(str)) == 0)
		{
			buff = _strdup(str_split(environ[j], (_strlen(str) + 1)));
			return (buff);
		}
		j++;
	}

	return (NULL);
}

/**
* str_split - splint a function at some point and returns the rest.
* @str1: a string to be splited
* @i: the pint on the string to be cuted
* Return: the rest of splited str
**/

char *str_split(char *str1, int i)
{
	return (str1 + i);
}
